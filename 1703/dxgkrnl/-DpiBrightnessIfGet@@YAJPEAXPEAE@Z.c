/*
 * XREFs of ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C01C9300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGet(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  int v5; // edi

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4192), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4440) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      if ( *(_BYTE *)(v2 + 4176) || *(_BYTE *)(v2 + 4177) )
      {
        v5 = 0;
        *a2 = *(_BYTE *)(v2 + 4184);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(v2 + 4440))(*(_QWORD *)(v2 + 4400), a2);
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4192), 0);
  return (unsigned int)v5;
}
