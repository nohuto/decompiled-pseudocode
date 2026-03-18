/*
 * XREFs of KiSetAddressPolicy @ 0x14017B484
 * Callers:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x14011AD8C (KiLoadDirectoryTableBase.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x14017BCF0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x140423770 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x140182300 (KxSetAddressPolicy.c)
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
