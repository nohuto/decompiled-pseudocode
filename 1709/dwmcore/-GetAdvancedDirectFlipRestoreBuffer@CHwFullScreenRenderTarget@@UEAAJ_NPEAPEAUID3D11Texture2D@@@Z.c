/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x1801B86A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        struct ID3D11Texture2D **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct ID3D11Texture2D *v7; // rcx
  signed int v8; // eax

  v4 = 0;
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x133u);
    else
      ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 45, (__int64)*a3);
  }
  else
  {
    v7 = (struct ID3D11Texture2D *)*((_QWORD *)this + 45);
    if ( v7 )
    {
      *a3 = v7;
      ((void (__fastcall *)(struct ID3D11Texture2D *))v7->lpVtbl->AddRef)(v7);
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x12Du);
    }
  }
  return v4;
}
