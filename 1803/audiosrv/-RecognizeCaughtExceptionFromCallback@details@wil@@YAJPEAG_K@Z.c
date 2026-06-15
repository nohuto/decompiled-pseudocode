/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x18009ABBC
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x18009AF36 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, unsigned __int16 *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbp
  int v5; // eax
  int v6; // ecx
  _QWORD *v7; // rdx
  _QWORD v8[5]; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v9; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v8[4] = -2LL;
  result = ((__int64 (__fastcall *)(wil::details *))wil::g_pfnResultFromCaughtException)(this);
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( this )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v9 )
    {
      v7 = v8;
      v4 = v7;
      wil::details::MaybeGetExceptionString((wil::details *)v4[5], (wchar_t *)v4[8], (unsigned __int16 *)v4[9]);
      v5 = *((_DWORD *)v4 + 20);
      v6 = -2147024322;
      if ( v5 >= 0 )
        v5 = v6;
      *((_DWORD *)v4 + 20) = v5;
      return v10;
    }
    catch ( ... )
    {
      return v10;
    }
  }
  return result;
}
