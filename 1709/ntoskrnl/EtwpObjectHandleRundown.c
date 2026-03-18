/*
 * XREFs of EtwpObjectHandleRundown @ 0x14074D884
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14074DE90 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x140506320 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned int *v4; // rdi

  v4 = (unsigned int *)ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 108) = (HIDWORD(Process[217].Ptr) & 0x1000) != 0;
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection_0(Process + 95);
  }
}
