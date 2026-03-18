/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x1404D7DC4
 * Callers:
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x1404D966C (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckAndAuditAlarm @ 0x1404D9718 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140790C90 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140790D3C (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 * Callees:
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     SepAccessStatusHasAccessDenied @ 0x1401A6E0C (SepAccessStatusHasAccessDenied.c)
 *     SepLogAdminlessAccessFailure @ 0x14029FCE0 (SepLogAdminlessAccessFailure.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        int a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *Address,
        __int64 a16,
        char a17)
{
  int v17; // r14d
  int v21; // ebx
  int v22; // eax
  bool v24; // [rsp+90h] [rbp-38h]

  v17 = a3;
  v24 = AdminlessTelemetryEnabled(a3, 0LL, 0);
  if ( !v24
    || (v21 = SepAccessCheckAndAuditAlarmWithAdminlessChecks(
                a1,
                a2,
                v17,
                a4,
                a5,
                a6,
                Src,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                Address,
                a16,
                a17,
                1),
        v21 < 0)
    || SepAccessStatusHasAccessDenied(a17, a12, (unsigned __int64)Address) )
  {
    v22 = SepAccessCheckAndAuditAlarmWithAdminlessChecks(
            a1,
            a2,
            v17,
            a4,
            a5,
            a6,
            Src,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            Address,
            a16,
            a17,
            0);
    v21 = v22;
    if ( v24 && v22 >= 0 && !SepAccessStatusHasAccessDenied(a17, a12, (unsigned __int64)Address) )
      SepLogAdminlessAccessFailure();
  }
  return (unsigned int)v21;
}
