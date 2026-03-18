/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x180156F60 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180034C3C (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180044B30 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x18004CAB0 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C68A0 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800C9930 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x18015E020 (-RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::~CDesktopRenderTarget(CDesktopRenderTarget *this)
{
  _QWORD *v2; // rdi
  struct CVisualTree *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  unsigned int v9; // edx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = (_QWORD *)((char *)this + 168);
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  v3 = (struct CVisualTree *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v4 = *((_QWORD *)this + 2);
  *v2 = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(v4 + 24), v3);
  CUINTDesktopAssociation::RemoveDesktopRenderTarget((CUINTDesktopAssociation *)(*((_QWORD *)this + 2) + 32LL), this);
  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
  v7 = *(_DWORD *)(v6 + 80);
  v8 = *(_QWORD *)(v6 + 56);
  if ( v7 )
  {
    do
    {
      if ( v2 == *(_QWORD **)(v8 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v7 );
  }
  if ( (unsigned int)v5 < v7 )
  {
    while ( (unsigned int)v5 < v7 - 1 )
    {
      *(_QWORD *)(v8 + 8 * v5) = *(_QWORD *)(v8 + 8LL * (unsigned int)(v5 + 1));
      v5 = (unsigned int)(v5 + 1);
      v7 = *(_DWORD *)(v6 + 80);
    }
    *(_DWORD *)(v6 + 80) = v7 - 1;
  }
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  SAFE_DELETE<CComposeTop>((CComposeTop **)this + 40, v9);
  v10 = (void *)*((_QWORD *)this + 42);
  if ( v10 )
    CloseHandle(v10);
  v11 = *((_QWORD *)this + 15);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 32) = 0;
    CVisual::SetVisualDesktopId(*(CVisual **)(v11 + 24), 0);
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 43));
  *((_QWORD *)this + 43) = 0LL;
  v12 = *((_QWORD *)this + 45);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 45) = 0LL;
  }
  ReleaseInterface<CDisplay>((__int64 *)this + 48);
  SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 49);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 224);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
