/*
 * XREFs of ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180018130
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180017388 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801914C8 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckOcclusionState(CHwndRenderTarget *this)
{
  char *v1; // rdi
  __int64 (__fastcall *v3)(COverlayContext **); // rax
  COverlayContext **v4; // rcx
  int v5; // eax
  int v6; // ebx
  CHwDisplayRenderTarget *v7; // rcx
  __int64 (*v8)(void); // rax
  int v9; // eax
  int IsOptedIn; // eax
  char v12; // al

  v1 = (char *)this - 64;
  v3 = *(__int64 (__fastcall **)(COverlayContext **))(*((_QWORD *)this - 8) + 304LL);
  v4 = (COverlayContext **)((char *)this - 64);
  if ( v3 == CHwndRenderTarget::EnsureRenderTarget )
    v5 = CHwndRenderTarget::EnsureRenderTarget(v4);
  else
    v5 = v3(v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v5, 0x716u);
  }
  else if ( (*((_BYTE *)this + 328) & 0x10) != 0
         && (*((_BYTE *)this + 741) || *((_QWORD *)v1 + 60) != *(_QWORD *)(*((_QWORD *)v1 + 2) + 360LL) - 1LL) )
  {
    v7 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 7);
    v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 216LL);
    if ( (char *)v8 == (char *)CHwDisplayRenderTarget::CheckDeviceState )
      v9 = CHwDisplayRenderTarget::CheckDeviceState(v7);
    else
      v9 = v8();
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v9, 0x723u);
    if ( *((_BYTE *)this + 741) )
    {
      if ( v6 < 0 )
      {
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v6, 0x725u);
        goto LABEL_17;
      }
      if ( v6 != 142213121 )
        v6 = 142213129;
    }
    if ( v6 >= 0 )
      goto LABEL_13;
    goto LABEL_26;
  }
LABEL_17:
  if ( v6 >= 0 )
  {
LABEL_13:
    if ( v6 == 142213121 )
    {
      v1[805] = 1;
    }
    else if ( v6 == 142213129 )
    {
      v1[805] = 0;
      v1[802] = 1;
      CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)v1, 1);
    }
    return (unsigned int)v6;
  }
  if ( v6 == -2003304306 )
  {
    if ( byte_180272F71 )
    {
      v12 = byte_180272F70;
    }
    else
    {
      IsOptedIn = WinSqmIsOptedIn();
      byte_180272F71 = 1;
      v12 = IsOptedIn != 0;
      byte_180272F70 = v12;
    }
    if ( v12 )
      CDwmCoreWinSqm::RecordDisplayDriverName();
  }
  CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
  v1[802] = 1;
  return (unsigned int)v6;
}
