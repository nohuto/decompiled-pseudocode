/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_2f005c4553e058cc09db3219ad9ea13a____Windows::Internal::CNoResult_::Run @ 0x18002F970
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2f005c4553e058cc09db3219ad9ea13a_::operator() @ 0x18002B150 (_lambda_2f005c4553e058cc09db3219ad9ea13a_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_2f005c4553e058cc09db3219ad9ea13a____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_2f005c4553e058cc09db3219ad9ea13a_::operator()((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}
