/*
 * XREFs of ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C0201290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetPossible(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v11; // ebx

  v4 = a1[8];
  v5 = 0LL;
  if ( *(_WORD *)(v4 + 4562) == 2 )
    v5 = v4 + 4560;
  if ( !v5 )
    return 3221225659LL;
  v11 = -1073741661;
  KeWaitForSingleObject((PVOID)(v4 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v5 + 32) )
  {
    v11 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, unsigned __int8 *))(v5 + 32))(
              *(_QWORD *)(v5 + 8),
              a2,
              a3,
              a4);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v4 + 4288), 0);
  return (unsigned int)v11;
}
