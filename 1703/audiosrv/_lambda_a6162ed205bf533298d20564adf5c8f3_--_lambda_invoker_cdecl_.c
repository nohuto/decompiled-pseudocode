/*
 * XREFs of _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x1800291A0
 * Callers:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180028FD8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 * Callees:
 *     _lambda_395b8c38dee70e6dfe044506095802dc_::operator() @ 0x1800291C0 (_lambda_395b8c38dee70e6dfe044506095802dc_--operator().c)
 */

_BOOL8 __fastcall lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_(
        union wil_details_FeaturePropertyCache *a1,
        void *a2)
{
  return (unsigned __int8)lambda_395b8c38dee70e6dfe044506095802dc_::operator()(a2, a1) != 0;
}
