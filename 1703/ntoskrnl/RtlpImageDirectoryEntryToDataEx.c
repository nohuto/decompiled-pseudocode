/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14008B920
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14003486C (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14006DD94 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     KiLockServiceTable @ 0x140145BB8 (KiLockServiceTable.c)
 *     RtlCaptureImageExceptionValues @ 0x140167CE4 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MiApplyDynamicRelocations @ 0x140810CD0 (MiApplyDynamicRelocations.c)
 *     ViThunkFindExportAddress @ 0x1408154E8 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x1408161C0 (MiUpdateThunks.c)
 *     MiBuildImportsForBootDrivers @ 0x14081828C (MiBuildImportsForBootDrivers.c)
 *     KiFatalExceptionFilter @ 0x140822800 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x140012D24 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14008BADC (RtlpImageDirectoryEntryToData64.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  char v8; // di
  PVOID v9; // rbx
  char v11; // dl
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  NtHeader = 0LL;
  v8 = a2;
  v9 = (PVOID)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v11 = 0;
    v9 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (BaseOfImage & 1) == 0 )
      v11 = a2;
    v8 = v11;
  }
  result = RtlImageNtHeaderEx(1u, v9, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      return RtlpImageDirectoryEntryToData32((char *)v9, v8, a3, a4, NtHeader, v5);
    }
    else if ( Magic == 523 )
    {
      return RtlpImageDirectoryEntryToData64(v9, NtHeader, (__int64)v5);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
