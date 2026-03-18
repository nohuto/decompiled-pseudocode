/*
 * XREFs of ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18001D050
 * Callers:
 *     ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x18001D190 (--_GCHWCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x180046228 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800B27E0 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::~CHWCallbackRenderer(
        CHWCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = *((unsigned int *)this + 12);
  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  if ( (_DWORD)v4 != -1 )
    CCallbackRendererManager::UnlockDrawlistEntryRange(
      (CCallbackRendererManager *)(*((_QWORD *)this + 3) + 8LL),
      a2,
      v4,
      *((_DWORD *)this + 13));
  std::deque<CMegaRect>::_Tidy((char *)this + 88, a2, v4, a4);
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease((char *)this + 80);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
