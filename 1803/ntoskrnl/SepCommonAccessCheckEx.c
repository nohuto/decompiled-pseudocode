/*
 * XREFs of SepCommonAccessCheckEx @ 0x140148DCC
 * Callers:
 *     SeAccessCheckEx @ 0x140148DA0 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x14029FA10 (SeSrpAccessCheck.c)
 * Callees:
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepLogAdminlessAccessFailure @ 0x14029FCE0 (SepLogAdminlessAccessFailure.c)
 */

char __fastcall SepCommonAccessCheckEx(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  bool v8; // di
  char v9; // bl

  v8 = AdminlessTelemetryEnabled(0LL, SubjectContext, a2);
  if ( !v8 || (v9 = SepCommonAccessCheckExWithAdminlessChecks(SubjectContext, a5, a6, a7, 1)) == 0 )
  {
    v9 = SepCommonAccessCheckExWithAdminlessChecks(SubjectContext, a5, a6, a7, 0);
    if ( v9 && v8 )
      SepLogAdminlessAccessFailure();
  }
  return v9;
}
