/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180087388
 * Callers:
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18003220C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x1800872D0 (--$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Win.c)
 *     ??1?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAE30 (--1-$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_EViewEventArgs@@UEAAPEAXI@Z @ 0x180087450 (--_EViewEventArgs@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(
        volatile signed __int64 **a1,
        volatile int *a2)
{
  volatile signed __int64 *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rax
  unsigned int v5; // edi
  signed __int64 v6; // rtt
  void *(__fastcall *v7)(ViewEventArgs *__hidden, unsigned int); // rax
  void (*v8)(void); // rax

  v2 = *a1;
  v3 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    v4 = *((_QWORD *)v2 + 10);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 == 0x7FFFFFFF )
        return 2147483646;
      v5 = v4 - 1;
      v6 = v4;
      v4 = _InterlockedCompareExchange64(v2 + 10, v4 - 1, v4);
      if ( v6 == v4 )
        goto LABEL_9;
    }
    v5 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), a2);
LABEL_9:
    if ( !v5 )
    {
      v7 = *(void *(__fastcall **)(ViewEventArgs *__hidden, unsigned int))(*v2 + 64);
      if ( v7 == ViewEventArgs::`vector deleting destructor' )
        ViewEventArgs::`vector deleting destructor'((ViewEventArgs *)v2, 1u);
      else
        v7((ViewEventArgs *)v2, 1u);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v8 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( (char *)v8 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          v8();
      }
    }
    return v5;
  }
  return v3;
}
