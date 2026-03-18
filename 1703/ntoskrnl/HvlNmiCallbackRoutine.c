/*
 * XREFs of HvlNmiCallbackRoutine @ 0x1401EAA30
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall HvlNmiCallbackRoutine(PVOID Context, __int64 Handled)
{
  _QWORD *v2; // rbx
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rdx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_14036A708;
  if ( qword_14036A708 && (*((_DWORD *)qword_14036A708 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64, __int64))off_14033B3A8[0])(1LL, Handled);
    v3 = v2[18];
    v4 = v2[17];
    v5 = v2[16];
    BugCheckParameter4 = v2[19];
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v5, v4, v3, BugCheckParameter4);
  }
  return 0;
}
