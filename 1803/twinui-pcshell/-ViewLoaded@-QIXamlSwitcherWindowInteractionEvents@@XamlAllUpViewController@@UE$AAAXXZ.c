/*
 * XREFs of ?ViewLoaded@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXXZ @ 0x18021F3B8
 * Callers:
 *     ?ViewLoaded@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ @ 0x1800AB810 (-ViewLoaded@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___ @ 0x180219F20 (CreationThreadDispatcher--RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _ViewLoaded__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXXZ(__int64 a1)
{
  __int64 WeakReference; // rax
  __int64 v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]
  __int64 v8; // [rsp+50h] [rbp+18h]

  WeakReference = Platform::Details::GetWeakReference(a1);
  v3 = WeakReference;
  v7 = WeakReference;
  v8 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  v6 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___(
         *(_QWORD *)(a1 + 88),
         (volatile int *)&v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      404LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
