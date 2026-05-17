/*
 * XREFs of RtlAddressInSectionTable @ 0x180020840
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180028E78 (LdrpGetProcedureAddress.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800DF60C (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA32@@K$0IAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_S.c)
 *     ??$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0?IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPORTTABLEP_SORTED_LIST_ENTRY@@PEAXPEAU_IMAGE_NT_HEADERS64@@PEFAU_IMAGE_IMPORT_DESCRIPTOR@@@Z @ 0x1800DF6C8 (--$InsertModuleFunctions@U_IMAGE_THUNK_DATA64@@_K$0-IAAAAAAAAAAAAAAA@@@YAJPEAU_IMPORTTABLEP_IMPO.c)
 *     RtlComputeImportTableHash @ 0x1800DF8F0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1800299D0 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 RtlAddressInSectionTable()
{
  unsigned __int64 result; // rax
  unsigned int v1; // r8d
  __int64 v2; // r11

  result = RtlSectionTableFromVirtualAddress();
  if ( result )
    return v2 + *(unsigned int *)(result + 20) - (unsigned __int64)*(unsigned int *)(result + 12) + v1;
  return result;
}
