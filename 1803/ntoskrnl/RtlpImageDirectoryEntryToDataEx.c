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
        unsigned __int64 BaseAddress,
        char a2,
        unsigned __int16 a3,
        int a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  char v8; // di
  PVOID v9; // rbx
  char v11; // dl
  NTSTATUS result; // eax
  unsigned __int16 Magic; // ax
  int v14; // edx
  int v15; // edx
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64)a5;
  NtHeader = 0LL;
  v8 = a2;
  v9 = (PVOID)BaseAddress;
  *a5 = 0LL;
  if ( (BaseAddress & 3) != 0 )
  {
    v11 = 0;
    v9 = (PVOID)(BaseAddress & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (BaseAddress & 1) == 0 )
      v11 = a2;
    v8 = v11;
  }
  result = RtlImageNtHeaderEx(1u, v9, 0LL, &NtHeader);
  if ( NtHeader )
  {
    Magic = NtHeader->OptionalHeader.Magic;
    v14 = 267;
    if ( Magic == 267 )
    {
      LOBYTE(v14) = v8;
      return RtlpImageDirectoryEntryToData32((_DWORD)v9, v14, a3, a4, (__int64)NtHeader, v5);
    }
    else
    {
      v15 = 523;
      if ( Magic == 523 )
      {
        LOBYTE(v15) = v8;
        return RtlpImageDirectoryEntryToData64((_DWORD)v9, v15, a3, a4, (__int64)NtHeader, v5);
      }
      else
      {
        return -1073741811;
      }
    }
  }
  return result;
}
