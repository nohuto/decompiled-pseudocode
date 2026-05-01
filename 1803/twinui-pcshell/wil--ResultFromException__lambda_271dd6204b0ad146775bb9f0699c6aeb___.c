/*
 * XREFs of wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___ @ 0x1800A0FE0
 * Callers:
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::operator() @ 0x1800A1BF0 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--operator().c)
 * Callees:
 *     _lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator() @ 0x1800A16CC (_lambda_271dd6204b0ad146775bb9f0699c6aeb_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
