/*
 * XREFs of HvlSkNmiCallbackRoutine @ 0x1401EAB20
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall HvlSkNmiCallbackRoutine(PVOID Context, __int64 Handled)
{
  void *v2; // rbx
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // rdx
  ULONG v6; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v2 = qword_14036A708;
  if ( qword_14036A708 && (*((_DWORD *)qword_14036A708 + 1) & 1) != 0 )
  {
    HvlEnlightenments &= 0x2000u;
    ((void (__fastcall *)(PVOID, __int64))off_14033B4B0[0])(Context, Handled);
    ((void (__fastcall *)(__int64))off_14033B3A8[0])(1LL);
    v3 = *((_QWORD *)v2 + 4);
    v4 = *((_QWORD *)v2 + 3);
    v5 = *((_QWORD *)v2 + 2);
    v6 = *((_DWORD *)v2 + 2);
    BugCheckParameter4 = *((_QWORD *)v2 + 5);
    KiHypervisorInitiatedCrashDump = 1;
    PoAllProcIntrDisabled = 1;
    KeBugCheckEx(v6, v5, v4, v3, BugCheckParameter4);
  }
  return 0;
}
