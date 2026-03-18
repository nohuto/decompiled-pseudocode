/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0055E88
 * Callers:
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C0055D28 (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006C280 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A06C8 (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B8C80 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00B8EA8 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C0055ECC (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE v6[32]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  PVOID v8; // [rsp+48h] [rbp-20h]

  if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p((__int64)Object, &BeginVidMmDereferenceObjectAsync, a3, Object);
  v7 = 1;
  v8 = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v6) )
  {
    ObfDereferenceObject(Object);
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v4, &EndVidMmDereferenceObjectAsync, v5, Object);
  }
}
