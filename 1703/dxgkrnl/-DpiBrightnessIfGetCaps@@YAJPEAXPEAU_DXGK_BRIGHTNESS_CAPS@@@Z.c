/*
 * XREFs of ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C01C9480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetCaps(_QWORD *a1, struct _DXGK_BRIGHTNESS_CAPS *a2)
{
  __int64 v2; // rbp
  int v5; // ebx

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4192), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4448) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_BRIGHTNESS_CAPS *))(v2 + 4448))(*(_QWORD *)(v2 + 4400), a2);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4192), 0);
  return (unsigned int)v5;
}
