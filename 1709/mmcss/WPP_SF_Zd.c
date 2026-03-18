/*
 * XREFs of WPP_SF_Zd @ 0x1C000202C
 * Callers:
 *     CiDispatchInitialize @ 0x1C000C0B8 (CiDispatchInitialize.c)
 *     CiConfigQueryValue @ 0x1C000CDD0 (CiConfigQueryValue.c)
 *     CiConfigReadDWORD @ 0x1C000CFDC (CiConfigReadDWORD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00012D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_Zd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  unsigned int v4; // eax
  const wchar_t *v5; // r10
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = *a4;
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  }
  else
  {
    v4 = 8;
    v5 = L"NULL";
  }
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           a4,
           2LL,
           v5,
           v4,
           va,
           4LL,
           0LL);
}
