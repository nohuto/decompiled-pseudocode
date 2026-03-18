/*
 * XREFs of SddlpAlloc @ 0x1406019F0
 * Callers:
 *     SeConvertStringSidToSid @ 0x1401802F0 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1402A1DA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140600EC4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x14060181C (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x14064184C (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x140795A60 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x140796AB4 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x140796CB0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140796DD4 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x1407979BC (AppendCondition.c)
 *     DecodeAttributeName @ 0x140797A9C (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x140797C50 (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x140797D18 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x140797E80 (GetAttributeName.c)
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x140798974 (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x140798B20 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140798D60 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x1407994D0 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x140799754 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140799EA8 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x14079AB78 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x14079B478 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
