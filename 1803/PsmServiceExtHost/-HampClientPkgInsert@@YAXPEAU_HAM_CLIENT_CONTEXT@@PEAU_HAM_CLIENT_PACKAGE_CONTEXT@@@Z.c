/*
 * XREFs of ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x1800044C0
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180004408 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180027880 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampClientPkgInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_PACKAGE_CONTEXT *a2)
{
  CemRcTableFindOrInsertEx((_DWORD)a1 + 56, (_DWORD)a2 + 48, (unsigned int)HampClientPkgCompareByHandle, (_DWORD)a2);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
    __fastfail(0xEu);
}
