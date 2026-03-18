/*
 * XREFs of ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C0096FBC
 * Callers:
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C001EB50 (-VidMmSetAllocationFlipQueueReferencesPointer@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001E340 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = **(_QWORD **)a2;
  v5 = *(_QWORD *)(v4 + 520);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 320));
  VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v5 + 16), v6, v7);
  *(_QWORD *)(v5 + 16) = a3;
  _InterlockedIncrement((volatile signed __int32 *)a3);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 320), v8, v9);
}
