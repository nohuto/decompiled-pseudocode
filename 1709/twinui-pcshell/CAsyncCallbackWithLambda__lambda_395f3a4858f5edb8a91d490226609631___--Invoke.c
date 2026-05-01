/*
 * XREFs of CAsyncCallbackWithLambda__lambda_395f3a4858f5edb8a91d490226609631___::Invoke @ 0x1801B2E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_395f3a4858f5edb8a91d490226609631___::Invoke(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int16 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD *)(v1 + 416);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v7 = v3;
      v6 = 0;
      CoreUICallSend(
        v4,
        &v7,
        1LL,
        0LL,
        v6,
        &g_parameters_WD_Xc7wa8kXnz3A_QVS42fP19PQ,
        *(_DWORD *)(v1 + 448),
        *(_DWORD *)(v1 + 456),
        *(_DWORD *)(v1 + 452),
        *(_DWORD *)(v1 + 460));
    }
  }
  return 0LL;
}
