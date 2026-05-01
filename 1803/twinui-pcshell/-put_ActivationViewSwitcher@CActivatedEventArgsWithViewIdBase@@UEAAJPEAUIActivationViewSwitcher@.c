/*
 * XREFs of ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1803170D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180108510 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::put_ActivationViewSwitcher(
        RTL_SRWLOCK *this,
        struct IUnknown *a2)
{
  unsigned int v4; // esi
  PVOID Ptr; // rcx
  struct IUnknown *v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h] BYREF

  wil::srwlock::lock_exclusive(this + 5, &v8);
  v4 = this[2].Ptr != 0LL ? 0x8000FFFF : 0;
  if ( !this[2].Ptr )
  {
    if ( !IsAgile(a2) )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( this[2].Ptr != a2 )
    {
      v7 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
      Ptr = this[2].Ptr;
      this[2].Ptr = a2;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return v4;
}
