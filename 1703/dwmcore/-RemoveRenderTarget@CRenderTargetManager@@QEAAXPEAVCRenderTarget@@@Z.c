/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18006B630
 * Callers:
 *     ?NotifyCaptureCompleted@CVisualCapture@@QEAAXXZ @ 0x180026D74 (-NotifyCaptureCompleted@CVisualCapture@@QEAAXXZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18006A5F8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006AAAC (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180129734 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x180147AE0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801A6344 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18006B3AC (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z @ 0x1800B1928 (-Remove@-$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  struct CRenderTarget **v3; // rcx
  unsigned int i; // eax
  bool v6; // bp
  __int64 v7; // rcx
  unsigned int v9; // eax
  struct CRenderTarget **j; // rcx
  struct CRenderTarget *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (struct CRenderTarget **)*((_QWORD *)this + 3);
  for ( i = 0; i < *((_DWORD *)this + 12); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 12) )
  {
    v9 = 0;
    for ( j = (struct CRenderTarget **)*((_QWORD *)this + 14); v9 < *((_DWORD *)this + 34); ++j )
    {
      if ( a2 == *j )
        break;
      ++v9;
    }
    if ( v9 < *((_DWORD *)this + 34) )
    {
      (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
      DynArray<CRenderTarget *,1>::Remove((char *)this + 112, &v11);
      *((_BYTE *)this + 148) = 1;
    }
  }
  else
  {
    v6 = (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 38LL) != 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 176LL))(a2) )
    {
      if ( (*((_DWORD *)this + 25))-- == 1 )
        DwmGenerateMoveData(0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 59LL) )
      --*((_DWORD *)this + 26);
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 48LL) )
      --*((_DWORD *)this + 27);
    CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(this, a2, 0);
    DynArray<CRenderTarget *,1>::Remove((char *)this + 24, &v11);
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v6 )
      --*((_DWORD *)this + 24);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 392LL);
  if ( v7 )
    *(_BYTE *)(v7 + 28) = 1;
}
