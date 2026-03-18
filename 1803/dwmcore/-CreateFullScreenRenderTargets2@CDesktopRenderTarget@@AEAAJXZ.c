/*
 * XREFs of ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180044DAC
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800450B8 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180044B30 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180044F8C (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800627C0 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800D79E8 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets2(CDesktopRenderTarget *this)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // r15d
  int v5; // r14d
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r13d
  struct CDisplay *DisplayNoRef; // rax
  char v11; // cl
  struct CDisplay *v12; // r8
  char v13; // al
  int inited; // eax
  int *DisplayRect; // rax
  int *v16; // rcx
  BOOL v17; // edx
  int v18; // r8d
  BOOL v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-50h]
  int v28; // [rsp+40h] [rbp-30h]
  struct CHwndRenderTarget *v29; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v7 = *((_QWORD *)this + 43);
  if ( !v7 || !*(_DWORD *)(v7 + 56) )
    return v2;
  v8 = 0LL;
  v28 = 0;
  v9 = 0;
  do
  {
    v29 = *(struct CHwndRenderTarget **)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 8 * v8) + 56LL);
    DisplayNoRef = CDesktopRenderTarget::FindDisplayNoRef(this, v29);
    v11 = *((_BYTE *)this + 312);
    v12 = DisplayNoRef;
    v13 = *((_BYTE *)this + 329);
    v30 = *(_OWORD *)((char *)this + 296);
    if ( v12 )
    {
      inited = CHwndRenderTarget::InitFullScreen(v29, *((_DWORD *)this + 73), v11, v13);
      v2 = inited;
      if ( inited < 0 )
      {
        v27 = 421;
      }
      else
      {
        inited = CDesktopRenderTarget::AddHwndRenderTarget(this, (CDisplay **)v29);
        v2 = inited;
        if ( inited >= 0 )
          goto LABEL_7;
        v27 = 423;
      }
LABEL_47:
      v26 = inited;
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v27);
      return v2;
    }
    inited = CHwndRenderTarget::ResetRenderTarget(
               (_DWORD)v29,
               (_DWORD)this,
               (unsigned int)&v30,
               *((_DWORD *)this + 73),
               v11,
               v13);
    v2 = inited;
    if ( inited < 0 )
    {
      v27 = 431;
      goto LABEL_47;
    }
    v23 = *((unsigned int *)this + 62);
    v24 = v23 + 1;
    if ( (int)v23 + 1 >= (unsigned int)v23 )
      v9 = v23 + 1;
    v2 = v24 < (unsigned int)v23 ? 0x80070216 : 0;
    if ( v24 < (unsigned int)v23 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)this + 61) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 224, 8LL, 1LL, &v29);
      v2 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v23) = v29;
      *((_DWORD *)this + 62) = v9;
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      v27 = 436;
      v26 = v2;
      goto LABEL_49;
    }
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v29 + 8LL))(v29);
LABEL_7:
    DisplayRect = (int *)CHwndRenderTarget::GetDisplayRect(v29);
    v16 = DisplayRect;
    v17 = v4 <= v6 || v3 <= v5;
    v18 = DisplayRect[2];
    v19 = v18 <= *DisplayRect || DisplayRect[3] <= DisplayRect[1];
    if ( v17 )
    {
      if ( v19 )
      {
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v6 = 0;
      }
      else
      {
        v30 = *(_OWORD *)v16;
        v3 = HIDWORD(v30);
        v4 = DWORD2(v30);
        v5 = DWORD1(v30);
        v6 = v30;
      }
    }
    else if ( !v19 )
    {
      if ( *v16 < v6 )
        v6 = *v16;
      if ( v16[1] < v5 )
        v5 = v16[1];
      if ( v18 > v4 )
        v4 = v18;
      if ( v16[3] > v3 )
        v3 = v16[3];
    }
    v7 = *((_QWORD *)this + 43);
    v8 = (unsigned int)(v28 + 1);
    v28 = v8;
  }
  while ( (unsigned int)v8 < *(_DWORD *)(v7 + 56) );
  v20 = *((_QWORD *)this + 2);
  *((float *)this + 69) = (float)v6;
  *((float *)this + 70) = (float)v5;
  *((float *)this + 71) = (float)v4;
  *((float *)this + 72) = (float)v3;
  v21 = *(_QWORD *)(v20 + 376);
  if ( v21 )
    *(_BYTE *)(v21 + 20) = 1;
  return v2;
}
