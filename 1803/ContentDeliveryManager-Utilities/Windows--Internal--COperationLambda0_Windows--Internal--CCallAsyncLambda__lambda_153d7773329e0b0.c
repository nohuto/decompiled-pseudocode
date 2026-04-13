/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_153d7773329e0b09e7c7941b6675254c____Windows::Internal::CNoResult_::Run @ 0x18003C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18003009C (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_153d7773329e0b09e7c7941b6675254c____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[104]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v8; // [rsp+90h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( a2 == 1 && a3 >= 0 )
  {
    v3 = 2LL;
    do
    {
      v8 = 0LL;
      --v3;
    }
    while ( v3 );
    v4 = ContentManagement::ContentManagementService::SendAppServiceMessage(
           *(ContentManagement::ContentManagementService **)(a1 + 8),
           10 - (unsigned int)(*(_BYTE *)(a1 + 16) != 0),
           (__int64)v7);
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x220,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v5;
}
