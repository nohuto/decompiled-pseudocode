/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0038D00
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0038A00 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     WdfVersionUnbindClass_0 @ 0x1C0038DC0 (WdfVersionUnbindClass_0.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  struct _MARKER_TYPE *v1; // rbx
  void (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), struct _WDF_BIND_INFO *, PWDF_DRIVER_GLOBALS, struct _MARKER_TYPE *); // rax

  v1 = (struct _MARKER_TYPE *)&__KMDF_CLASS_BIND_END;
  if ( off_1C005E6A8 != (struct _MARKER_TYPE *)__KMDF_CLASS_BIND_START
    && &__KMDF_CLASS_BIND_END <= (_QWORD *)off_1C005E6A8 )
  {
    do
    {
      v3 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), struct _WDF_BIND_INFO *, PWDF_DRIVER_GLOBALS, struct _MARKER_TYPE *))*((_QWORD *)v1 + 8);
      if ( v3 )
        v3(WdfVersionUnbindClass_0, a1, WdfDriverGlobals, v1);
      else
        WdfVersionUnbindClass_0(a1, WdfDriverGlobals, v1);
      v1 = (struct _MARKER_TYPE *)((char *)v1 + 80);
    }
    while ( v1 <= off_1C005E6A8 );
  }
}
