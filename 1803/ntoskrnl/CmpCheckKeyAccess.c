/*
 * XREFs of CmpCheckKeyAccess @ 0x1406F5DB8
 * Callers:
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406F62BC (CmpDoAccessCheckOnSubtree.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpCheckSecurityCellAccess @ 0x14056251C (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpCheckKeyAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 v8; // rax
  unsigned int v10; // ebx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v11 = -1;
  v12 = 0;
  if ( !a1 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v11);
  if ( !v8 )
    return 3221225626LL;
  v10 = *(_DWORD *)(v8 + 44);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
  return CmpCheckSecurityCellAccess(a1, v10, a3, a4, a5);
}
