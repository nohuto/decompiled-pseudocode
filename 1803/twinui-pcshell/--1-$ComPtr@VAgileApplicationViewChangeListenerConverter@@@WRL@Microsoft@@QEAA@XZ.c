/*
 * XREFs of ??1?$ComPtr@VAgileApplicationViewChangeListenerConverter@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9CC4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AgileApplicationViewChangeListenerConverter_IApplicationViewChangeListener_IApplicationViewChangeListener_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x1800B6344 (_Microsoft--WRL--Details--MakeAndInitialize_AgileApplicationViewChangeListenerConve_ea_1800B6344.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall Microsoft::WRL::ComPtr<AgileApplicationViewChangeListenerConverter>::~ComPtr<AgileApplicationViewChangeListenerConverter>(
        __int64 *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    *v1 = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release )
      LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(
                      v2,
                      (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release);
    else
      LODWORD(v1) = v3();
  }
  return (int)v1;
}
