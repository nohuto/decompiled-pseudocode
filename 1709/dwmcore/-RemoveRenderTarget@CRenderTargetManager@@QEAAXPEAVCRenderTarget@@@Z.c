/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18001B3A0
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800168B8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?DetachFromChannel@COffScreenRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800785F0 (-DetachFromChannel@COffScreenRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x1801347B0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1801C0D5C (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRemoveTarget@CRenderTargetManager@@AEAAXPEAVCRenderTarget@@@Z @ 0x18001B2AC (-InternalRemoveTarget@CRenderTargetManager@@AEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z @ 0x18007BAF8 (-Remove@-$DynArray@PEAVCRenderTarget@@$00@@QEAAHAEBQEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  struct CRenderTarget **i; // r8
  struct CRenderTarget **v6; // rcx
  struct CRenderTarget *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = 0;
  v4 = 0;
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 3); v4 < *((_DWORD *)this + 12); ++i )
  {
    if ( a2 == *i )
      break;
    ++v4;
  }
  if ( v4 >= *((_DWORD *)this + 12) )
  {
    v6 = (struct CRenderTarget **)*((_QWORD *)this + 14);
    if ( *((_DWORD *)this + 34) )
    {
      do
      {
        if ( a2 == *v6 )
          break;
        ++v3;
        ++v6;
      }
      while ( v3 < *((_DWORD *)this + 34) );
      if ( v3 < *((_DWORD *)this + 34) )
      {
        (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
        DynArray<CRenderTarget *,1>::Remove((char *)this + 112, &v7);
        *((_BYTE *)this + 145) = 1;
      }
    }
  }
  else
  {
    CRenderTargetManager::InternalRemoveTarget(this, a2);
  }
}
