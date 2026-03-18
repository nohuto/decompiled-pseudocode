/*
 * XREFs of ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18006BF08
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18006CE40 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800B0CE4 (PubSebRegisterRpc.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z @ 0x180128DC8 (-SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z.c)
 *     Template_zqq @ 0x180146694 (Template_zqq.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x18015156C (-IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801751E0 (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801B13A4 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::NotifyPowerManagerContentType(CHwndRenderTarget *this)
{
  bool v1; // bl
  CCompositionSurfaceInfo *v3; // rbp
  bool v4; // r13
  int v5; // esi
  struct _SEB_RPC_PUBLISH_DATA **v6; // r14
  int v7; // r15d
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
  __int64 v18; // r12
  unsigned int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // al
  char v23; // r9
  UINT v24; // r10d
  int updated; // ecx
  struct _SEB_RPC_PUBLISH_DATA *v26; // rcx
  const wchar_t *v27; // r8
  DXGI_HDR_METADATA_HDR10 v28; // [rsp+30h] [rbp-48h] BYREF
  char v29; // [rsp+80h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( !*((_QWORD *)this + 14) )
    goto LABEL_18;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18023E528 )
    v5 = *((_DWORD *)qword_18023E528 + 18);
  LeaveCriticalSection(&g_DisplayManager);
  v29 = 1;
  if ( v5 != 1 )
LABEL_18:
    v29 = 0;
  v6 = (struct _SEB_RPC_PUBLISH_DATA **)((char *)this + 808);
  v7 = 0;
  v8 = 0;
  if ( *((_QWORD *)this + 101)
    || (v16 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 808), v8 = v16, v16 >= 0) )
  {
    v9 = (char *)this + 816;
    if ( !*((_QWORD *)this + 102) )
    {
      v17 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK, v9);
      v8 = v17;
      if ( v17 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR(0x14u, &dword_1801F3578, 1u, v17, 0x200u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3578, 1u, v16, 0x1FAu);
  }
  if ( v8 < 0 )
    return;
LABEL_8:
  v10 = *((_QWORD *)this + 97);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 264);
    v12 = 0;
    if ( v11 )
    {
      v18 = *(_QWORD *)(v10 + 240);
      while ( !COverlayContext::IsFullscreen(
                 (COverlayContext *)v10,
                 (struct COverlayContext::OverlayPlaneInfo *)(v18 + 240LL * v12)) )
      {
        v12 = v19 + 1;
        if ( v12 >= v11 )
          goto LABEL_10;
      }
      v20 = 240LL * v19;
      v3 = *(CCompositionSurfaceInfo **)(v20 + v18 + 24);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + v18 + 16) + 80LL))(*(_QWORD *)(v20 + v18 + 16));
    }
LABEL_10:
    if ( v3 )
    {
      v21 = *((_QWORD *)this + 97);
      LODWORD(v9) = *(_DWORD *)(v21 + 264);
      if ( (_DWORD)v9 != 1 || (v22 = 1, *(_DWORD *)(v21 + 296)) )
        v22 = 0;
      v4 = (unsigned int)v9 <= 2;
      if ( v22 )
        goto LABEL_17;
    }
    else
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 97) + 968LL);
      if ( v13 )
      {
        v3 = *(CCompositionSurfaceInfo **)(v13 + 32);
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 40) + 80LL))(*(_QWORD *)(v13 + 40));
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
    v15 = *((_BYTE *)this + 798);
    if ( v15 || *((_BYTE *)this + 799) )
    {
      if ( *v6 )
      {
        updated = 0;
        if ( v15 )
        {
          if ( *((_BYTE *)this + 799) )
          {
            v26 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 102);
            if ( v26 )
              PubSebiUpdateLevelEventRpc(v26, 0);
          }
          updated = PubSebiUpdateLevelEventRpc(*v6, 0);
        }
        *((_BYTE *)this + 800) = v14;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v27 = L"P2PRenderer";
          if ( !v14 )
            v27 = L"FSVP";
          Template_zqq(updated, (_DWORD)v9, (_DWORD)v27, 0, updated);
        }
      }
      *((_WORD *)this + 399) = 0;
    }
  }
}
