/*
 * XREFs of ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x1802165FC
 * Callers:
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x1802167B8 (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ??0CAltTabViewHost@@QEAA@XZ @ 0x180274D14 (--0CAltTabViewHost@@QEAA@XZ.c)
 * Callees:
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x18008FFDC (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::CMultitaskingViewHostBase<IAltTabViewHost>(__int64 a1)
{
  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(a1 + 24, 0);
  *(_QWORD *)a1 = &Microsoft::WRL::ChainInterfaces<IAltTabViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *(_QWORD *)a1 = &CMultitaskingViewHostBase<IAltTabViewHost>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAltTabViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 8) = &CMultitaskingViewHostBase<IAltTabViewHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 96) = a1 + 8;
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
