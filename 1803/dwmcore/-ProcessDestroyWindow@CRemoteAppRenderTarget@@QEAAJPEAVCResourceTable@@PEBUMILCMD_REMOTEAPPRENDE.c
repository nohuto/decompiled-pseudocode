/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x18015CB34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?NotifyMetaData@CDesktopRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180157F4C (-NotifyMetaData@CDesktopRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015CE10 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CDesktopRenderTarget *v4; // rcx
  int v5; // eax
  _OWORD v7[3]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+60h] [rbp+7h]
  _OWORD v9[3]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+47h]

  if ( *((_QWORD *)this + 21) )
  {
    memset_0(v7, 0, 0x38uLL);
    v4 = (CDesktopRenderTarget *)*((_QWORD *)this + 21);
    *((_QWORD *)&v7[0] + 1) = *((_QWORD *)this + 35);
    v9[1] = v7[1];
    LODWORD(v7[0]) = 4;
    v10 = v8;
    v9[0] = v7[0];
    v9[2] = v7[2];
    v5 = CDesktopRenderTarget::NotifyMetaData(v4, (__int64)v9);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x65u);
    CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange((CRemoteAppRenderTarget *)((char *)this + 64));
  }
  *((_QWORD *)this + 35) = 0LL;
  return 0LL;
}
