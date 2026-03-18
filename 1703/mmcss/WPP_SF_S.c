/*
 * XREFs of WPP_SF_S @ 0x1C0004A38
 * Callers:
 *     CiTaskDump @ 0x1C000D8D0 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f6cc88b4b7f1381c20a7522460412b96_Traceguids,
           11LL,
           a4,
           2 * v6,
           0LL);
}
