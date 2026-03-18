/*
 * XREFs of ?SetExistingSysMemStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAX@Z @ 0x1C00A37A8
 * Callers:
 *     VidMmSetExistingSysMemStore @ 0x1C0023530 (VidMmSetExistingSysMemStore.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::SetExistingSysMemStore(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, void *a3)
{
  __int64 v4; // rax

  if ( (*(_DWORD *)(**(_QWORD **)a2 + 80LL) & 0x4000) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) = a3;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = a2;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
