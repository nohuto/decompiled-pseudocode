/*
 * XREFs of wil::details::lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___::_lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___ @ 0x1800963B0
 * Callers:
 *     _SpatialInputControllerCollection::FinalizeControllerInitialization_::_1_::dtor$1 @ 0x1800D0E47 (_SpatialInputControllerCollection--FinalizeControllerInitialization_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180097258 (-Stop@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___::_lambda_call__lambda_6298af97ebda0bd77aa9caf5b402f073___(
        unsigned int **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
             a1[1],
             **a1);
  }
  return result;
}
