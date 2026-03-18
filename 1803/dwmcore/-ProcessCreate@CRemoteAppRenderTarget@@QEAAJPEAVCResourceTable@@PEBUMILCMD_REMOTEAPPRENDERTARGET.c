/*
 * XREFs of ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x18015CA7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180033E00 (-AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z @ 0x18015D1F0 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessCreate(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTEAPPRENDERTARGET_CREATE *a3)
{
  CMILCOMBase *Resource; // rax
  int v6; // eax
  unsigned int v7; // ebx

  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x2Eu);
  if ( *((_QWORD *)this + 21) || !Resource )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x48u);
  }
  else
  {
    *((_QWORD *)this + 21) = Resource;
    CMILCOMBase::InternalAddRef(Resource);
    *((_BYTE *)this + 304) = *(_DWORD *)(*((_QWORD *)this + 2) + 1184LL) == 4;
    *((_QWORD *)this + 35) = *(_QWORD *)((char *)a3 + 12);
    CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)((char *)a3 + 20));
    v6 = CComposition::AddRenderTarget(*((CRenderTargetManager ***)this + 2), this);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x52u);
  }
  return v7;
}
