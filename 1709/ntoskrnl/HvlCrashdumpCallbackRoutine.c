/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1401EFB90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char HvlCrashdumpCallbackRoutine()
{
  ULONG_PTR *v0; // rbx

  v0 = (ULONG_PTR *)qword_1403866A8;
  if ( qword_1403866A8 && (*((_DWORD *)qword_1403866A8 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_1403533D8[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v0[16], v0[17], v0[18], v0[19]);
  }
  return 0;
}
