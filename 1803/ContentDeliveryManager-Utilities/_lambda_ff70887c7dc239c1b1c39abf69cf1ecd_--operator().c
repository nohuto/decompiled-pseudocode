/*
 * XREFs of _lambda_ff70887c7dc239c1b1c39abf69cf1ecd_::operator() @ 0x18004CE14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff70887c7dc239c1b1c39abf69cf1ecd___::Run @ 0x18004FE20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ff70887c7dc239c1b1c39abf69cf1ecd___--Run.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032D4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D260 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004D260.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ff70887c7dc239c1b1c39abf69cf1ecd_::operator()(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  DWORD v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  try
  {
    v2 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::QueryInterface(
           *a1,
           &GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a,
           &v12);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163B,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v2);
    }
    else
    {
      v3 = a1[4];
      v4 = a1[3];
      v13 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = v12;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, v4, v12);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        v8 = WaitForSingleObjectEx(*(HANDLE *)(a1[1] + 80LL), 0xFFFFFFFF, 0);
        if ( v8 == 258 || !v8 )
        {
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          return 0LL;
        }
LABEL_15:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x967,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v9);
        JUMPOUT(0x18004CF35LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x117,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11B,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v9);
  }
  return result;
}
