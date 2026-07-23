/*
 * XREFs of sub_18001014C @ 0x18001014C
 * Callers:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     LdrAccessResource_0 @ 0x180010F9C (LdrAccessResource_0.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_180075C44 @ 0x180075C44 (sub_180075C44.c)
 *     RtlFindExportedRoutineByName @ 0x18007B690 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x18007B7A0 (RtlImageDirectoryEntryToData.c)
 *     sub_180082648 @ 0x180082648 (sub_180082648.c)
 *     sub_180082804 @ 0x180082804 (sub_180082804.c)
 *     sub_18008325C @ 0x18008325C (sub_18008325C.c)
 *     sub_180085BEC @ 0x180085BEC (sub_180085BEC.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800C9E34 @ 0x1800C9E34 (sub_1800C9E34.c)
 *     sub_1800CA01C @ 0x1800CA01C (sub_1800CA01C.c)
 *     sub_1800CAFA8 @ 0x1800CAFA8 (sub_1800CAFA8.c)
 *     sub_1800CB260 @ 0x1800CB260 (sub_1800CB260.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800DB230 (LdrEnumResources.c)
 *     sub_1800F2E70 @ 0x1800F2E70 (sub_1800F2E70.c)
 *     sub_180107D2C @ 0x180107D2C (sub_180107D2C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall sub_18001014C(unsigned __int64 BaseOfImage, char a2, unsigned __int16 a3, DWORD *a4, char **a5)
{
  char **v5; // r14
  char *v6; // rbx
  char v9; // si
  char *v10; // rdi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  __int64 VirtualAddress; // rdx
  char v14; // r9
  int v15; // r10d
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // r9
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
        VirtualAddress = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
        if ( (_DWORD)VirtualAddress )
        {
          *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3 + 1);
          if ( !v9 && (unsigned int)VirtualAddress >= v12->OptionalHeader.SizeOfHeaders )
          {
            v14 = 0;
            v15 = 0;
            v16 = (unsigned __int64)&OutHeaders->OptionalHeader + v12->FileHeader.SizeOfOptionalHeader;
            if ( OutHeaders->FileHeader.NumberOfSections )
            {
              while ( 1 )
              {
                v17 = *(_DWORD *)(v16 + 12);
                if ( (unsigned int)VirtualAddress >= v17 && (unsigned int)VirtualAddress < *(_DWORD *)(v16 + 16) + v17 )
                  break;
                v16 += 40LL;
                if ( ++v15 >= (unsigned int)OutHeaders->FileHeader.NumberOfSections )
                  goto LABEL_21;
              }
              v14 = 1;
            }
LABEL_21:
            v18 = -v14;
            if ( (v16 & -(__int64)(v18 != 0)) != 0 )
              v6 = &v10[*(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0x14)
                      - (unsigned __int64)*(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0xC)
                      + VirtualAddress];
            *v5 = v6;
            LODWORD(v6) = v6 != 0LL ? 0 : 0xC000000D;
            return (int)v6;
          }
LABEL_10:
          *v5 = &v10[VirtualAddress];
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
        goto LABEL_10;
      }
      goto LABEL_26;
    }
    LODWORD(v6) = -1073741811;
    return (int)v6;
  }
  return result;
}
