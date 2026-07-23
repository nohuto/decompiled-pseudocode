/*
 * XREFs of SeAccessCheckWithHint @ 0x1400D47B0
 * Callers:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140004224 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400A14E0 (RtlpAllowsLowBoxAccess.c)
 *     SeAccessCheckFromStateEx @ 0x1400D46F0 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140540BA0 (ObpVerifyAccessToBoundaryEntry.c)
 *     ExpCheckWakeTimerAccess @ 0x1406128DC (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepLogAdminlessAccessFailure @ 0x14029FCE0 (SepLogAdminlessAccessFailure.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SeAccessCheckWithHint(
        __int64 a1,
        unsigned int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdi
  char v16; // al
  char v17; // di
  unsigned __int8 v18; // bl
  __int64 result; // rax
  unsigned __int8 v20; // cl
  PSID **ClientToken; // rax
  BOOLEAN v22; // al
  int v23; // [rsp+40h] [rbp-B8h]
  int v24; // [rsp+58h] [rbp-A0h]
  char v25; // [rsp+60h] [rbp-98h]
  BOOLEAN IsAdmin; // [rsp+61h] [rbp-97h]
  unsigned __int8 v27; // [rsp+64h] [rbp-94h]
  PSID **v28; // [rsp+68h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-80h] BYREF
  _DWORD SystemInformation[8]; // [rsp+98h] [rbp-60h] BYREF

  p_SubjectContext = a3;
  v25 = 1;
  if ( KeGetCurrentIrql() > 1u )
    goto LABEL_5;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( g_sModeChecked )
  {
    v16 = g_inSMode;
  }
  else
  {
    v16 = ZwQuerySystemInformation(SystemCodeIntegrityPolicyInformation, SystemInformation, 0x20u, 0LL) >= 0
       && (SystemInformation[0] & 0xA0000000) != 0;
    g_inSMode = v16;
    g_sModeChecked = 1;
  }
  if ( !v16 )
    goto LABEL_5;
  if ( !a3 )
  {
    p_SubjectContext = &SubjectContext;
    SeCaptureSubjectContext(&SubjectContext);
  }
  v20 = 0;
  if ( a3 )
    v20 = a4;
  v27 = v20;
  if ( !v20 )
    SeLockSubjectContext(p_SubjectContext);
  ClientToken = (PSID **)p_SubjectContext->ClientToken;
  v28 = (PSID **)p_SubjectContext->ClientToken;
  if ( !p_SubjectContext->ClientToken )
  {
    ClientToken = (PSID **)p_SubjectContext->PrimaryToken;
    v28 = ClientToken;
  }
  IsAdmin = SeTokenIsAdmin(ClientToken);
  if ( IsAdmin )
  {
    v22 = RtlEqualSid(SeLocalSystemSid, *v28[19]);
    v25 = v22;
  }
  else
  {
    v22 = 1;
  }
  if ( !v27 )
  {
    SeUnlockSubjectContext(p_SubjectContext);
    v22 = v25;
  }
  if ( p_SubjectContext == &SubjectContext )
  {
    SeReleaseSubjectContext(p_SubjectContext);
    v22 = v25;
  }
  if ( IsAdmin && !v22 )
  {
    v17 = 1;
    result = SeAccessCheckWithHintWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 1);
    if ( (_BYTE)result )
      return result;
  }
  else
  {
LABEL_5:
    v17 = 0;
  }
  LOBYTE(v24) = 0;
  LOBYTE(v23) = a9;
  v18 = SeAccessCheckWithHintWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, v23, a10, a11, v24);
  if ( v18 )
  {
    if ( v17 )
      SepLogAdminlessAccessFailure();
  }
  return v18;
}
