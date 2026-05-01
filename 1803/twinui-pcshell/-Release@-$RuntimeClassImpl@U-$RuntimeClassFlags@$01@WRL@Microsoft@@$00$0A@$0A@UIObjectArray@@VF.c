/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001EAE0
 * Callers:
 *     ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x18001D500 (-Release@-$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ.c)
 *     ?Release@?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@UEAAKXZ @ 0x18001D590 (-Release@-$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18009C8EC (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A2CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIOb_ea_1800A2CD0.c)
 *     ??1?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7638 (--1-$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18004E840 (-_Tidy@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::Release(
        _DWORD *a1,
        volatile int *a2)
{
  unsigned int result; // eax
  unsigned int v4; // edi
  AgileRegistrationList::AgileCallbackArray *(__fastcall *v5)(AgileRegistrationList::AgileCallbackArray *, char); // rax
  __int64 v6; // rcx
  void (*v7)(void); // rax

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 11), a2);
  v4 = result;
  if ( !result )
  {
    if ( a1 )
    {
      v5 = *(AgileRegistrationList::AgileCallbackArray *(__fastcall **)(AgileRegistrationList::AgileCallbackArray *, char))(*(_QWORD *)a1 + 40LL);
      if ( v5 == AgileRegistrationList::AgileCallbackArray::`vector deleting destructor' )
      {
        std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Tidy(a1 + 12);
        a1[11] = -1073741823;
        v6 = *((_QWORD *)a1 + 4);
        if ( v6 )
        {
          *((_QWORD *)a1 + 4) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        operator delete(a1, (const struct std::nothrow_t *)0x48);
      }
      else
      {
        v5((AgileRegistrationList::AgileCallbackArray *)a1, 1);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v7 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return v4;
      }
      v7();
    }
    return v4;
  }
  return result;
}
