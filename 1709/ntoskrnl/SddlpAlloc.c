/*
 * XREFs of SddlpAlloc @ 0x14057C7AC
 * Callers:
 *     SeConvertStringSidToSid @ 0x140150EB0 (SeConvertStringSidToSid.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140260300 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057B9FC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x14057C5D8 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x1405D73CC (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x14073215C (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertSidToStringSidW @ 0x140733204 (LocalConvertSidToStringSidW.c)
 *     LocalGetStringForControl @ 0x14073340C (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140733530 (LocalGetStringForSid.c)
 *     AppendCondition @ 0x140734114 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1407341FC (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1407343EC (EncloseSubCondition.c)
 *     EncodeAttributeName @ 0x1407344B4 (EncodeAttributeName.c)
 *     GetAttributeName @ 0x14073461C (GetAttributeName.c)
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x14073513C (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1407352E8 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x140735534 (GetPrintableOperandValue.c)
 *     GetStringOperandValue @ 0x140735C84 (GetStringOperandValue.c)
 *     LocalGetConditionForString @ 0x140735F08 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140736660 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1407372E0 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x140737BE0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
