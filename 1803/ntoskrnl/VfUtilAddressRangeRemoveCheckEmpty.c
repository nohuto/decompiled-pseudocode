/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x140813EE4
 * Callers:
 *     IovpCompleteRequest2 @ 0x14081CC4C (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x140820B50 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x140820DE8 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14082B51C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x140813EB8 (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
