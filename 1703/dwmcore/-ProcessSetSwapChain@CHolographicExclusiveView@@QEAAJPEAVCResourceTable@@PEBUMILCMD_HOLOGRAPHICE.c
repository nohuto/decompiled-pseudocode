/*
 * XREFs of ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18012FE5C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4CFC (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessSetSwapChain(
        struct IUnknown *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN *a3)
{
  int v4; // ebx
  unsigned int v5; // edx
  struct CResource *v6; // rsi
  struct CResource *ResourceWithoutType; // rax
  int v9; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  CHolographicInteropTaskQueue *Release; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5);
    v6 = ResourceWithoutType;
    if ( ResourceWithoutType )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              97LL) )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x70u);
LABEL_12:
        CHolographicExclusiveView::ReleaseSwapChain(this);
        return (unsigned int)v4;
      }
    }
  }
  CHolographicExclusiveView::ReleaseSwapChain(this);
  if ( v6 )
  {
    this[10].lpVtbl = (struct IUnknownVtbl *)v6;
    v9 = CResource::RegisterNotifier((CResource *)this, v6);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7Fu);
    }
    else
    {
      lpVtbl = this[7].lpVtbl;
      if ( lpVtbl )
      {
        Release = (CHolographicInteropTaskQueue *)lpVtbl[1].Release;
        if ( Release )
          CHolographicInteropTaskQueue::PostMessageW(Release, 0xDu, this, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( v4 < 0 )
      goto LABEL_12;
  }
  return (unsigned int)v4;
}
