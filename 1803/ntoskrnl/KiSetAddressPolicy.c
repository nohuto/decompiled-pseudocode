/*
 * XREFs of KiSetAddressPolicy @ 0x1400FDE10
 * Callers:
 *     KiSwapProcess @ 0x140008570 (KiSwapProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1400A3ED0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiLoadDirectoryTableBase @ 0x1400ADCA0 (KiLoadDirectoryTableBase.c)
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1401ABF50 (KxSetAddressPolicy.c)
 */

__int64 KiSetAddressPolicy()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+20h] [rbp-8h]

  _disable();
  KxSetAddressPolicy();
  result = v1 >> 9;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
