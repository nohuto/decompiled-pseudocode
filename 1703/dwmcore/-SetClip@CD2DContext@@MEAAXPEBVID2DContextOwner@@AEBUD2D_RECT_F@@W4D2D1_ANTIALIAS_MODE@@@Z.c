/*
 * XREFs of ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800ADB70
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000FD68 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008DF3C (-Set@CHWCallbackRenderer@@QEAAXIAEBURenderTargetInfo@@IIW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C5FC4 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rsi
  __int64 v9; // rdx
  bool v10; // zf
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  enum DXGI_COLOR_SPACE_TYPE v19; // r15d
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  signed int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]

  v4 = *((_DWORD *)this + 90);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 480)
    || *((_BYTE *)this + 482)
    || a4 != *((_DWORD *)this + 106)
    || a3->left != *((float *)this + 102)
    || a3->top != *((float *)this + 103)
    || a3->right != *((float *)this + 104)
    || a3->bottom != *((float *)this + 105) )
  {
    if ( *((_QWORD *)this + 58) )
    {
      v15 = *((_DWORD *)this + 90);
      v16 = 0LL;
      if ( v15 )
        v16 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v15 - 1));
      v17 = (*(__int64 (__fastcall **)(_QWORD, const struct ID2DContextOwner *))(**(_QWORD **)(v16 + 24) + 120LL))(
              *(_QWORD *)(v16 + 24),
              a2);
      v18 = 0LL;
      v19 = *(_DWORD *)(v17 + 196);
      v20 = *((_DWORD *)this + 90);
      if ( v20 )
        v18 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v20 - 1));
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 24) + 120LL))(*(_QWORD *)(v18 + 24));
      v22 = 0LL;
      v23 = *(_DWORD *)(v21 + 152);
      v24 = *((_DWORD *)this + 90);
      if ( v24 )
        v22 = *(_QWORD *)(*((_QWORD *)this + 42) + 8LL * (unsigned int)(v24 - 1));
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 24) + 120LL))(*(_QWORD *)(v22 + 24));
      CHWCallbackRenderer::Set(
        *((CHWCallbackRenderer **)this + 58),
        *((_DWORD *)this + 8),
        (CD2DContext *)((char *)this + 440),
        *(_DWORD *)(v25 + 148),
        v23,
        v19);
      v26 = *((_QWORD *)this + 58);
      CD2DContext::EnsureBeginDraw(this);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 120LL))(*((_QWORD *)this + 23), v26);
      v27 = *((_QWORD *)this + 58);
      if ( v27 )
      {
        CMILRefCountBase::Release((CMILRefCountBase *)(v27 + 8));
        *((_QWORD *)this + 58) = 0LL;
      }
    }
    else
    {
      v9 = *((_QWORD *)this + 59);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 44) = *((_DWORD *)this + 8);
        *(_OWORD *)(v9 + 48) = *(_OWORD *)((char *)this + 440);
        *(_DWORD *)(v9 + 64) = *((_DWORD *)this + 114);
        *(_BYTE *)(v9 + 68) = 1;
        v28 = CD2DContext::DrawCustomCallbackRendererInternal(
                this,
                *((struct ID2D1PrivateCompositorRenderer **)this + 59));
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x3EEu);
        else
          ReleaseInterface<CWARPCallbackRenderer>((char *)this + 472);
      }
    }
    v10 = *(_BYTE *)(v5 + 48) == 0;
    v11 = (__int128)*a3;
    *(_DWORD *)(v5 + 76) = a4;
    *(_OWORD *)(v5 + 60) = v11;
    if ( !v10 )
    {
      v12 = *(_QWORD *)(v5 + 16);
      v29 = _xmm;
      v30 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v12 + 176) + 240LL))(*(_QWORD *)(v12 + 176), &v29);
      v13 = *(_QWORD *)(v12 + 184);
      *(_BYTE *)(v12 + 482) = 0;
      v14 = *(_OWORD *)(v5 + 60);
      *(_DWORD *)(v12 + 424) = a4;
      *(_OWORD *)(v12 + 408) = v14;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v5 + 60, a4);
    }
    *(_BYTE *)(v5 + 56) = 1;
  }
}
