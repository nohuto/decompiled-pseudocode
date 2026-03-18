/*
 * XREFs of ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00595C4
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0061254 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0061554 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::WaitOnAllocForceSync(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  bool v6; // cf
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 600);
    v6 = ((**((_DWORD **)a2 + 12) | ((unsigned int)(**((_DWORD **)a2 + 12) | (**((_DWORD **)a2 + 12) >> 1)) >> 11)) & 0x80000) < 0x80000;
    v8 = 0LL;
    v7 = v6 ? 5 : 1;
    VidSchFlushDevice(v5, &v7, a3, a4);
  }
}
