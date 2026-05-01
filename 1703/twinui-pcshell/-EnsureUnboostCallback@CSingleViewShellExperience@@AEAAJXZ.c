/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x18018355C
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18018367C (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_8cf0745262468425ce7edac2544d66d5___ @ 0x180184FE8 (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_IInspectable_____ptr64___lambda_8cf0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  __int64 *v1; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int AgileReference; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  CSingleViewShellExperience *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 160);
  if ( *((_QWORD *)this + 20) )
    return 0LL;
  v4 = *((_QWORD *)this + 12);
  *(_QWORD *)v10 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v11 = this;
  Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_8cf0745262468425ce7edac2544d66d5___(
    &v13,
    v10);
  if ( *(_QWORD *)v10 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10);
  v5 = v13;
  if ( v13 )
  {
    v7 = *v1;
    *v1 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, v5, v1);
    v6 = AgileReference;
    if ( AgileReference >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x407,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)AgileReference);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x406,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
