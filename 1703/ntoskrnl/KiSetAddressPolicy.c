/*
 * XREFs of KiSetAddressPolicy @ 0x14017BD00
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x140023270 (KiLoadDirectoryTableBase.c)
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14017C5D0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x140403784 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x140182880 (KxSetAddressPolicy.c)
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
