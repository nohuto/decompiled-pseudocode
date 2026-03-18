/*
 * XREFs of ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C0201000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGet(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v7; // edi

  v2 = a1[8];
  v3 = 0LL;
  if ( *(_WORD *)(v2 + 4562) == 2 )
    v3 = v2 + 4560;
  if ( !v3 )
    return 3221225659LL;
  v7 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v3 + 48) )
  {
    v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v7 >= 0 )
    {
      if ( *(_BYTE *)(v2 + 4272) || *(_BYTE *)(v2 + 4273) )
      {
        v7 = 0;
        *a2 = *(_BYTE *)(v2 + 4280);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(v3 + 48))(*(_QWORD *)(v3 + 8), a2);
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4288), 0);
  return (unsigned int)v7;
}
