/*
 * XREFs of ACPIEvaluateSpareDsm @ 0x1C007E80C
 * Callers:
 *     ACPIModuleGetSpareProperties @ 0x1C007E9E0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007EAC0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIEvaluateSpareDsm(__int64 *a1, unsigned int a2, __int128 *a3, void *a4)
{
  __int64 v4; // rbx
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  __int64 v12; // [rsp+20h] [rbp-99h] BYREF
  __int128 v13; // [rsp+28h] [rbp-91h]
  __int128 v14; // [rsp+38h] [rbp-81h]
  __int64 v15; // [rsp+48h] [rbp-71h]
  _QWORD v16[20]; // [rsp+50h] [rbp-69h] BYREF

  v4 = a2;
  memset(a4, 0, 0x28uLL);
  memset(v16, 0, sizeof(v16));
  v16[7] = 0LL;
  LODWORD(v16[3]) = 16;
  WORD1(v16[0]) = 3;
  v16[4] = &HOT_REPLACE_DSM_GUID;
  v16[19] = &v12;
  WORD1(v16[5]) = 1;
  WORD1(v16[10]) = 1;
  v16[12] = v4;
  WORD1(v16[15]) = 4;
  LODWORD(v16[18]) = 48;
  if ( a3 )
  {
    v8 = *a3;
    v9 = *((_DWORD *)a3 + 6);
    LODWORD(v12) = 1;
    v10 = a3[1];
    v13 = v8;
    v15 = *((_QWORD *)a3 + 4);
    v14 = v10;
    if ( v9 )
      LODWORD(v16[18]) = v9 + 8;
  }
  else
  {
    LODWORD(v12) = 0;
  }
  return AMLIEvalNameSpaceObject(a1, a4, 4u, v16, v12, v13, v14, v15);
}
