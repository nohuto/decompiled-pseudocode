/*
 * XREFs of ??1CDWMSwapChain@@MEAA@XZ @ 0x1800CE018
 * Callers:
 *     ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x1800CE0C0 (--_GCDWMSwapChain@@MEAAPEAXI@Z.c)
 *     ??_ECDWMSwapChainDDA@@MEAAPEAXI@Z @ 0x18019D9E0 (--_ECDWMSwapChainDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800CDFC0 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800CE118 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::~CDWMSwapChain(CDWMSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  struct DwmCoreAsimov::CDwmEventManager *Manager; // rax

  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 40));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 39));
  v2 = *((_QWORD *)this + 37);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 38);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 45));
  v4 = (void *)*((_QWORD *)this + 43);
  if ( v4 )
    CloseHandle(v4);
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5);
  DwmCoreAsimov::CDwmEventManager::SetFlipState(Manager, this, 3LL);
  CSwapChainBase::~CSwapChainBase(this);
}
