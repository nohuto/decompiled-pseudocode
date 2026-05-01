/*
 * XREFs of wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___ @ 0x18019EAD4
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18019D214 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     _lambda_1195b550ee03e899c4c093f0587694a4_::operator() @ 0x18019D820 (_lambda_1195b550ee03e899c4c093f0587694a4_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4___(__int64 a1)
{
  wil *v1; // rcx
  unsigned int v2; // r8d
  __int64 result; // rax
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[4] = -2LL;
  try
  {
    lambda_1195b550ee03e899c4c093f0587694a4_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1, v4, v2);
  }
  return result;
}
