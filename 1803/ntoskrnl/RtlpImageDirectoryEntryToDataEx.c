/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     RtlpLookupUserFunctionTable @ 0x1400C9E60 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140160E1C (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x140169E9C (KiLockServiceTable.c)
 *     RtlCaptureImageExceptionValues @ 0x140186514 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiBuildImportsForBootDrivers @ 0x14089DF48 (MiBuildImportsForBootDrivers.c)
 *     ViThunkFindExportAddress @ 0x1408AD414 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1408ADF74 (MiUpdateThunks.c)
 *     MiApplyDynamicRelocations @ 0x1408BB388 (MiApplyDynamicRelocations.c)
 *     KiFatalExceptionFilter @ 0x1408C5BA8 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14003EEE0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x140040C98 (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14013D6A8 (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  PVOID v6; // rbx
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  NtHeader = 0LL;
  v6 = (PVOID)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
    v6 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  result = RtlImageNtHeaderEx(1u, v6, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      return RtlpImageDirectoryEntryToData32(v6, NtHeader, v5);
    }
    else if ( Magic == 523 )
    {
      return RtlpImageDirectoryEntryToData64(v6, NtHeader, v5);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
