/*
 * XREFs of ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C00020D4
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001EB4 (FxDriverEntryWorker.c)
 * Callees:
 *     Control_Cleanup @ 0x1C0001D40 (Control_Cleanup.c)
 *     WdfVersionBindClass_0 @ 0x1C0002240 (WdfVersionBindClass_0.c)
 */

__int64 __fastcall FxStubBindClasses(struct _WDF_BIND_INFO *a1)
{
  __int64 result; // rax
  _QWORD *i; // rbx
  __int64 (__fastcall *v4)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), struct _WDF_BIND_INFO *, PWDF_DRIVER_GLOBALS, _QWORD *); // rdi

  result = 0LL;
  if ( &__KMDF_CLASS_BIND_START > (_UNKNOWN *)&__KMDF_CLASS_BIND_END )
    return 3221225595LL;
  for ( i = &Ucx_BIND_INFO; i < &__KMDF_CLASS_BIND_END; i += 10 )
  {
    if ( *(_DWORD *)i != 80 )
      return 3221225476LL;
    v4 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), struct _WDF_BIND_INFO *, PWDF_DRIVER_GLOBALS, _QWORD *))i[7];
    off_1C004C5B8 = i;
    if ( v4 )
      result = v4(WdfVersionBindClass_0, a1, WdfDriverGlobals, i);
    else
      result = WdfVersionBindClass_0(a1, WdfDriverGlobals, i);
    if ( (int)result < 0 )
      return result;
  }
  return result;
}
