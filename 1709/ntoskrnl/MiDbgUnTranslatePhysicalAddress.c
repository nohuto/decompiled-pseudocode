/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x140227F74
 * Callers:
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1400D034C (KeFlushSingleCurrentTb.c)
 */

unsigned __int8 __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int8 result; // al

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_140388CC8 << 25;
    _InterlockedExchange64((volatile __int64 *)qword_140388CC8, 0LL);
    v3 = v2 >> 16;
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v3, 0, 1u);
    else
      KeFlushSingleCurrentTb(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 8) != 0 || (v4 & 0x10) != 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(a1 + 4));
    }
  }
  result = *((_BYTE *)a1 + 4);
  if ( result != 17 )
    __writecr8(result);
  return result;
}
