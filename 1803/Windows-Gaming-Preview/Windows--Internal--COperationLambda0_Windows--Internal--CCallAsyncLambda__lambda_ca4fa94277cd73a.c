/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_ca4fa94277cd73a625c05d148e00fab1____Windows::Internal::CNoResult_::Run @ 0x1800309A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ca4fa94277cd73a625c05d148e00fab1_::operator() @ 0x18002BE2C (_lambda_ca4fa94277cd73a625c05d148e00fab1_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_ca4fa94277cd73a625c05d148e00fab1____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_ca4fa94277cd73a625c05d148e00fab1_::operator()((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}
