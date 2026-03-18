/*
 * XREFs of ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z @ 0x180119EAC (-SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z.c)
 *     McTemplateU0zqq @ 0x180136D08 (McTemplateU0zqq.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801436D0 (-IsFullscreen@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x18017C1E4 (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801CCB28 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     PubSebRegisterRpc @ 0x1801CCDD0 (PubSebRegisterRpc.c)
 */

void __fastcall CHwndRenderTarget::NotifyPowerManagerContentType(CHwndRenderTarget *this)
{
  bool v1; // bl
  CCompositionSurfaceInfo *v3; // rbp
  bool v4; // r15
  int v5; // esi
  struct _SEB_RPC_PUBLISH_DATA **v6; // r14
  int v7; // r12d
  int v8; // esi
  char *v9; // rdx
  __int64 v10; // r10
  unsigned int v11; // esi
  unsigned int v12; // r11d
  __int64 v13; // rcx
  bool v14; // si
  char v15; // al
  int v16; // eax
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // r11d
  __int64 v21; // rcx
  char v22; // al
  char v23; // r9
  UINT v24; // r10d
  int updated; // ecx
  struct _SEB_RPC_PUBLISH_DATA *v26; // rcx
  const wchar_t *v27; // r8
  DXGI_HDR_METADATA_HDR10 v28; // [rsp+30h] [rbp-58h] BYREF
  char v29; // [rsp+98h] [rbp+10h]

  v1 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( !*((_QWORD *)this + 14) )
    goto LABEL_18;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18026EEA8 )
    v5 = *((_DWORD *)qword_18026EEA8 + 18);
  LeaveCriticalSection(&g_DisplayManager);
  v29 = 1;
  if ( v5 != 1 )
LABEL_18:
    v29 = 0;
  v6 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 824);
  v7 = 0;
  v8 = 0;
  if ( *((_QWORD *)this + 103)
    || (v16 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 824), v8 = v16, v16 >= 0) )
  {
    v9 = (char *)this + 832;
    if ( !*((_QWORD *)this + 104) )
    {
      v17 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, v9);
      v8 = v17;
      if ( v17 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201E00, 1u, v17, 0x1BCu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201E00, 1u, v16, 0x1B6u);
  }
  if ( v8 < 0 )
    return;
LABEL_8:
  v10 = *((_QWORD *)this + 99);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 272);
    v12 = 0;
    if ( v11 )
    {
      v18 = *(_QWORD *)(v10 + 248);
      while ( 1 )
      {
        v19 = v12;
        if ( COverlayContext::IsFullscreen(
               (COverlayContext *)v10,
               (const struct COverlayContext::OverlayPlaneInfo *)(v18 + 248LL * v12)) )
        {
          break;
        }
        v12 = v20 + 1;
        if ( v12 >= v11 )
          goto LABEL_28;
      }
      v3 = *(CCompositionSurfaceInfo **)(248 * v19 + v18 + 24);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(248 * v19 + v18 + 16) + 88LL))(*(_QWORD *)(248 * v19 + v18 + 16));
LABEL_28:
      v4 = 0;
    }
    if ( v3 )
    {
      v21 = *((_QWORD *)this + 99);
      LODWORD(v9) = *(_DWORD *)(v21 + 272);
      if ( (_DWORD)v9 != 1 || (v22 = 1, *(_DWORD *)(v21 + 304)) )
        v22 = 0;
      v4 = (unsigned int)v9 <= 2;
      if ( v22 )
        goto LABEL_17;
    }
    else
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 99) + 1048LL);
      if ( v13 )
      {
        v3 = *(CCompositionSurfaceInfo **)(v13 + 32);
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 40) + 88LL))(*(_QWORD *)(v13 + 40));
        goto LABEL_17;
      }
    }
  }
  v14 = 0;
  if ( v4 )
LABEL_17:
    v14 = 1;
  if ( v7 == 1 && v29 )
  {
    if ( CCompositionSurfaceInfo::GetHDR10MetaData(v3, &v28) )
      v24 = v28.MaxMasteringLuminance / 0x2710;
    if ( v23 || v14 )
      v1 = 1;
    CHwndRenderTarget::SignalSEB(this, v1, v24, v14);
  }
  else
  {
    v15 = *((_BYTE *)this + 810);
    if ( v15 || *((_BYTE *)this + 811) )
    {
      if ( *v6 )
      {
        updated = 0;
        if ( v15 )
        {
          if ( *((_BYTE *)this + 811) )
          {
            v26 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 104);
            if ( v26 )
              PubSebiUpdateLevelEventRpc(v26, 0);
          }
          updated = PubSebiUpdateLevelEventRpc(*v6, 0);
        }
        *((_BYTE *)this + 812) = v14;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v27 = L"P2PRenderer";
          if ( !v14 )
            v27 = L"FSVP";
          McTemplateU0zqq(updated, (_DWORD)v9, (_DWORD)v27, 0, updated);
        }
      }
      *((_WORD *)this + 405) = 0;
    }
  }
}
