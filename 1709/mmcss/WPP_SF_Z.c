/*
 * XREFs of WPP_SF_Z @ 0x1C0001FA8
 * Callers:
 *     CiDispatchCreate @ 0x1C00096A0 (CiDispatchCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00012D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Z(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  unsigned int v4; // eax
  const wchar_t *v5; // rdx

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
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, _QWORD, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_98d2866517bd35d6c7950b9d0bdce9ac_Traceguids,
           10LL,
           a4,
           2LL,
           v5,
           v4,
           0LL);
}
