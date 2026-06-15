/*
 * XREFs of ??1CMMNotificationDelegator@@UEAA@XZ @ 0x180092408
 * Callers:
 *     ??_GCMMNotificationDelegator@@UEAAPEAXI@Z @ 0x1800928F0 (--_GCMMNotificationDelegator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMMNotificationDelegator::~CMMNotificationDelegator(CMMNotificationDelegator *this)
{
  volatile signed __int32 *v2; // rcx
  __int64 (__fastcall *v3)(volatile signed __int32 *); // rax

  *(_QWORD *)this = &CMMNotificationDelegator::`vftable';
  *((_QWORD *)this + 1) = &CMMNotificationDelegator::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(*(_QWORD *)&g_DeviceEnumerator);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    v3 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v2);
    else
      v3(v2);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>((__int64)this);
}
