/*
 * XREFs of WPP_SF_Z @ 0x1C0001F78
 * Callers:
 *     CiDispatchCreate @ 0x1C0009690 (CiDispatchCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Z(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  unsigned int v4; // eax
  const wchar_t *v5; // rdx

  if ( a4 )
  {
    v4 = *a4;
    if ( (_WORD)v4 )
    {
      v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 8;
  }
  v5 = L"NULL";
LABEL_6:
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, _QWORD, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0cf46c375129332dca7ac6861072a04e_Traceguids,
           10LL,
           a4,
           2LL,
           v5,
           v4,
           0LL);
}
