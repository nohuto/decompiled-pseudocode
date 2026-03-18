/*
 * XREFs of ?GetDwm3DRERenderTargetNoRef@CHwSurfaceRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801ED8F0
 * Callers:
 *     ?GetDwm3DRERenderTargetNoRef@CHwTextureRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801E6740 (-GetDwm3DRERenderTargetNoRef@CHwTextureRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DR.c)
 *     ?GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801F1330 (-GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDwm3DRERenderTargetNoRef(
        CHwSurfaceRenderTarget *this,
        struct IDwm3DRECompositor *a2,
        struct IDwm3DRERenderTarget **a3)
{
  __int64 v5; // rcx
  unsigned int v7; // ebx
  struct IDwm3DRERenderTarget **v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  struct IDwm3DRERenderTarget *v11; // rcx
  bool v12; // bl
  int v13; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *((_QWORD *)this + 25);
  if ( v5 )
  {
    v8 = (struct IDwm3DRERenderTarget **)((char *)this + 208);
    v7 = 0;
    if ( *((_QWORD *)this + 26) )
      goto LABEL_9;
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v5 + 120) + 24LL))(v5 + 120, v15);
    v11 = *v8;
    v12 = *(_DWORD *)(v9 + 4) == 3;
    *v8 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(struct IDwm3DRERenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
    LOBYTE(v10) = v12;
    v13 = (*(__int64 (__fastcall **)(struct IDwm3DRECompositor *, _QWORD, __int64, char *))(*(_QWORD *)a2 + 32LL))(
            a2,
            *(_QWORD *)(*((_QWORD *)this + 25) + 128LL),
            v10,
            (char *)this + 208);
    v7 = v13;
    if ( v13 >= 0 )
LABEL_9:
      *a3 = *v8;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x317u);
  }
  else
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x30Du);
  }
  return v7;
}
