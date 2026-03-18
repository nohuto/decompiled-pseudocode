/*
 * XREFs of ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800D7918
 * Callers:
 *     ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x1800D7860 (--_GCHwndRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18016FF28 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18005FD88 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800D7A8C (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     PubSebUnregisterRpc @ 0x1800D94F8 (PubSebUnregisterRpc.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0zqq @ 0x1801591B4 (McTemplateU0zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18020D838 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::~CHwndRenderTarget(CHwndRenderTarget *this)
{
  __int64 v2; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v3; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v4; // rcx
  char updated; // al
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  CHwndRenderTarget::ResetMoveOptimizationNodes(this);
  CHwndRenderTarget::ReleaseResources(this);
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 105));
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 108);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 855) )
    {
      if ( *((_BYTE *)this + 856) && *((_QWORD *)this + 109) )
      {
        PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 109), 0);
        v3 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 108);
      }
      updated = PubSebiUpdateLevelEventRpc(v3, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0zqq(v7, v6, v8, 0, updated);
      v3 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 108);
      *((_BYTE *)this + 855) = 0;
    }
    PubSebUnregisterRpc(v3);
    *((_QWORD *)this + 108) = 0LL;
  }
  v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 109);
  if ( v4 )
  {
    PubSebUnregisterRpc(v4);
    *((_QWORD *)this + 109) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 768);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 696);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 536);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
