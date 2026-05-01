/*
 * XREFs of ?HampHostSnapshotGetFirst@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18006472C
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006776C (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 * Callees:
 *     <none>
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotGetFirst(struct _HAM_HOST_SNAPSHOT *a1)
{
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax

  result = 0LL;
  if ( *((_DWORD *)a1 + 2) )
  {
    result = *(struct _HAM_TERMINATION_HOST_BLOCK **)a1;
    *((_DWORD *)a1 + 4) = 1;
  }
  return result;
}
