/*
 * XREFs of ??1CAnalogCompositorManager@@AEAA@XZ @ 0x180048E74
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__ @ 0x18004BA60 (_CAnalogCompositorManager--GetInstance_--_2_--_dynamic_atexit_destructor_for__singletonAnalogCom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18006FAA0 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 */

void __fastcall CAnalogCompositorManager::~CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  __int64 v1; // rcx

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&qword_1800CA038);
  Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)qword_1800CA008);
  v1 = qword_1800CA000;
  if ( qword_1800CA000 )
  {
    qword_1800CA000 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
