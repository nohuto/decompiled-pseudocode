/*
 * XREFs of ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180172780
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180171F60 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x1800498B8 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentDXGIResource(
        CCompositionSurfaceInfo **this,
        struct _LUID a2,
        struct IDXGIResource **a3)
{
  DWORD LowPart; // ebx
  CBitmapRealization *RenderingRealizationNoRef; // rax
  _QWORD *AdapterLuid; // rax
  _QWORD *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  struct _LUID v11; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this[4]);
  if ( RenderingRealizationNoRef
    && (AdapterLuid = (_QWORD *)CBitmapRealization::GetAdapterLuid(RenderingRealizationNoRef, &v11),
        *AdapterLuid == __PAIR64__(v12.HighPart, LowPart)) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *, struct IDXGIResource **, _QWORD))(*v7 + 56LL))(v7, a3, 0LL);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1A5u);
  }
  else
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x1A9u);
  }
  return v9;
}
