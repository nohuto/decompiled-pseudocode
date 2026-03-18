/*
 * XREFs of ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C01E3450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGet(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  int v5; // edi

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4536) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      if ( *(_BYTE *)(v2 + 4272) || *(_BYTE *)(v2 + 4273) )
      {
        v5 = 0;
        *a2 = *(_BYTE *)(v2 + 4280);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(v2 + 4536))(*(_QWORD *)(v2 + 4496), a2);
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4288), 0);
  return (unsigned int)v5;
}
