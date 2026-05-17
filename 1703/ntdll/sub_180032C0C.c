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

__int64 __fastcall sub_180032C0C(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4, __int64 *a5)
{
  __int64 *v5; // r14
  __int64 v6; // rbx
  char v9; // si
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  _DWORD *v17; // rdx
  unsigned int v18; // ecx
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
        v15 = *(unsigned int *)(v20 + 8LL * a3 + 120);
        if ( (_DWORD)v15 )
        {
          *a4 = *(_DWORD *)(v20 + 8LL * a3 + 124);
          if ( !v9 && (unsigned int)v15 >= *(_DWORD *)(v12 + 84) )
          {
            v16 = 0;
            v17 = (_DWORD *)(*(unsigned __int16 *)(v12 + 20) + v20 + 24);
            if ( *(_WORD *)(v20 + 6) )
            {
              while ( 1 )
              {
                v18 = v17[3];
                if ( (unsigned int)v15 >= v18 && (unsigned int)v15 < v17[4] + v18 )
                  break;
                v17 += 10;
                if ( ++v16 >= (unsigned int)*(unsigned __int16 *)(v20 + 6) )
                  goto LABEL_25;
              }
            }
            else
            {
LABEL_25:
              v17 = 0LL;
            }
            if ( v17 )
              v6 = v15 + v10 + (unsigned int)v17[5] - (unsigned __int64)(unsigned int)v17[3];
            *v5 = v6;
            LODWORD(v6) = v6 != 0 ? 0 : 0xC000000D;
            return (unsigned int)v6;
          }
          v14 = v10 + v15;
LABEL_11:
          *v5 = v14;
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
        v14 = v10 + v13;
        goto LABEL_11;
      }
      goto LABEL_26;
    }
    LODWORD(v6) = -1073741811;
    return (unsigned int)v6;
  }
  return result;
}
