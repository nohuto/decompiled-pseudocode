/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C001E88C
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z @ 0x1C009AE3C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(DXGDEVICE *this, unsigned int a2, struct DXGALLOCATION *a3)
{
  ((void (__fastcall *)(_QWORD, struct DXGALLOCATION *))DxgCoreInterface[9])(a2, a3);
}
