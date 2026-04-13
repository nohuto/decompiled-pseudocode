/*
 * XREFs of wil::details::lambda_call__lambda_4e2ce0d0a336563a4f80a3494a2f01b5___::_lambda_call__lambda_4e2ce0d0a336563a4f80a3494a2f01b5___ @ 0x18005A4A4
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$6 @ 0x1800B8077 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B8077.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_c1333ba9be4c29c31379dbf137a12c84___ @ 0x18005BE20 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_c1333ba9be4c29c3137.c)
 */

void __fastcall wil::details::lambda_call__lambda_4e2ce0d0a336563a4f80a3494a2f01b5___::_lambda_call__lambda_4e2ce0d0a336563a4f80a3494a2f01b5___(
        __int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rcx
  int v3; // eax
  int v4[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)v4 = *(_QWORD *)(a1 + 8);
    v1 = *(_QWORD *)(a1 + 16);
    v2 = *(_QWORD **)a1;
    *(_QWORD *)&v4[2] = v1;
    v3 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_c1333ba9be4c29c31379dbf137a12c84___(
           *v2,
           v4);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x18005A501LL);
    }
  }
}
