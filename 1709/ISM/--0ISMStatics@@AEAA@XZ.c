/*
 * XREFs of ??0ISMStatics@@AEAA@XZ @ 0x180030C8C
 * Callers:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x180084608 (--$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
ISMStatics *__fastcall ISMStatics::ISMStatics(ISMStatics *this)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)this = 0LL;
  v9 = 0LL;
  v8 = 0;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ViewHierarchy,IViewHierarchy,enum ViewHierarchy::TestMode>(&v9, &v8);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = v9;
  v4 = 0LL;
  v9 = 0LL;
  v5 = *(_QWORD *)this;
  *(_QWORD *)this = v3;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = v9;
  }
  if ( v4 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return this;
}
