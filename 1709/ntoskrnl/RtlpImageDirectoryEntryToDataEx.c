/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14000A9C8 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140015D58 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     KiLockServiceTable @ 0x14013A410 (KiLockServiceTable.c)
 *     RtlCaptureImageExceptionValues @ 0x14015BE00 (RtlCaptureImageExceptionValues.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     KiFatalExceptionFilter @ 0x140832C9C (KiFatalExceptionFilter.c)
 *     ViThunkFindExportAddress @ 0x140835654 (ViThunkFindExportAddress.c)
 *     MiUpdateThunks @ 0x140837E10 (MiUpdateThunks.c)
 *     MiApplyDynamicRelocations @ 0x14083982C (MiApplyDynamicRelocations.c)
 *     MiBuildImportsForBootDrivers @ 0x140848304 (MiBuildImportsForBootDrivers.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1400AE3E0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x1400AE490 (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400AE5B0 (RtlpImageDirectoryEntryToData32.c)
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
