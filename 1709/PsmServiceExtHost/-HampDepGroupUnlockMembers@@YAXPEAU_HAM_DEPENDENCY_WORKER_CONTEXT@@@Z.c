/*
 * XREFs of ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800454E0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004508C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupUnlockMembers(struct _RM_HAM_ACTIVITY_HOST **a1)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rdi

  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    HampHostReleaseLockExclusiveEx(a1[2]);
    *((_DWORD *)a1 + 8) &= ~1u;
  }
  for ( i = *a1; i != (struct _RM_HAM_ACTIVITY_HOST *)a1; i = *(struct _RM_HAM_ACTIVITY_HOST **)i )
  {
    if ( (*((_BYTE *)i + 32) & 1) != 0 )
    {
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)i - 672));
      *((_DWORD *)i + 8) &= ~1u;
    }
  }
}
