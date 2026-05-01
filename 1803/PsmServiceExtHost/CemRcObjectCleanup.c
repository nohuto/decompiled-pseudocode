/*
 * XREFs of CemRcObjectCleanup @ 0x180024C80
 * Callers:
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180004E30 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180006F1C (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180024BF0 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003320C (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180033970 (-HampWakeContextDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800352A0 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax

  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
  {
    v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v2 + 16);
    RtlRbRemoveNode(v2, a1);
    --*(_DWORD *)(v2 + 40);
    RtlReleaseSRWLockExclusive(v2 + 16);
    result = RtlWakeAllConditionVariable(v2 + 32);
  }
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
