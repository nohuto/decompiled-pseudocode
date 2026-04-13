/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x180002674
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x1800C1C55 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800C10B3 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, unsigned __int16 *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbp
  wchar_t *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  _QWORD *v9; // rdx
  _QWORD v10[5]; // [rsp+0h] [rbp-38h] BYREF
  exception *v11; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h]

  v10[4] = -2LL;
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
    catch ( exception *v11 )
    {
      v9 = v10;
      v4 = v9;
      v5 = (wchar_t *)v9[8];
      if ( v5 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4[5] + 8LL))(v4[5]);
        StringCchPrintfW(v5, v4[9], L"std::exception: %hs", v6);
      }
      v7 = *((_DWORD *)v4 + 20);
      v8 = -2147024322;
      if ( v7 >= 0 )
        v7 = v8;
      *((_DWORD *)v4 + 20) = v7;
      return v12;
    }
    catch ( ... )
    {
      return v12;
    }
  }
  return result;
}
