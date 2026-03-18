/*
 * XREFs of ??1CRemotingRenderTarget@@EEAA@XZ @ 0x180139F0C
 * Callers:
 *     ??_GCRemotingRenderTarget@@EEAAPEAXI@Z @ 0x18013A050 (--_GCRemotingRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180130D78 (-PushDesktopMetaData@CRenderTargetManager@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x1801347B0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z.c)
 */

void __fastcall CRemotingRenderTarget::~CRemotingRenderTarget(CRemotingRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  signed int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  CMILCOMBase *v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // rdx
  __int128 v13; // [rsp+38h] [rbp-29h]
  __int128 v14; // [rsp+48h] [rbp-19h]
  __int128 v15; // [rsp+58h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp+7h]
  _OWORD v17[3]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+47h]

  LODWORD(v13) = 4;
  *(_QWORD *)this = &CRemotingRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 2);
  v17[1] = v14;
  v3 = *((_QWORD *)this + 7);
  v4 = *(_QWORD *)(v2 + 72);
  v18 = v16;
  *((_QWORD *)&v13 + 1) = *(_QWORD *)(v3 + 16);
  v17[0] = v13;
  v17[2] = v15;
  v5 = CRenderTargetManager::PushDesktopMetaData(v4, (__int64)v17);
  v6 = 0;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xBCEu);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 8);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    CDesktopRenderTarget::RemoveRemoteAppRenderTarget(
      (CDesktopRenderTarget *)(v7 + 112),
      *((struct CRemoteApplicationWindow **)this + 7));
    v8 = (CMILCOMBase *)*((_QWORD *)this + 9);
    if ( v8 )
    {
      CMILCOMBase::InternalRelease(v8);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 592);
  v11 = *(_QWORD *)(v9 + 568);
  if ( v10 )
  {
    do
    {
      if ( this == *(CRemotingRenderTarget **)(v11 + 8LL * v6) )
        break;
      ++v6;
    }
    while ( v6 < v10 );
  }
  if ( v6 < v10 )
  {
    if ( v6 < v10 - 1 )
    {
      do
      {
        v12 = v6++;
        *(_QWORD *)(v11 + 8 * v12) = *(_QWORD *)(v11 + 8LL * v6);
      }
      while ( v6 < *(_DWORD *)(v9 + 592) - 1 );
    }
    --*(_DWORD *)(v9 + 592);
  }
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 7);
  CResource::~CResource(this);
}
