/*
 * XREFs of ??0CRemoteReleaseStub@ComTaskPool@Internal@Windows@@QEAA@PEAUIComPoolTask@23@@Z @ 0x180103F90
 * Callers:
 *     ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x18010B1CC (-RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180095D2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

IUnknown **__fastcall Windows::Internal::ComTaskPool::CRemoteReleaseStub::CRemoteReleaseStub(
        IUnknown **this,
        IUnknown *a2)
{
  IUnknown **result; // rax

  *this = (IUnknown *)&CThreadRefTaker::`vftable';
  SHGetThreadRef(this + 1);
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)(this + 2));
  *this = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
  this[2] = (IUnknown *)&Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  this[4] = a2;
  if ( a2 )
    ((void (__fastcall *)(IUnknown *))a2->lpVtbl->AddRef)(a2);
  result = this;
  *((_BYTE *)this + 40) = 0;
  return result;
}
