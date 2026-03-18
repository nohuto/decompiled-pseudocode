/*
 * XREFs of ??1CRemotingRenderTarget@@EEAA@XZ @ 0x180147BD4
 * Callers:
 *     ??_GCRemotingRenderTarget@@EEAAPEAXI@Z @ 0x180147D10 (--_GCRemotingRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180144D70 (-PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x180147AE0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z.c)
 */

void __fastcall CRemotingRenderTarget::~CRemotingRenderTarget(CRemotingRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  CMILCOMBase *v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int128 v12; // [rsp+38h] [rbp-29h]
  __int128 v13; // [rsp+48h] [rbp-19h]
  __int128 v14; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  _OWORD v16[3]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+47h]

  LODWORD(v12) = 4;
  *(_QWORD *)this = &CRemotingRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 2);
  v16[1] = v13;
  v3 = *((_QWORD *)this + 7);
  v4 = *(_QWORD *)(v2 + 32);
  v17 = v15;
  *((_QWORD *)&v12 + 1) = *(_QWORD *)(v3 + 16);
  v16[0] = v12;
  v16[2] = v14;
  v5 = CRenderTargetManager::PushDesktopMetaData(v4, (__int64)v16);
  v6 = 0;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD25u);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 8);
  CDesktopRenderTarget::RemoveRemoteAppRenderTarget(
    (CDesktopRenderTarget *)(*((_QWORD *)this + 9) + 112LL),
    *((struct CRemoteApplicationWindow **)this + 7));
  v7 = (CMILCOMBase *)*((_QWORD *)this + 9);
  if ( v7 )
  {
    CMILCOMBase::InternalRelease(v7);
    *((_QWORD *)this + 9) = 0LL;
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(_DWORD *)(v8 + 624);
  v10 = *(_QWORD *)(v8 + 600);
  if ( v9 )
  {
    do
    {
      if ( this == *(CRemotingRenderTarget **)(v10 + 8LL * v6) )
        break;
      ++v6;
    }
    while ( v6 < v9 );
  }
  if ( v6 < v9 )
  {
    if ( v6 < v9 - 1 )
    {
      do
      {
        v11 = v6++;
        *(_QWORD *)(v10 + 8 * v11) = *(_QWORD *)(v10 + 8LL * v6);
      }
      while ( v6 < *(_DWORD *)(v8 + 624) - 1 );
    }
    --*(_DWORD *)(v8 + 624);
  }
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 7);
  CResource::~CResource(this);
}
