/*
 * XREFs of ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x18014B1DC
 * Callers:
 *     ?AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x1801482A0 (-AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CPlaneCaptureRenderTarget@@CAPEAX_K@Z @ 0x18016DD08 (--2CPlaneCaptureRenderTarget@@CAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::CreateForControlledVisual(
        unsigned __int64 a1,
        struct CCoRenderVisualProxy **a2)
{
  unsigned int v4; // edi
  struct CCoRenderVisualProxy *v5; // rax
  struct CCoRenderVisualProxy *v6; // rbx

  v4 = 0;
  v5 = (struct CCoRenderVisualProxy *)CPlaneCaptureRenderTarget::operator new(a1);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) = 0;
    *(_QWORD *)v5 = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
    *((_QWORD *)v5 + 1) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_DWORD *)v5 + 14) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CCoRenderVisualProxy *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)v6 + 3) = a1;
    if ( a1 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 8LL))(a1);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return v4;
}
