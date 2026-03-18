/*
 * XREFs of EtwpObjectHandleRundown @ 0x1407AF0F4
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     PsGetProcessId @ 0x14006ECF0 (PsGetProcessId.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x14054B830 (ExEnumHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned __int64 v4; // rdi

  v4 = ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 108) = (HIDWORD(Process[217].Ptr) & 0x1000) != 0;
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection(Process + 95);
  }
}
