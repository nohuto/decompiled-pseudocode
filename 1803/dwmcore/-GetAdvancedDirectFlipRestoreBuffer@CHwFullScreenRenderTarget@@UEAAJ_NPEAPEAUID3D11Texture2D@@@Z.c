/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x1801F2020
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        struct ID3D11Texture2D **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct ID3D11Texture2D *v7; // rcx
  int v8; // eax

  v4 = 0;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 144LL))(v5);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x172u);
    else
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 47, (__int64)*a3);
  }
  else
  {
    v7 = (struct ID3D11Texture2D *)*((_QWORD *)this + 47);
    if ( v7 )
    {
      *a3 = v7;
      ((void (__fastcall *)(struct ID3D11Texture2D *))v7->lpVtbl->AddRef)(v7);
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x16Cu);
    }
  }
  return v4;
}
