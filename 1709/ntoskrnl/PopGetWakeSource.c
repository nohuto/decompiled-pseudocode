/*
 * XREFs of PopGetWakeSource @ 0x1406FA664
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PopDereferenceWakeInfos @ 0x14024131C (PopDereferenceWakeInfos.c)
 *     PopGetCurrentWakeInfos @ 0x140241390 (PopGetCurrentWakeInfos.c)
 *     PopCopyWakeSource @ 0x1406FA494 (PopCopyWakeSource.c)
 *     PopWakeSourceSize @ 0x1406FABC8 (PopWakeSourceSize.c)
 */

__int64 __fastcall PopGetWakeSource(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r13
  unsigned __int64 v3; // rbp
  _DWORD *v4; // rdi
  unsigned int CurrentWakeInfos; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r11
  _QWORD *v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // r8
  unsigned int v16; // edi
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 *v19; // r15
  _DWORD *v20; // r12
  __int64 v21; // rcx
  _DWORD *v22; // r13
  _QWORD *v23; // rbx
  _DWORD *v24; // rdi
  _QWORD *v25; // r14
  unsigned __int64 v26; // rbp
  __int64 v27; // [rsp+30h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp+8h]
  unsigned int v30; // [rsp+B0h] [rbp+18h]
  __int64 *v31; // [rsp+B8h] [rbp+20h] BYREF

  v28 = (int)a1;
  v31 = 0LL;
  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( (_DWORD)v3 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&PopWakeSourceAvailable, Executive, 0, 0, 0LL);
  CurrentWakeInfos = PopGetCurrentWakeInfos(&v31);
  v8 = CurrentWakeInfos;
  v30 = CurrentWakeInfos;
  v9 = (int)(4 * CurrentWakeInfos + 4);
  if ( CurrentWakeInfos )
  {
    v10 = v31;
    v11 = CurrentWakeInfos;
    do
    {
      v7 = *v10;
      v12 = (_QWORD *)(*v10 + 24);
      v13 = (_QWORD *)*v12;
      v9 = 4 * *(_DWORD *)(*v10 + 40) + 4 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( v13 != v12 )
      {
        v14 = PopWakeSourceSize(v13, v7, v13, v10);
        v13 = (_QWORD *)*v15;
        v9 = v14 + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  if ( v9 <= v3 )
  {
    *v4 = v8;
    v27 = v8;
    v17 = (__int64)&v4[v8 + 1];
    v18 = v8;
    if ( (_DWORD)v8 )
    {
      v19 = v31;
      v20 = v4 + 1;
      do
      {
        v21 = *v19;
        v22 = (_DWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v22 = *(_DWORD *)(*v19 + 40);
        *v20 = ((v17 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v17 = (__int64)&v22[*(unsigned int *)(v21 + 40) + 1];
        v23 = *(_QWORD **)(v21 + 24);
        if ( v23 != (_QWORD *)(v21 + 24) )
        {
          v24 = v22 + 1;
          v25 = (_QWORD *)(v21 + 24);
          do
          {
            v26 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v24++ = v26 - (_DWORD)v22;
            PopCopyWakeSource(v26, v7, (__int64)v23);
            v23 = (_QWORD *)*v23;
            v17 = *(unsigned int *)(v26 + 4) + v26;
          }
          while ( v23 != v25 );
          LODWORD(v4) = v28;
          v18 = v27;
        }
        ++v19;
        ++v20;
        v27 = --v18;
      }
      while ( v18 );
      LODWORD(v8) = v30;
      v2 = a2;
    }
    v16 = 0;
  }
  else
  {
    v16 = -1073741789;
  }
  if ( (_DWORD)v8 )
    PopDereferenceWakeInfos(v8, v31);
  *v2 = v9;
  return v16;
}
