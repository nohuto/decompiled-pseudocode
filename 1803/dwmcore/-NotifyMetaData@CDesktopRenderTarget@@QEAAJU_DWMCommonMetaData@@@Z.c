/*
 * XREFs of ?NotifyMetaData@CDesktopRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180157F4C
 * Callers:
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x18015CB34 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDE.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x18004504C (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180158890 (-NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyMetaData(CDesktopRenderTarget *a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct CHwndRenderTarget *Primary; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // eax
  _OWORD v9[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v3 = -2003292412;
  Primary = CDesktopRenderTarget::GetPrimary(a1);
  if ( Primary )
  {
    v5 = *(_OWORD *)(a2 + 16);
    v9[0] = *(_OWORD *)a2;
    v6 = *(_OWORD *)(a2 + 32);
    v9[1] = v5;
    *(_QWORD *)&v5 = *(_QWORD *)(a2 + 48);
    v9[2] = v6;
    v10 = v5;
    v7 = CHwndRenderTarget::NotifyMetaData(Primary, v9);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xF3u);
  }
  return v3;
}
