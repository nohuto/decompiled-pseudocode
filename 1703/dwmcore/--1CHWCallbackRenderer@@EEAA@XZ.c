/*
 * XREFs of ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008F094
 * Callers:
 *     ??_GCHWCallbackRenderer@@EEAAPEAXI@Z @ 0x18008F22C (--_GCHWCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x1800ABF98 (-UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BE03C (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::~CHWCallbackRenderer(
        CHWCallbackRenderer *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  CMILPoolResource *v7; // rcx
  CMILPoolResource *v8; // rcx

  *(_QWORD *)this = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *((_QWORD *)this + 1) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  CCallbackRendererManager::UnlockDrawlistEntryRange(
    (CCallbackRendererManager *)(*((_QWORD *)this + 3) + 8LL),
    a2,
    *((_DWORD *)this + 18),
    *((_DWORD *)this + 19));
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 14));
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 13));
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (CMILPoolResource *)*((_QWORD *)this + 5);
  if ( v7 )
    CMILPoolResource::Release(v7);
  v8 = (CMILPoolResource *)*((_QWORD *)this + 6);
  if ( v8 )
    CMILPoolResource::Release(v8);
  std::deque<CMegaRect>::_Tidy((char *)this + 256, v3, v4, v5);
  WPF::ProcessHeapImpl::Free(*((void **)this + 32));
  *((_QWORD *)this + 32) = 0LL;
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 30));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
