/*
 * XREFs of ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18007A14C
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18005FD88 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180079B3C (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007B564 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C8F28 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::UpdateRenderTarget(COverlayContext *this, struct IRenderTargetDisplay *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  int updated; // eax
  int v8; // eax
  char v9; // al
  __int64 v10; // rcx
  _BYTE v11[4]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+34h] [rbp-34h]
  int v13; // [rsp+38h] [rbp-30h]

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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8Fu);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 328LL))(*v3, (char *)this + 40);
        v8 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(*(_QWORD *)*v3 + 136LL))(*v3, (char *)this + 80, 0LL);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x95u);
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 440LL))(*v3);
          v10 = *v3;
          *((_BYTE *)this + 1185) = v9;
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 24LL))(v10, v11);
          *((_DWORD *)this + 25) = v13;
          *((_DWORD *)this + 26) = v12;
        }
      }
    }
  }
  return v2;
}
