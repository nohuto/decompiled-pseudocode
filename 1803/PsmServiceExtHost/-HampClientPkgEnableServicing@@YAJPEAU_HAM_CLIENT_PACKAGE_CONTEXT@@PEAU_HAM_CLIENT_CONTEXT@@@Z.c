/*
 * XREFs of ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180003868
 * Callers:
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180003718 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180003B04 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800095C8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009610 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgEnableServicing(struct _HAM_PACKAGE **a1, struct _HAM_CLIENT_CONTEXT *a2)
{
  struct _HAM_PACKAGE *v4; // rcx
  int v5; // eax
  struct _HAM_PACKAGE *v6; // rcx
  unsigned int v7; // ebx

  HampPkgAcquireLockExclusive(a1[7]);
  if ( ((_BYTE)a1[8] & 4) != 0 )
  {
    v7 = -1073741431;
    goto LABEL_8;
  }
  if ( ((_BYTE)a1[8] & 1) != 0 || (v4 = a1[7], v5 = *((_DWORD *)v4 + 83), (v5 & 1) != 0) )
  {
    v7 = -1073700861;
LABEL_8:
    HampPkgReleaseLockExclusive(a1[7]);
    return v7;
  }
  *((_DWORD *)v4 + 83) = v5 | 1;
  v6 = a1[7];
  *((_DWORD *)a1 + 16) |= 1u;
  HampPkgReleaseLockExclusive(v6);
  return (unsigned int)HampPkgTerminate(a1[7], 1LL, 1024LL, a2, -1);
}
