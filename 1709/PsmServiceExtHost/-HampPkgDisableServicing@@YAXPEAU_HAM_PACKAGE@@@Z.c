/*
 * XREFs of ?HampPkgDisableServicing@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046790
 * Callers:
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180046570 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgDisableServicing(struct _HAM_PACKAGE *a1)
{
  char *v1; // rdi

  v1 = (char *)a1 + 256;
  RtlAcquireSRWLockExclusive((char *)a1 + 256);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  *((_DWORD *)a1 + 83) &= ~1u;
  *((_DWORD *)v1 + 2) = 0;
  RtlReleaseSRWLockExclusive(v1);
}
