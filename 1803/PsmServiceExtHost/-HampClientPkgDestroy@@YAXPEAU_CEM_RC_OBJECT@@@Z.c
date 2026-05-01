/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180004E30
 * Callers:
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800095C8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009610 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     CemRcObjectCleanup @ 0x180024C80 (CemRcObjectCleanup.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006772C (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampClientPkgDestroy(struct _HAM_PACKAGE **a1)
{
  int v2; // eax
  char v3; // di

  CemRcObjectCleanup();
  HampPkgAcquireLockExclusive(a1[7]);
  v2 = *((_DWORD *)a1 + 16);
  v3 = 1;
  if ( (v2 & 1) != 0 )
  {
    *((_DWORD *)a1[7] + 83) &= ~1u;
    v2 = *((_DWORD *)a1 + 16);
  }
  if ( (v2 & 2) != 0 )
    *((_DWORD *)a1[7] + 83) &= ~2u;
  else
    v3 = 0;
  HampPkgReleaseLockExclusive(a1[7]);
  if ( v3 )
    HampPkgNotifyDebugModeChanged(a1[7]);
  CemRcObjectDereference(a1[7]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
