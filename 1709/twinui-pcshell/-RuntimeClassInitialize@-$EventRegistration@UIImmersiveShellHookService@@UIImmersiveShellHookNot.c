/*
 * XREFs of ?RuntimeClassInitialize@?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookNotification@@@Z @ 0x180193CB0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@wil@@YA?AV?$ComPtr@VShellHookRegistration@details@AppViewEventHelpers@@@WRL@Microsoft@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x180193880 (--$MakeAndInitializeOrThrow@VShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiv.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewEventRegistration@details@AppViewEventHelpers@@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$ComPtr@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@WRL@Microsoft@@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x1801939B8 (--$MakeAndInitializeOrThrow@VApplicationViewEventRegistration@details@AppViewEventHelpers@@AEAPE.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewEventHelpers::details::EventRegistration<IImmersiveShellHookService,IImmersiveShellHookNotification>::RuntimeClassInitialize(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v3; // ebx
  const char *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    v10 = 0LL;
    v11 = 0LL;
    v3 = (**a2)(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v11);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x66D,
        (__int64)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)v3);
    v5 = v10;
    v6 = 0LL;
    v10 = 0LL;
    v7 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v5;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = v10;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x21,
                           (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appvieweventhelpers.h",
                           v4);
  }
  return result;
}
