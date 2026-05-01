/*
 * XREFs of ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800467D8
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043390 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465B4 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampPkgEnterInsertion(struct _HAM_PACKAGE *a1, __int64 a2)
{
  DWORD *v3; // rdi
  __int64 v4; // rdx
  DWORD v5; // [rsp+30h] [rbp+8h] BYREF

  HampPkgAcquireLockExclusive(a1, a2);
  v3 = (DWORD *)((char *)a1 + 328);
  while ( 1 )
  {
    v5 = *v3;
    if ( !v5 )
      break;
    HampPkgReleaseLockExclusive(a1);
    RtlWaitOnAddress((char *)a1 + 328, &v5, 4LL);
    HampPkgAcquireLockExclusive(a1, v4);
  }
  *v3 = GetCurrentThreadId();
  HampPkgReleaseLockExclusive(a1);
}
