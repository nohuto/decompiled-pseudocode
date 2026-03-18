/*
 * XREFs of ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180016AA4
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016D30 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180016C90 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180019BF0 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18013699C (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
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
  __int64 v10; // rax
  bool v11; // zf
  char v12; // al
  int inited; // eax
  int *DisplayRect; // rax
  int *v15; // rcx
  BOOL v16; // edx
  int v17; // r8d
  BOOL v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-50h]
  struct CHwndRenderTarget *v28; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-28h]
  unsigned int v30; // [rsp+4Ch] [rbp-24h]
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF

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
  v29 = 0;
  v9 = v30;
  do
  {
    v10 = *((_QWORD *)this + 49);
    v30 = v9;
    v28 = *(struct CHwndRenderTarget **)(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 8LL * v8) + 56LL);
    v11 = CDesktopRenderTarget::FindDisplayNoRef(this, v28) == 0LL;
    v12 = *((_BYTE *)this + 377);
    v31 = *(_OWORD *)((char *)this + 348);
    if ( !v11 )
    {
      inited = CHwndRenderTarget::InitFullScreen(v28, *((_DWORD *)this + 86), *((_BYTE *)this + 364), v12);
      v2 = inited;
      if ( inited < 0 )
      {
        v27 = 515;
      }
      else
      {
        inited = CDesktopRenderTarget::AddRenderTarget(this, (CDisplay **)v28);
        v2 = inited;
        if ( inited >= 0 )
          goto LABEL_7;
        v27 = 517;
      }
LABEL_47:
      v26 = inited;
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v27);
      return v2;
    }
    inited = CHwndRenderTarget::ResetRenderTarget(
               (_DWORD)v28,
               (_DWORD)this,
               (unsigned int)&v31,
               *((_DWORD *)this + 86),
               *((_BYTE *)this + 364),
               v12);
    v2 = inited;
    if ( inited < 0 )
    {
      v27 = 525;
      goto LABEL_47;
    }
    v23 = *((unsigned int *)this + 60);
    v24 = v23 + 1;
    v9 = v23 + 1;
    if ( (int)v23 + 1 < (unsigned int)v23 )
      v9 = v30;
    v2 = v24 < (unsigned int)v23 ? 0x80070216 : 0;
    if ( v24 < (unsigned int)v23 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)this + 59) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 216, 8LL, 1LL, &v28);
      v2 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v23) = v28;
      *((_DWORD *)this + 60) = v9;
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      v27 = 530;
      v26 = v2;
      goto LABEL_49;
    }
    (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v28 + 8LL))(v28);
LABEL_7:
    DisplayRect = (int *)CHwndRenderTarget::GetDisplayRect(v28);
    v15 = DisplayRect;
    v16 = v4 <= v6 || v3 <= v5;
    v17 = DisplayRect[2];
    v18 = v17 <= *DisplayRect || DisplayRect[3] <= DisplayRect[1];
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
        v31 = *(_OWORD *)v15;
        v3 = HIDWORD(v31);
        v4 = DWORD2(v31);
        v5 = DWORD1(v31);
        v6 = v31;
      }
    }
    else if ( !v18 )
    {
      if ( *v15 < v6 )
        v6 = *v15;
      if ( v15[1] < v5 )
        v5 = v15[1];
      if ( v17 > v4 )
        v4 = v17;
      if ( v15[3] > v3 )
        v3 = v15[3];
    }
    v19 = *((_QWORD *)this + 49);
    v8 = v29 + 1;
    v29 = v8;
  }
  while ( v8 < *(_DWORD *)(v19 + 56) );
  v20 = *((_QWORD *)this + 2);
  *((float *)this + 79) = (float)v6;
  *((float *)this + 80) = (float)v5;
  *((float *)this + 81) = (float)v4;
  *((float *)this + 82) = (float)v3;
  v21 = *(_QWORD *)(v20 + 352);
  if ( v21 )
    *(_BYTE *)(v21 + 28) = 1;
  return v2;
}
