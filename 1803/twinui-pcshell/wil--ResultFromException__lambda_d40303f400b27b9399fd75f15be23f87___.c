/*
 * XREFs of wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___ @ 0x1802BE548
 * Callers:
 *     ?_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1802C0ADC (-_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PE.c)
 * Callees:
 *     _lambda_d40303f400b27b9399fd75f15be23f87_::operator() @ 0x1802BEC1C (_lambda_d40303f400b27b9399fd75f15be23f87_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_d40303f400b27b9399fd75f15be23f87_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
