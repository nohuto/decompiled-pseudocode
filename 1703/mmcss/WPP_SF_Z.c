/*
 * XREFs of WPP_SF_Z @ 0x1C0004730
 * Callers:
 *     CiDispatchCreate @ 0x1C000A5E0 (CiDispatchCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Z(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rdx
  const wchar_t *v5; // r8

  if ( a4 )
  {
    v4 = *a4;
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  }
  else
  {
    v4 = 8LL;
    v5 = L"NULL";
  }
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_dd714108735c30899653f2ca1e788838_Traceguids,
           10LL,
           a4,
           2LL,
           v5,
           v4,
           0LL);
}
