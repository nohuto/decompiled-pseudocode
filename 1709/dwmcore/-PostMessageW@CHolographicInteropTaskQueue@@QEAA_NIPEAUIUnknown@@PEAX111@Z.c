/*
 * XREFs of ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8
 * Callers:
 *     ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1801BCF38 (-ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHIC.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1801BDCE4 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801BDD40 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1801BE470 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFB00 (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z @ 0x1801BFC04 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801BFC88 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801BFDF0 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1801BFF30 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801C06E8 (-EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801C0B3C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1801C0D20 (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801C0D5C (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1801C0DFC (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXXZ @ 0x1801C0E90 (-RemoveHolographicComposition@CHolographicManager@@QEAAXXZ.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C0EE4 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801C0FB8 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801C13B8 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 *     ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x1801C13F8 (-SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C14C0 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x1801C1530 (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801C1A50 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 *     ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1801C3940 (-SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1801C3ED0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

char __fastcall CHolographicInteropTaskQueue::PostMessageW(
        CHolographicInteropTaskQueue *this,
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
  void *v14; // rdx

  v11 = 0;
  v12 = InterlockedPopEntrySList((PSLIST_HEADER)this + 2);
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
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, v12);
  wil::details::SetEvent(*((wil::details **)this + 6), v14);
  return 1;
}
