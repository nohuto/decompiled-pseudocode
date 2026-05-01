/*
 * XREFs of ??_ELegacyViewWrapper@@UEAAPEAXI@Z @ 0x180100530
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x1800FD7F8 (--1ViewWrapperBase@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

LegacyViewWrapper *__fastcall LegacyViewWrapper::`vector deleting destructor'(LegacyViewWrapper *this, __int64 a2)
{
  char v3; // di
  struct _TP_TIMER *v4; // rcx
  __int64 v5; // rcx

  v3 = a2;
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 67);
  if ( v4 )
  {
    SetThreadpoolTimer(v4, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 67), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 67));
  }
  v5 = *((_QWORD *)this + 65);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v5));
  ViewWrapperBase::~ViewWrapperBase((LegacyViewWrapper *)((char *)this + 8), a2);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
