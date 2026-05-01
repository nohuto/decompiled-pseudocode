/*
 * XREFs of ?GetPrivilegedArrangementOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@XZ @ 0x18007D6C0
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18007F310 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z @ 0x180084AA0 (-InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ApplicationViewManagement::CGlobals::GetPrivilegedArrangementOperations(__int64 *a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  volatile signed __int32 *v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v6);
  v2 = v6;
  if ( v6 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)v6 + 7) + 624LL);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v7 = *a1;
    v4 = v7;
    *a1 = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( _InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return a1;
}
