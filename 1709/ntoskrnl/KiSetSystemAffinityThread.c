/*
 * XREFs of KiSetSystemAffinityThread @ 0x1400A8760
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400A88E8 (KiUpdateNodeAffinitizedFlag.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1[1];
  *(_WORD *)(v4 + 584) = *(_WORD *)(a2 + 8);
  *(_QWORD *)(v4 + 576) = *(_QWORD *)a2;
  if ( a3 < 0x500 )
  {
    *(_DWORD *)(v4 + 588) = a3;
    v14 = a3;
    v9 = 0x140000000uLL;
LABEL_7:
    v7 = *(_QWORD *)(v9 + 8 * v14 + 4204864);
    goto LABEL_8;
  }
  v7 = KiProcessorBlock[*(unsigned int *)(v4 + 588)];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v7, a2) )
  {
    v10 = *(_QWORD *)(v7 + 192);
    v11 = *(_WORD *)(v8 + 8);
    v12 = *(_QWORD *)v8;
    if ( v11 == *(_WORD *)(v10 + 144) )
    {
      v13 = v12 & *(_QWORD *)(v10 + 136);
      if ( v13 )
        v12 = v13;
    }
    _BitScanReverse64(&v12, v12);
    v14 = *(unsigned int *)(v9 + 4LL * ((unsigned int)v12 + (v11 << 6)) + 4222800);
    *(_DWORD *)(v4 + 588) = v14;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)(v4 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v4) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v7, v4);
    KiUpdateNodeAffinitizedFlag(v4);
  }
  result = KiPrcbInGroupAffinity(a1, v4 + 576);
  if ( !(_DWORD)result )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
    if ( !a1[2] )
    {
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 12, 0LL) )
      {
        do
        {
          KeYieldProcessorEx(&v18);
          result = a1[6];
        }
        while ( result );
      }
      if ( !a1[2] )
        result = KiSelectNextThread(a1, a4, v16, v17);
      _InterlockedAnd64(a1 + 6, 0LL);
    }
  }
  return result;
}
