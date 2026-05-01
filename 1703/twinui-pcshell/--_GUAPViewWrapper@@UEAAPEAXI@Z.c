/*
 * XREFs of ??_GUAPViewWrapper@@UEAAPEAXI@Z @ 0x1801005C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x1800FD7F8 (--1ViewWrapperBase@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

UAPViewWrapper *__fastcall UAPViewWrapper::`scalar deleting destructor'(UAPViewWrapper *this, __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx

  v3 = a2;
  v4 = *((_QWORD *)this + 66);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  ViewWrapperBase::~ViewWrapperBase((UAPViewWrapper *)((char *)this + 8), a2);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
