/*
 * XREFs of sub_180032C0C @ 0x180032C0C
 * Callers:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     LdrAccessResource_0 @ 0x1800380F8 (LdrAccessResource_0.c)
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 *     sub_18003999C @ 0x18003999C (sub_18003999C.c)
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     sub_18007AAA4 @ 0x18007AAA4 (sub_18007AAA4.c)
 *     RtlFindExportedRoutineByName @ 0x18007BE90 (RtlFindExportedRoutineByName.c)
 *     sub_180086714 @ 0x180086714 (sub_180086714.c)
 *     sub_180086ED8 @ 0x180086ED8 (sub_180086ED8.c)
 *     RtlImageDirectoryEntryToData @ 0x180087330 (RtlImageDirectoryEntryToData.c)
 *     sub_1800888F8 @ 0x1800888F8 (sub_1800888F8.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_18008D400 @ 0x18008D400 (sub_18008D400.c)
 *     sub_1800900A4 @ 0x1800900A4 (sub_1800900A4.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D5CA0 @ 0x1800D5CA0 (sub_1800D5CA0.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800E1580 (LdrEnumResources.c)
 *     sub_1800F5B90 @ 0x1800F5B90 (sub_1800F5B90.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall sub_180032C0C(unsigned __int64 BaseOfImage, char a2, unsigned __int16 a3, DWORD *a4, char **a5)
{
  char **v5; // r14
  char *v6; // rbx
  char v9; // si
  char *v10; // rdi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  __int64 VirtualAddress; // rdx
  char *v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  _DWORD *v17; // rdx
  unsigned int v18; // ecx
  char *v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0LL;
  OutHeaders = 0LL;
  v9 = a2;
  v10 = (char *)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = 0;
    if ( (BaseOfImage & 1) == 0 )
      v9 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v12 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      if ( (unsigned int)a3 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
      {
        v15 = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
        if ( (_DWORD)v15 )
        {
          *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3 + 1);
          if ( !v9 && (unsigned int)v15 >= v12->OptionalHeader.SizeOfHeaders )
          {
            v16 = 0;
            v17 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + v12->FileHeader.SizeOfOptionalHeader);
            if ( OutHeaders->FileHeader.NumberOfSections )
            {
              while ( 1 )
              {
                v18 = v17[3];
                if ( (unsigned int)v15 >= v18 && (unsigned int)v15 < v17[4] + v18 )
                  break;
                v17 += 10;
                if ( ++v16 >= (unsigned int)OutHeaders->FileHeader.NumberOfSections )
                  goto LABEL_25;
              }
            }
            else
            {
LABEL_25:
              v17 = 0LL;
            }
            if ( v17 )
              v6 = &v10[(unsigned int)v17[5] - (unsigned __int64)(unsigned int)v17[3] + v15];
            *v5 = v6;
            LODWORD(v6) = v6 != 0LL ? 0 : 0xC000000D;
            return (int)v6;
          }
          v14 = &v10[v15];
LABEL_11:
          *v5 = v14;
          return (int)v6;
        }
LABEL_26:
        LODWORD(v6) = -1073741822;
        return (int)v6;
      }
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 && a3 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[a3].Size;
        if ( !v9 && (unsigned int)VirtualAddress >= v12->OptionalHeader.SizeOfHeaders )
        {
          v19 = (char *)RtlAddressInSectionTable(v12, v10, VirtualAddress);
          *v5 = v19;
          LODWORD(v6) = v19 == 0LL ? 0xC000000D : 0;
          return (int)v6;
        }
        v14 = &v10[VirtualAddress];
        goto LABEL_11;
      }
      goto LABEL_26;
    }
    LODWORD(v6) = -1073741811;
    return (int)v6;
  }
  return result;
}
