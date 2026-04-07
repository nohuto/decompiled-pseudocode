/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180007800 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180017540 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180017D30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001BB00 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020510 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024274 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800254C0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18003C9D8 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18006A478 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18006A534 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18006A5EC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x18006B7AC (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007CE00 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x180085C80 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x180086144 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180086D04 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800962A8 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009C028 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x18009ED40 (-Reset@CAnimationResource@@UEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x18004675A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  const void *v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  void *v7; // rdx
  void (__fastcall *v8)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  const void *v9; // [rsp+30h] [rbp+8h] BYREF

  result = a2;
  v4 = *(const void **)a1;
  v5 = *(void **)(a1 + 8);
  if ( v4 != v5 )
  {
    v6 = result * *(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v5, v4, (unsigned int)v6);
        v7 = *(void **)a1;
        v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v8 == WPF::ProcessHeapImpl::Free )
        {
          if ( v7 )
            HeapFree(g_hProcessHeap, 0, *(LPVOID *)a1);
        }
        else
        {
          v8(WPF::g_pProcessHeap, v7);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
        goto LABEL_9;
      }
      v9 = v4;
      result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, const void **, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 24LL))(
                 WPF::g_pProcessHeap,
                 &v9,
                 (unsigned int)v6);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)a1 = v9;
        result = *(unsigned int *)(a1 + 24);
LABEL_9:
        *(_DWORD *)(a1 + 20) = result;
      }
    }
  }
  return result;
}
