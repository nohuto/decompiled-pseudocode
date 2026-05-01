/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z @ 0x1801F98B0
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$3 @ 0x1801F9A64 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$3.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, wchar_t *a2)
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
      wil::details::MaybeGetExceptionString((wil::details *)v4[5], (wchar_t *)v4[8], (wchar_t *)v4[9]);
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
