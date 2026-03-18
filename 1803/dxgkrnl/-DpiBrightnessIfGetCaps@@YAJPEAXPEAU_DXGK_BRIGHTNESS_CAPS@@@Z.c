/*
 * XREFs of ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C02011C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetCaps(_QWORD *a1, struct _DXGK_BRIGHTNESS_CAPS *a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  struct _KMUTANT *v7; // rbp
  int v8; // edi

  v2 = a1[8];
  v3 = 0LL;
  if ( *(_WORD *)(v2 + 4562) == 2 )
    v3 = v2 + 4560;
  if ( !v3 )
    return 3221225659LL;
  v7 = (struct _KMUTANT *)(v2 + 4288);
  v8 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v3 + 56) )
  {
    v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_BRIGHTNESS_CAPS *))(v3 + 56))(*(_QWORD *)(v3 + 8), a2);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex(v7, 0);
  return (unsigned int)v8;
}
