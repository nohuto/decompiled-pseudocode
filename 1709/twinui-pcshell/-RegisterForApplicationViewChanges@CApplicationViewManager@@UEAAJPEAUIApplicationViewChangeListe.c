/*
 * XREFs of ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180075AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180025B60 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@012@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x180077C0C (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::RegisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct IUnknown *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewChangeListener *v11; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = a2;
  v12 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
         &v12,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = AgileRegistrationList::Register(this + 11, v12, a3);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BE,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1BC,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return v6;
}
