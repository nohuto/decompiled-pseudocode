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

__int64 __fastcall sub_18001014C(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // r14
  __int64 v6; // rbx
  char v9; // si
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // r9
  int v15; // r10d
  __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0LL;
  v20 = 0LL;
  v9 = a2;
  v10 = a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = 0;
    if ( (a1 & 1) == 0 )
      v9 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &v20);
  v12 = v20;
  if ( v20 )
  {
    if ( *(_WORD *)(v20 + 24) == 267 )
    {
      if ( (unsigned int)a3 < *(_DWORD *)(v20 + 116) )
      {
        v13 = *(unsigned int *)(v20 + 8LL * a3 + 120);
        if ( (_DWORD)v13 )
        {
          *a4 = *(_DWORD *)(v20 + 8LL * a3 + 124);
          if ( !v9 && (unsigned int)v13 >= *(_DWORD *)(v12 + 84) )
          {
            v14 = 0;
            v15 = 0;
            v16 = *(unsigned __int16 *)(v12 + 20) + v20 + 24;
            if ( *(_WORD *)(v20 + 6) )
            {
              while ( 1 )
              {
                v17 = *(_DWORD *)(v16 + 12);
                if ( (unsigned int)v13 >= v17 && (unsigned int)v13 < *(_DWORD *)(v16 + 16) + v17 )
                  break;
                v16 += 40LL;
                if ( ++v15 >= (unsigned int)*(unsigned __int16 *)(v20 + 6) )
                  goto LABEL_21;
              }
              v14 = 1;
            }
LABEL_21:
            v18 = -v14;
            if ( (v16 & -(__int64)(v18 != 0)) != 0 )
              v6 = v13
                 + v10
                 + *(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0x14)
                 - (unsigned __int64)*(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0xC);
            *v5 = v6;
            LODWORD(v6) = v6 != 0 ? 0 : 0xC000000D;
            return (unsigned int)v6;
          }
LABEL_10:
          *v5 = v10 + v13;
          return (unsigned int)v6;
        }
LABEL_26:
        LODWORD(v6) = -1073741822;
        return (unsigned int)v6;
      }
    }
    else if ( *(_WORD *)(v20 + 24) == 523 && (unsigned int)a3 < *(_DWORD *)(v20 + 132) )
    {
      v13 = *(unsigned int *)(v20 + 8LL * a3 + 136);
      if ( (_DWORD)v13 )
      {
        *a4 = *(_DWORD *)(v20 + 8LL * a3 + 140);
        if ( !v9 && (unsigned int)v13 >= *(_DWORD *)(v12 + 84) )
        {
          v19 = RtlAddressInSectionTable(v12, v10, (unsigned int)v13);
          *v5 = v19;
          LODWORD(v6) = v19 == 0 ? 0xC000000D : 0;
          return (unsigned int)v6;
        }
        goto LABEL_10;
      }
      goto LABEL_26;
    }
    LODWORD(v6) = -1073741811;
    return (unsigned int)v6;
  }
  return result;
}
