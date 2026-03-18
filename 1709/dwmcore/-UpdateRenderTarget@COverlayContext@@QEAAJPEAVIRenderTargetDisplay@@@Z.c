/*
 * XREFs of ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180067888
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180067510 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C0930 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::UpdateRenderTarget(COverlayContext *this, struct IRenderTargetDisplay *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  int updated; // eax
  int v8; // eax
  char v9; // al
  __int64 v10; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  v3 = (_QWORD *)((char *)this + 16);
  if ( *((struct IRenderTargetDisplay **)this + 2) != a2 )
  {
    if ( *v3 )
      COverlayContext::Reset(this);
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(v3, a2);
    if ( *v3 )
    {
      updated = COverlayContext::UpdateMPOCaps(this, 1, 0LL);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8Eu);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 280LL))(*v3, (char *)this + 40);
        v8 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(*(_QWORD *)*v3 + 88LL))(*v3, (char *)this + 80, 0LL);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x94u);
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 392LL))(*v3);
          v10 = *v3;
          *((_BYTE *)this + 1173) = v9;
          *((_DWORD *)this + 25) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 24LL))(
                                                 v10,
                                                 v11)
                                             + 4);
        }
      }
    }
  }
  return v2;
}
