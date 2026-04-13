/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_ @ 0x180038E18
 * Callers:
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_71cc456d2cb9e9e1279ecfc076754c25___ @ 0x18003716C (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_71cc456d2cb9e9e1279ecfc076754c25____Windows::Internal::CNoResult_(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)a1 = off_1800C4AA0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 120);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 120), v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
  }
LABEL_6:
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a2 + 32) = 1;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a2 + 48) = 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a2 + 64) = 1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_BYTE *)(a1 + 88) = 0;
  *(_BYTE *)(a2 + 80) = 1;
  v7 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 96) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return a1;
}
