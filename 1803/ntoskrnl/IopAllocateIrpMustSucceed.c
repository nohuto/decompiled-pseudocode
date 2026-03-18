/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140106AA0
 * Callers:
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x14023208C (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL, retaddr);
        !result;
        result = IopAllocateIrpExReturn(a1, v2, 0LL, retaddr) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
