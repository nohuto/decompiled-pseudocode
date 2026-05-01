/*
 * XREFs of ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800471A4
 * Callers:
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180047058 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004750C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180045490 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 */

void __fastcall HampActCheckEnterDependencyWorker(struct _HAM_ACTIVITY *a1)
{
  int v2; // ecx
  struct _HAM_DEPENDENCY_GROUP *v3; // rbx
  char v4; // al

  v2 = *((_DWORD *)a1 + 124);
  if ( (v2 & 0x180) != 0x80 && (v2 & 2) == 0 )
  {
    v3 = *(struct _HAM_DEPENDENCY_GROUP **)(*((_QWORD *)a1 + 9) + 640LL);
    HampDepGroupAcquireLockExclusive(v3);
    v4 = HampDepGroupTryEnterStateChange(v3, (unsigned __int64 *)(*((_QWORD *)a1 + 9) + 600LL));
    *((_DWORD *)a1 + 124) &= ~2u;
    *((_DWORD *)a1 + 124) |= 2 * (v4 & 1);
    HampDepGroupReleaseLockExclusive(v3);
  }
}
