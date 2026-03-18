/*
 * XREFs of EtwpObjectHandleRundown @ 0x1407107A0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1404B03C0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x140428630 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned __int64 v4; // rdi

  v4 = ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 36) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 100) = PsIsSystemProcess((PEPROCESS)Process);
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection(Process + 95);
  }
}
