/*
 * XREFs of ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C0076E14
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C004EDB4 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage(void)
{
  VIDMM_PROCESS_FENCE_STORAGE *v0; // rax
  __int64 v1; // rcx
  __int64 v3; // rax

  v0 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new[](0x48uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v0 )
    v0 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v0, 0LL);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = v0;
  if ( v0 )
    return 0LL;
  _InterlockedIncrement(&dword_1C003C5D4);
  v3 = WdLogNewEntry5_WdLowResource(v1);
  *(_QWORD *)(v3 + 24) = 341LL;
  WdLogEvent5_WdLowResource(v3);
  return 3221225495LL;
}
