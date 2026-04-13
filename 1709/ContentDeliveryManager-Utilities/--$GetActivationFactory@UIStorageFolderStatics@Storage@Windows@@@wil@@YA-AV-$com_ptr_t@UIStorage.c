/*
 * XREFs of ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006B9A8
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006A720 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006ADE0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(const WCHAR *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int ActivationFactory; // eax
  const WCHAR *v6[3]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6[1] = (const WCHAR *)-2LL;
  v6[2] = a1;
  v6[0] = L"Windows.Storage.StorageFolder";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v7, v6);
  v3 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v2 + 24), &GUID_08f327ff_85d5_48b9_aee9_28511e339f9f, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  return a1;
}
