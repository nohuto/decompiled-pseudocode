/*
 * XREFs of wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___ @ 0x1802B819C
 * Callers:
 *     ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___ @ 0x1802B7D48 (ShellPositionerManager--DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d___.c)
 * Callees:
 *     _lambda_a928f0ddc407f1fa0c53cd408c359a95_::operator() @ 0x1802B8C10 (_lambda_a928f0ddc407f1fa0c53cd408c359a95_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_a928f0ddc407f1fa0c53cd408c359a95_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
