/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140085890
 * Callers:
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x1401F4B5C (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  for ( result = IopAllocateIrpExReturn(); !result; result = IopAllocateIrpExReturn() )
  {
    result = IopAllocateReserveIrp(v4, a2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
