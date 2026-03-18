/*
 * XREFs of MiLocateSubsectionNode @ 0x1400A2890
 * Callers:
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiAdvanceVadView @ 0x140112B84 (MiAdvanceVadView.c)
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  KIRQL v5; // si
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _QWORD *v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rbx

  if ( a2 >= 0x3FFFFFFFFFF000LL )
    return 0LL;
  if ( a3 == 1 )
    v5 = 17;
  else
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 256);
  v7 = a2 >> 12;
  v8 = *(unsigned int *)(v6 + 36) | ((unsigned __int64)(*(_WORD *)(v6 + 32) & 0xFFC0) << 26);
  if ( v7 >= v8 )
  {
    v9 = v8 + *(unsigned int *)(v6 + 40);
    if ( *(_WORD *)(v6 + 34) < 0x10u )
      v9 = v8 + *(unsigned int *)(v6 + 40) - 1LL;
    if ( v7 <= v9 )
    {
      if ( v5 != 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        __writecr8(v5);
      }
      return (_QWORD *)v6;
    }
  }
  v11 = *(_QWORD **)(a1 + 240);
  if ( v11 )
  {
    v12 = (unsigned int)v7 | ((unsigned __int64)(unsigned __int16)(WORD2(v7) << 6) << 26);
    do
    {
      v13 = *((unsigned int *)v11 - 5) | ((unsigned __int64)(*(_WORD *)(v11 - 3) & 0xFFC0) << 26);
      v14 = *((unsigned int *)v11 - 4);
      v15 = v14 + v13;
      if ( *((_WORD *)v11 - 11) < 0x10u )
        v15 = v14 + v13 - 1;
      if ( v12 > v15 )
      {
        v11 = (_QWORD *)v11[1];
      }
      else
      {
        if ( v12 >= v13 )
        {
          v16 = v11 - 7;
          *(_QWORD *)(a1 + 256) = v11 - 7;
          if ( v5 != 17 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
            __writecr8(v5);
          }
          return v16;
        }
        v11 = (_QWORD *)*v11;
      }
    }
    while ( v11 );
  }
  if ( v5 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v5);
  }
  return 0LL;
}
