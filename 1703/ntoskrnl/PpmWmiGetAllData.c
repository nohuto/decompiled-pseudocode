/*
 * XREFs of PpmWmiGetAllData @ 0x1406CF948
 * Callers:
 *     PpmWmiDispatch @ 0x1405C71C0 (PpmWmiDispatch.c)
 * Callees:
 *     PpmPerfGetCurrentState @ 0x140031BD8 (PpmPerfGetCurrentState.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v6; // r10
  __int64 v10; // r9
  __int64 v12; // rdx
  int v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v15; // r13
  __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // edx
  int v22; // r15d
  int v23; // edi
  __int64 v24; // rax
  _DWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // r8
  _DWORD *v32; // rdi
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 result; // rax
  __int64 v36; // [rsp+60h] [rbp+8h]

  v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
  v36 = (__int64)(a1 - 2992);
  v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  v12 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - *a2;
  if ( !v12 )
    v12 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
  v13 = 0;
  if ( v12 )
  {
    v15 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v15 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
    v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
    v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  }
  v16 = a1[46];
  v17 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
    v17 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
  if ( v17 || !v16 )
  {
    v19 = v10 - *a2;
    if ( !v19 )
      v19 = v6 - a2[1];
    if ( v19 || !*a1 )
    {
      v20 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
      if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
        v20 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
      if ( v20 || !v16 )
      {
        v23 = -1073741808;
        v22 = 0;
        goto LABEL_48;
      }
      v18 = 12;
    }
    else
    {
      v18 = 32 * *(_DWORD *)(*a1 + 28LL) + 56;
    }
  }
  else
  {
    v18 = 80;
  }
  v21 = a6 != 0 ? 72 : 64;
  v22 = v21 + v18;
  if ( a3 >= v21 + v18 )
  {
    *(_DWORD *)a4 = v22;
    if ( a6 )
    {
      v24 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v24;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v21;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v21;
    }
    *(_DWORD *)(a4 + 60) = v18;
    v25 = (_DWORD *)(a4 + v21);
    memset(v25, 0, v18);
    v26 = *a2;
    v27 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
    if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
      v27 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
    if ( v27 || !v16 )
    {
      v28 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v26;
      if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v26 )
        v28 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
      if ( v28 || !*a1 )
      {
        v34 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
        if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
          v34 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
        if ( !v34 && v16 )
          PpmPerfGetCurrentState(v36, (unsigned __int64)v25, 0LL, (unsigned __int64)(v25 + 2), v25 + 1, 0LL);
      }
      else
      {
        v25[1] = *(_DWORD *)(*a1 + 28LL);
        v25[2] = *(_DWORD *)(*a1 + 12LL);
        v25[3] = *(_DWORD *)(*a1 + 20LL);
        *((_QWORD *)v25 + 2) = *(a1 - 2967);
        v29 = *a1;
        v30 = *(_DWORD *)(*a1 + 28LL);
        if ( v30 )
        {
          v31 = 0LL;
          v32 = v25 + 8;
          v33 = v30;
          do
          {
            v31 += 248LL;
            *(v32 - 2) = *(_DWORD *)(v31 + *a1 + 752) / 0xAu;
            *(v32 - 1) = *(_DWORD *)(v31 + *a1 + 760);
            *v32 = *(_DWORD *)(v29 + 532);
            v32 += 8;
            *((_BYTE *)v32 - 28) = *(_BYTE *)(v29 + 536);
            *((_BYTE *)v32 - 27) = *(_BYTE *)(v29 + 537);
            *((_BYTE *)v32 - 26) = *(_BYTE *)(v31 + *a1 + 808);
            *((_QWORD *)v32 - 3) = *(unsigned int *)(v31 + *a1 + 764);
            *(v32 - 4) = 1;
            --v33;
          }
          while ( v33 );
        }
      }
    }
    else
    {
      *v25 = 0;
      v25[1] = *(_DWORD *)(v16 + 316);
      *((_QWORD *)v25 + 1) = 0LL;
      *((_QWORD *)v25 + 2) = 0LL;
      *((_BYTE *)v25 + 28) = 100;
      *((_BYTE *)v25 + 29) = *(_BYTE *)(v16 + 353);
      v25[8] = HIDWORD(PpmCurrentProfile[175 * dword_14034BB2C + 7]);
      *((_QWORD *)v25 + 5) = *(_QWORD *)(v16 + 32);
      v25[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v23 = -1073741789;
      goto LABEL_48;
    }
    *(_DWORD *)(a4 + 48) = v22;
    v22 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v23 = 0;
LABEL_48:
  if ( v15 )
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  result = (unsigned int)v23;
  if ( v23 >= 0 )
    v13 = v22;
  *a5 = v13;
  return result;
}
