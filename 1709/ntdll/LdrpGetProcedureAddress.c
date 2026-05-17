/*
 * XREFs of LdrpGetProcedureAddress @ 0x180028E78
 * Callers:
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpNameToOrdinal @ 0x1800291EC (LdrpNameToOrdinal.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18002993C (RtlpImageDirectoryEntryToData32.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, unsigned __int64 *a4)
{
  bool v5; // si
  unsigned __int64 v9; // rbp
  _DWORD *v10; // rbx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r12d
  int v15; // edi
  unsigned __int64 v16; // rcx
  _DWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v5 = 1;
  v9 = a1;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1, v9, 0LL, &v19);
  v12 = 0;
  if ( !v19 )
  {
LABEL_34:
    if ( v11 >= 0 )
    {
      v14 = v19;
      goto LABEL_10;
    }
    goto LABEL_26;
  }
  if ( *(_WORD *)(v19 + 24) == 267 )
  {
    LOBYTE(v12) = v5;
    v11 = RtlpImageDirectoryEntryToData32(v9, v12, 0, (unsigned int)&v19, v19, (__int64)&v18);
    v10 = v18;
    goto LABEL_34;
  }
  if ( *(_WORD *)(v19 + 24) != 523 )
  {
    v11 = -1073741811;
    goto LABEL_34;
  }
  if ( !*(_DWORD *)(v19 + 132) || (v13 = *(unsigned int *)(v19 + 136), !(_DWORD)v13) )
  {
LABEL_26:
    v14 = v19;
LABEL_27:
    v10 = 0LL;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(v19 + 140);
  if ( v5 || (unsigned int)v13 < *(_DWORD *)(v19 + 84) )
  {
    v10 = (_DWORD *)(v13 + v9);
    goto LABEL_10;
  }
  v10 = (_DWORD *)RtlAddressInSectionTable();
  if ( !v10 )
    goto LABEL_27;
LABEL_10:
  if ( !v10 )
    return 3221225594LL;
  if ( a2 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        685,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
    v15 = LdrpNameToOrdinal((_DWORD)a2, -1, a1, v10[6], a1 + (unsigned int)v10[8], a1 + (unsigned int)v10[9]);
    if ( v15 >= 0 )
      goto LABEL_15;
    return 3221225594LL;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      703,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v15 = a3 - v10[4];
LABEL_15:
  if ( (unsigned int)v15 >= v10[5] )
    return (unsigned int)(a2 != 0LL) - 1073741512;
  v16 = a1 + *(unsigned int *)(a1 + (unsigned int)v10[7] + 4LL * v15);
  *a4 = v16;
  if ( v16 < (unsigned __int64)v10 || v16 >= (unsigned __int64)v10 + v14 )
    return 0LL;
  else
    return 3221226029LL;
}
