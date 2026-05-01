/*
 * XREFs of ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1802F303C
 * Callers:
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F33E4 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1802F3710 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UITabletModeInputCallback@@@?$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802EFF2C (--$As@UITabletModeInputCallback@@@-$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1802F0AF0 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CDragVisual::_OnContinueDrag(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  v7 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IDragVisualHost>::As<ITabletModeInputCallback>((_QWORD *)this + 17, &v7);
  if ( v5 >= 0 )
  {
    Geometry::CPoint::ClientToScreen(&v9, *((HWND *)this + 19), (LONG *)&v8);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagPOINT *))(*(_QWORD *)v7 + 32LL))(v7, a2, &v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return (unsigned int)v5;
}
