/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_f57c409ef9907fe20f12ddbbf436a36a____Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x18001CA60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f57c409ef9907fe20f12ddbbf436a36a_::operator() @ 0x18001A924 (_lambda_f57c409ef9907fe20f12ddbbf436a36a_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_f57c409ef9907fe20f12ddbbf436a36a____Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_f57c409ef9907fe20f12ddbbf436a36a_::operator()(
                           (struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private **)(a1 + 8),
                           a4);
  return (unsigned int)a3;
}
