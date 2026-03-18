/*
 * XREFs of ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18012FE5C (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICE.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801A3ABC (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4CFC (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801A5B20 (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801A5D10 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801A61F4 (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1801A63B0 (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801A643C (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801A6478 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801A653C (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 *     ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x1801A6570 (-SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z.c)
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1801A65B0 (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z @ 0x1801A6AB0 (-Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1801A8860 (-SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHolographicInteropTaskQueue::PostMessageW(
        union _SLIST_HEADER *this,
        int a2,
        struct _SLIST_ENTRY *a3,
        void *a4,
        struct _SLIST_ENTRY *a5,
        void *a6,
        struct _SLIST_ENTRY *a7)
{
  char v11; // di
  PSLIST_ENTRY v12; // rbx
  struct _SLIST_ENTRY *v13; // rax

  v11 = 0;
  v12 = InterlockedPopEntrySList(this + 2);
  if ( !v12 )
  {
    v13 = (struct _SLIST_ENTRY *)operator new(0x40uLL);
    v12 = v13;
    if ( v13 )
      memset_0(v13, 0, 0x40uLL);
    else
      v12 = 0LL;
    if ( !v12 )
      return v11;
    memset_0(v12, 0, 0x40uLL);
  }
  *((_DWORD *)&v12->Next + 2) = a2;
  v12[1].Next = a3;
  if ( a3 )
    (*((void (__fastcall **)(struct _SLIST_ENTRY *))&a3->Next->Next + 1))(a3);
  v12[2].Next = a5;
  *((_QWORD *)&v12[2].Next + 1) = a6;
  v12[3].Next = a7;
  *((_QWORD *)&v12[1].Next + 1) = a4;
  InterlockedPushEntrySList(this + 1, v12);
  return 1;
}
