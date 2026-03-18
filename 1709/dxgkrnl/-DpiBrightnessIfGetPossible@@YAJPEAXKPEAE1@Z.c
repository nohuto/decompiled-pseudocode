/*
 * XREFs of ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C01E3680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00B8774 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00B87F0 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetPossible(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // rbp
  int v9; // ebx

  v4 = a1[8];
  v9 = -1073741661;
  KeWaitForSingleObject((PVOID)(v4 + 4288), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v4 + 4520) )
  {
    v9 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, unsigned __int8 *))(v4 + 4520))(
             *(_QWORD *)(v4 + 4496),
             a2,
             a3,
             a4);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v4 + 4288), 0);
  return (unsigned int)v9;
}
