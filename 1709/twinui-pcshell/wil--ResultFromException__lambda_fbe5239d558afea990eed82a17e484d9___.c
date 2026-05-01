/*
 * XREFs of wil::ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___ @ 0x18019E988
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18019C780 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     wil::details::functor_wrapper_void__lambda_fbe5239d558afea990eed82a17e484d9___::Run @ 0x18019F010 (wil--details--functor_wrapper_void__lambda_fbe5239d558afea990eed82a17e484d9___--Run.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___(__int64 a1)
{
  wil *v1; // rcx
  unsigned int v2; // r8d
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[4] = -2LL;
  try
  {
    v5[0] = off_18020FDC0;
    v5[1] = a1;
    wil::details::functor_wrapper_void__lambda_fbe5239d558afea990eed82a17e484d9___::Run(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1, v4, v2);
  }
  return result;
}
