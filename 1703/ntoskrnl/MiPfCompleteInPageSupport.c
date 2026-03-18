/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14010B0F0
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14010B05C (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x140213BC8 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR BugCheckParameter2, char *AnyMultiplexedVm)
{
  ULONG_PTR v2; // r10
  char v4; // r9
  int v5; // ecx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = BugCheckParameter2;
  if ( AnyMultiplexedVm == (char *)1 )
  {
    v4 = *(_BYTE *)(BugCheckParameter2 + 189);
    v5 = 2;
    if ( (v4 & 3) == 1 )
    {
      v5 = 0;
    }
    else if ( (v4 & 3) != 2 )
    {
      if ( (v4 & 3) != 3 )
      {
LABEL_8:
        *(_BYTE *)(v2 + 189) = v4 & 0xFC;
        goto LABEL_2;
      }
      v5 = 1;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v5);
    goto LABEL_8;
  }
LABEL_2:
  *(_BYTE *)(v2 + 191) |= 0x80u;
  return MiWaitForInPageComplete(v2, 0LL, (__int64)AnyMultiplexedVm, 0LL, 0, (int *)&v6);
}
