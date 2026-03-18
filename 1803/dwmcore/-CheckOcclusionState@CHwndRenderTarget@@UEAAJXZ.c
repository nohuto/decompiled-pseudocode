/*
 * XREFs of ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180046AC0 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800C53F0 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800D7A60 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801C8460 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckOcclusionState(CHwndRenderTarget *this)
{
  char *v1; // rdi
  __int64 (__fastcall *v3)(CHwndRenderTarget *); // rax
  CHwndRenderTarget *v4; // rcx
  int v5; // eax
  int v6; // ebx
  CD3DDeviceLevel1 **v8; // rcx
  __int64 (*v9)(void); // rax
  int v10; // eax
  __int64 v11; // rcx
  int IsOptedIn; // eax
  char v13; // al

  v1 = (char *)this - 64;
  v3 = *(__int64 (__fastcall **)(CHwndRenderTarget *))(*((_QWORD *)this - 8) + 232LL);
  v4 = (CHwndRenderTarget *)((char *)this - 64);
  if ( v3 == CHwndRenderTarget::EnsureRenderTarget )
    v5 = CHwndRenderTarget::EnsureRenderTarget(v4);
  else
    v5 = v3(v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v5, 0x6D3u);
  }
  else if ( (*((_BYTE *)this + 384) & 0x10) != 0
         && (*((_BYTE *)this + 787) || *((_QWORD *)v1 + 66) != *(_QWORD *)(*((_QWORD *)v1 + 2) + 384LL) - 1LL) )
  {
    v8 = (CD3DDeviceLevel1 **)*((_QWORD *)this + 14);
    v9 = (__int64 (*)(void))*((_QWORD *)*v8 + 34);
    if ( (char *)v9 == (char *)CHwDisplayRenderTarget::CheckDeviceState )
      v10 = CHwDisplayRenderTarget::CheckDeviceState(v8);
    else
      v10 = v9();
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v10, 0x6E0u);
    if ( *((_BYTE *)this + 787) )
    {
      if ( (unsigned int)(v6 - 142213121) > 0x2E || (v11 = 0x400000000201LL, !_bittest64(&v11, v6 - 142213121)) )
      {
        if ( v6 > -1 )
          v6 = 142213129;
      }
    }
    if ( v6 >= 0 )
      goto LABEL_8;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v6, 0x6E2u);
  }
  if ( v6 >= 0 )
  {
LABEL_8:
    switch ( v6 )
    {
      case 142213121:
        v1[851] = 1;
        break;
      case 142213129:
        v1[851] = 0;
        v1[161] = 1;
        CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)v1, 1);
        break;
      case 142213130:
      case 142213167:
        ScheduleCompositionPass(0LL, 0x2000LL);
        v1[849] = 1;
        break;
    }
    return (unsigned int)v6;
  }
  if ( v6 == -2003304306 )
  {
    if ( byte_1802DA4D8 )
    {
      v13 = byte_1802DA4D9;
    }
    else
    {
      IsOptedIn = WinSqmIsOptedIn();
      byte_1802DA4D8 = 1;
      v13 = IsOptedIn != 0;
      byte_1802DA4D9 = v13;
    }
    if ( v13 )
      CDwmCoreWinSqm::RecordDisplayDriverName();
  }
  CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
  v1[161] = 1;
  return (unsigned int)v6;
}
