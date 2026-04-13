/*
 * XREFs of ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800692A0
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x180063188 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x1800637A0 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de8398.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180063DA8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x1800643CC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f57f1aaae9d13b___ @ 0x18006558C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006940C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006979C (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x18006B7F0 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::GetNameForTrigger(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  wchar_t **v5; // rdx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  string = 0LL;
  v5 = (wchar_t **)&unk_1800E4430;
  while ( *(_DWORD *)v5 != v11 )
  {
    v5 += 2;
    if ( v5 == off_1800E44A0 )
      goto LABEL_5;
  }
  v7 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(&string);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_14;
LABEL_5:
  WindowsDeleteString(*a1);
  *a1 = string;
  string = 0LL;
  WindowsDeleteString(0LL);
  if ( WindowsIsStringEmpty(*a1) )
  {
    WindowsDeleteString(*a1);
    *a1 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, a1);
    if ( v6 >= 0 )
    {
      if ( !WindowsIsStringEmpty(*a1) )
        return a1;
LABEL_15:
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL);
      JUMPOUT(0x18006940ALL);
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x5A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  return a1;
}
