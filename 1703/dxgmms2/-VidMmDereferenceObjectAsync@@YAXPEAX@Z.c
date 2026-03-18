/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0050370
 * Callers:
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C006958C (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0093428 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7D30 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00A7F50 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C00503B4 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE v6[32]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  PVOID v8; // [rsp+48h] [rbp-20h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_p((__int64)Object, &BeginVidMmDereferenceObjectAsync, a3, Object);
  v7 = 1;
  v8 = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v6) )
  {
    ObfDereferenceObject(Object);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p(v4, &EndVidMmDereferenceObjectAsync, v5, Object);
  }
}
