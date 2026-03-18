/*
 * XREFs of ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800CD9A0
 * Callers:
 *     ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x1800CD7A0 (--_GCHwndRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180155988 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180155E54 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     PubSebUnregisterRpc @ 0x1800CD188 (PubSebUnregisterRpc.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800CD928 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_zqq @ 0x180146694 (Template_zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801B13A4 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::~CHwndRenderTarget(CHwndRenderTarget *this)
{
  __int64 v2; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v3; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v4; // rcx
  char updated; // al
  int v6; // edx
  const wchar_t *v7; // r8

  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  CHwndRenderTarget::ResetMoveOptimizationNodes(this);
  CHwndRenderTarget::ReleaseResources(this);
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( *((_QWORD *)this + 101) )
  {
    if ( *((_BYTE *)this + 798) )
    {
      if ( *((_BYTE *)this + 799) )
      {
        v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 102);
        if ( v4 )
          PubSebiUpdateLevelEventRpc(v4, 0);
      }
      updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 101), 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v7 = L"P2PRenderer";
        if ( !*((_BYTE *)this + 800) )
          v7 = L"FSVP";
        Template_zqq((unsigned int)L"FSVP", v6, (_DWORD)v7, 0, updated);
      }
      *((_BYTE *)this + 798) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 101));
    *((_QWORD *)this + 101) = 0LL;
  }
  v3 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 102);
  if ( v3 )
  {
    PubSebUnregisterRpc(v3);
    *((_QWORD *)this + 102) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 88);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 79);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 59);
  CRenderTarget::~CRenderTarget(this);
}
