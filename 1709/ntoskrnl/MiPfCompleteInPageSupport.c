/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14002083C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1400207A4 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x14021BACC (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // r10
  char v4; // r9
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = BugCheckParameter2;
  if ( a2 == 1 )
  {
    v4 = *(_BYTE *)(BugCheckParameter2 + 189);
    v5 = 2LL;
    if ( (v4 & 3) == 1 )
    {
      v5 = 0LL;
    }
    else if ( (v4 & 3) != 2 )
    {
      if ( (v4 & 3) != 3 )
      {
LABEL_9:
        *(_BYTE *)(v2 + 189) = v4 & 0xFC;
        goto LABEL_2;
      }
      v5 = 1LL;
    }
    MiGetAnyMultiplexedVm(v5);
    goto LABEL_9;
  }
LABEL_2:
  *(_BYTE *)(v2 + 191) |= 0x80u;
  return MiWaitForInPageComplete(v2, 0, (__int64)&v6);
}
