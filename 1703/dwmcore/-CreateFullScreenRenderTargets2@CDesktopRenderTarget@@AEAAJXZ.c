/*
 * XREFs of ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A9DC (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800692A4 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006A648 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@AEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18006EDD8 (-GetDisplayRect@CHwndRenderTarget@@AEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N33@Z @ 0x1800CD7E8 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets2(CDesktopRenderTarget *this)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // r15d
  int v5; // r14d
  int v6; // r12d
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r13d
  bool v10; // zf
  char v11; // al
  int inited; // eax
  int *DisplayRect; // rax
  int *v14; // rcx
  bool v15; // dl
  BOOL v16; // r8d
  int v17; // edx
  bool v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+40h] [rbp-30h]
  struct CHwndRenderTarget *v28; // [rsp+48h] [rbp-28h] BYREF
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v7 = *((_QWORD *)this + 49);
  if ( !v7 || !*(_DWORD *)(v7 + 56) )
    return v2;
  v8 = 0;
  v27 = 0;
  v9 = 0;
  do
  {
    v28 = *(struct CHwndRenderTarget **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 49) + 64LL) + 8LL * v8) + 56LL);
    v10 = CDesktopRenderTarget::FindDisplayNoRef(this, (HMONITOR *)v28) == 0LL;
    v11 = *((_BYTE *)this + 378);
    v29 = *(_OWORD *)((char *)this + 348);
    if ( !v10 )
    {
      inited = CHwndRenderTarget::InitFullScreen(
                 v28,
                 *((_DWORD *)this + 86),
                 *((_BYTE *)this + 376),
                 *((_BYTE *)this + 364),
                 v11);
      v2 = inited;
      if ( inited < 0 )
      {
        v26 = 515;
      }
      else
      {
        inited = CDesktopRenderTarget::AddRenderTarget(this, (CDisplay **)v28);
        v2 = inited;
        if ( inited >= 0 )
          goto LABEL_7;
        v26 = 516;
      }
LABEL_47:
      v25 = inited;
LABEL_49:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v26);
      return v2;
    }
    inited = CHwndRenderTarget::ResetRenderTarget(
               (_DWORD)v28,
               (_DWORD)this,
               (unsigned int)&v29,
               *((_DWORD *)this + 86),
               *((_BYTE *)this + 376),
               *((_BYTE *)this + 364),
               v11);
    v2 = inited;
    if ( inited < 0 )
    {
      v26 = 527;
      goto LABEL_47;
    }
    v22 = *((unsigned int *)this + 60);
    v23 = v22 + 1;
    if ( (int)v22 + 1 >= (unsigned int)v22 )
      v9 = v22 + 1;
    v2 = v23 < (unsigned int)v22 ? 0x80070216 : 0;
    if ( v23 < (unsigned int)v22 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)this + 59) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 216, 8LL, 1LL, &v28);
      v2 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v22) = v28;
      *((_DWORD *)this + 60) = v9;
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      v26 = 531;
      v25 = v2;
      goto LABEL_49;
    }
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v28 + 8LL))(v28);
LABEL_7:
    DisplayRect = (int *)CHwndRenderTarget::GetDisplayRect(v28);
    v14 = DisplayRect;
    v15 = v4 <= v6 || v3 <= v5;
    v16 = v15;
    v17 = *DisplayRect;
    v18 = DisplayRect[2] <= *DisplayRect || DisplayRect[3] <= DisplayRect[1];
    if ( v16 )
    {
      if ( v18 )
      {
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v6 = 0;
      }
      else
      {
        v29 = *(_OWORD *)v14;
        v3 = HIDWORD(v29);
        v4 = DWORD2(v29);
        v5 = DWORD1(v29);
        v6 = v29;
      }
    }
    else if ( !v18 )
    {
      if ( v17 < v6 )
        v6 = v17;
      if ( v14[1] < v5 )
        v5 = v14[1];
      if ( v14[2] > v4 )
        v4 = v14[2];
      if ( v14[3] > v3 )
        v3 = v14[3];
    }
    v8 = v27 + 1;
    v27 = v8;
  }
  while ( v8 < *(_DWORD *)(*((_QWORD *)this + 49) + 56LL) );
  v19 = *((_QWORD *)this + 2);
  *((float *)this + 79) = (float)v6;
  *((float *)this + 80) = (float)v5;
  *((float *)this + 81) = (float)v4;
  *((float *)this + 82) = (float)v3;
  v20 = *(_QWORD *)(v19 + 392);
  if ( v20 )
    *(_BYTE *)(v20 + 28) = 1;
  return v2;
}
