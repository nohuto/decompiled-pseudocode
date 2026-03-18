/*
 * XREFs of ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800BAA30
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18004D390 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18001A290 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateFromSharedHandle(
        struct _LUID a1,
        void *a2,
        bool a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  signed int v9; // eax
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v9 = CD3DDeviceManager::OpenSharedHandleAsD2DBitmap((__int64)&qword_18026EEF0, a1, a2, a3, a4, a5, a6, a7, a8, v12);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x21u);
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  }
  else
  {
    *a9 = v12[0];
  }
  return v10;
}
