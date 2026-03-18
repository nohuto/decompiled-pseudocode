/*
 * XREFs of ZwCreateThreadEx @ 0x14017F000
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x1404EBD18 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
