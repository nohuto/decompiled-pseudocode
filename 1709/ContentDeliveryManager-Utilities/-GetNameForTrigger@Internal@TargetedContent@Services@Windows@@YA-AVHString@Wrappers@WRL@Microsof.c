/*
 * XREFs of ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F394
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_b1678f9b9404a342b907309c6392cb38___ @ 0x18005B830 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_b1678f9b9404a342b90.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_c1333ba9be4c29c31379dbf137a12c84___ @ 0x18005BE20 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_c1333ba9be4c29c3137.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18005C400 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18005C9FC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F548 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F948 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::GetNameForTrigger(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  wchar_t **v5; // rax
  unsigned __int64 v6; // r9
  const WCHAR *v7; // rdi
  unsigned __int64 v8; // rax
  UINT32 v9; // ebp
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+10h] BYREF
  HSTRING string; // [rsp+70h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v13);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
  string = 0LL;
  v5 = (wchar_t **)&unk_1800D4F80;
  while ( *(_DWORD *)v5 != v13 )
  {
    v5 += 2;
    if ( v5 == off_1800D4FF0 )
      goto LABEL_16;
  }
  v6 = 0LL;
  v7 = v5[1];
  if ( v7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = -1;
    if ( v8 <= 0xFFFFFFFF )
      v9 = v8;
    v6 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v8 <= 0xFFFFFFFF )
    {
      WindowsDeleteString(0LL);
      string = 0LL;
      v6 = (unsigned int)WindowsCreateString(v7, v9, &string);
    }
  }
  if ( (v6 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)v6);
    __debugbreak();
  }
LABEL_16:
  WindowsDeleteString(*a1);
  *a1 = string;
  string = 0LL;
  WindowsDeleteString(0LL);
  if ( WindowsIsStringEmpty(*a1) )
  {
    WindowsDeleteString(*a1);
    *a1 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, a1);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( WindowsIsStringEmpty(*a1) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL);
      __debugbreak();
    }
  }
  return a1;
}
