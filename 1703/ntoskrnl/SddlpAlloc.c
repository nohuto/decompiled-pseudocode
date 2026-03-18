/*
 * XREFs of SddlpAlloc @ 0x14057FE50
 * Callers:
 *     SeConvertStringSidToSid @ 0x140162440 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140248BE0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057F358 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x14057FC7C (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x1405C3DFC (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x1406FA724 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x1406FB81C (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x1406FBA24 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406FBB48 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1406FC724 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1406FC80C (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1406FC9F4 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1406FCABC (EncodeAttributeName.c)
 *     GetAttributeName @ 0x1406FCC24 (GetAttributeName.c)
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1406FD724 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1406FD8D0 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1406FDB1C (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1406FE264 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406FEC78 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406FF890 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x140700190 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
