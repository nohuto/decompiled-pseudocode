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
  __int64 v9; // r9
  __int64 v11; // rdx
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // r15d
  int v22; // edi
  __int64 v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 result; // rax
  __int64 v35; // [rsp+60h] [rbp+8h]

  v35 = (__int64)(a1 - 2992);
  v9 = PPM_IDLESTATES_DATA_GUID;
  v11 = PPM_IDLESTATES_DATA_GUID - *a2;
  if ( !v11 )
    v11 = 0xE710D47A1ACF1686uLL - a2[1];
  v12 = 0;
  if ( v11 )
  {
    v14 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
    v9 = PPM_IDLESTATES_DATA_GUID;
  }
  v15 = a1[46];
  v16 = PPM_PERFSTATES_DATA_GUID - *a2;
  if ( PPM_PERFSTATES_DATA_GUID == *a2 )
    v16 = 0x26018D33012BAAB4LL - a2[1];
  if ( v16 || !v15 )
  {
    v18 = v9 - *a2;
    if ( !v18 )
      v18 = 0xE710D47A1ACF1686uLL - a2[1];
    if ( v18 || !*a1 )
    {
      v19 = PPM_PERFMON_PERFSTATE_GUID - *a2;
      if ( PPM_PERFMON_PERFSTATE_GUID == *a2 )
        v19 = 0x9E75876A060BA1B0uLL - a2[1];
      if ( v19 || !v15 )
      {
        v22 = -1073741808;
        v21 = 0;
        goto LABEL_48;
      }
      v17 = 12;
    }
    else
    {
      v17 = 32 * *(_DWORD *)(*a1 + 28LL) + 56;
    }
  }
  else
  {
    v17 = 80;
  }
  v20 = a6 != 0 ? 72 : 64;
  v21 = v20 + v17;
  if ( a3 >= v20 + v17 )
  {
    *(_DWORD *)a4 = v21;
    if ( a6 )
    {
      v23 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v23;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v20;
    }
    *(_DWORD *)(a4 + 60) = v17;
    v24 = (_DWORD *)(a4 + v20);
    memset(v24, 0, v17);
    v25 = *a2;
    v26 = PPM_PERFSTATES_DATA_GUID - *a2;
    if ( PPM_PERFSTATES_DATA_GUID == *a2 )
      v26 = 0x26018D33012BAAB4LL - a2[1];
    if ( v26 || !v15 )
    {
      v27 = PPM_IDLESTATES_DATA_GUID - v25;
      if ( PPM_IDLESTATES_DATA_GUID == v25 )
        v27 = 0xE710D47A1ACF1686uLL - a2[1];
      if ( v27 || !*a1 )
      {
        v33 = PPM_PERFMON_PERFSTATE_GUID - *a2;
        if ( PPM_PERFMON_PERFSTATE_GUID == *a2 )
          v33 = 0x9E75876A060BA1B0uLL - a2[1];
        if ( !v33 && v15 )
          PpmPerfGetCurrentState(v35, (unsigned __int64)v24, 0LL, (unsigned __int64)(v24 + 2), v24 + 1, 0LL);
      }
      else
      {
        v24[1] = *(_DWORD *)(*a1 + 28LL);
        v24[2] = *(_DWORD *)(*a1 + 12LL);
        v24[3] = *(_DWORD *)(*a1 + 20LL);
        *((_QWORD *)v24 + 2) = *(a1 - 2967);
        v28 = *a1;
        v29 = *(_DWORD *)(*a1 + 28LL);
        if ( v29 )
        {
          v30 = 0LL;
          v31 = v24 + 8;
          v32 = v29;
          do
          {
            v30 += 248LL;
            *(v31 - 2) = *(_DWORD *)(v30 + *a1 + 752) / 0xAu;
            *(v31 - 1) = *(_DWORD *)(v30 + *a1 + 760);
            *v31 = *(_DWORD *)(v28 + 532);
            v31 += 8;
            *((_BYTE *)v31 - 28) = *(_BYTE *)(v28 + 536);
            *((_BYTE *)v31 - 27) = *(_BYTE *)(v28 + 537);
            *((_BYTE *)v31 - 26) = *(_BYTE *)(v30 + *a1 + 808);
            *((_QWORD *)v31 - 3) = *(unsigned int *)(v30 + *a1 + 764);
            *(v31 - 4) = 1;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else
    {
      *v24 = 0;
      v24[1] = *(_DWORD *)(v15 + 316);
      *((_QWORD *)v24 + 1) = 0LL;
      *((_QWORD *)v24 + 2) = 0LL;
      *((_BYTE *)v24 + 28) = 100;
      *((_BYTE *)v24 + 29) = *(_BYTE *)(v15 + 353);
      v24[8] = HIDWORD(PpmCurrentProfile[175 * dword_14034BB2C + 7]);
      *((_QWORD *)v24 + 5) = *(_QWORD *)(v15 + 32);
      v24[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v22 = -1073741789;
      goto LABEL_48;
    }
    *(_DWORD *)(a4 + 48) = v21;
    v21 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v22 = 0;
LABEL_48:
  if ( v14 )
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  result = (unsigned int)v22;
  if ( v22 >= 0 )
    v12 = v21;
  *a5 = v12;
  return result;
}
