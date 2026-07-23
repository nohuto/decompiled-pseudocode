/*
 * XREFs of AdminlessTelemetryEnabled @ 0x14005E210
 * Callers:
 *     SeAccessCheckByType @ 0x14005CD40 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140148DCC (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404D7DC4 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepReferenceTokenByHandle @ 0x1400EF490 (SepReferenceTokenByHandle.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1404DFBC0 (SeTokenIsAdmin.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

bool __fastcall AdminlessTelemetryEnabled(__int64 a1, PSECURITY_SUBJECT_CONTEXT SubjectContext, char a3)
{
  char v3; // bl
  BOOLEAN v7; // r14
  unsigned __int8 v8; // bp
  char v9; // al
  PSID **v11; // rbx
  BOOLEAN IsAdmin; // bp
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContexta; // rdi
  PSID **ClientToken; // rsi
  _BYTE v15[8]; // [rsp+30h] [rbp-88h] BYREF
  PACCESS_TOKEN Token; // [rsp+38h] [rbp-80h] BYREF
  __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+48h] [rbp-70h] BYREF
  _DWORD SystemInformation[8]; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  Token = 0LL;
  v7 = 1;
  v8 = KeGetCurrentThread()->gap0[10];
  if ( KeGetCurrentIrql() > 1u )
    return 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( g_sModeChecked )
  {
    v9 = g_inSMode;
  }
  else
  {
    v9 = ZwQuerySystemInformation(SystemCodeIntegrityPolicyInformation, SystemInformation, 0x20u, 0LL) >= 0
      && (SystemInformation[0] & 0xA0000000) != 0;
    g_inSMode = v9;
    g_sModeChecked = 1;
  }
  if ( !v9 )
    return 0;
  if ( a1 )
  {
    if ( (int)SepReferenceTokenByHandle(a1, 8, v8, (int)&Token, v15, (__int64)&v17) < 0 )
      return 0;
    v11 = (PSID **)Token;
    IsAdmin = SeTokenIsAdmin(Token);
    if ( IsAdmin )
      v7 = RtlEqualSid(SeLocalSystemSid, *v11[19]);
    if ( v11 )
      ObfDereferenceObject(v11);
  }
  else
  {
    if ( !SubjectContext )
      SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    if ( SubjectContext )
    {
      v3 = a3;
      p_SubjectContexta = SubjectContext;
    }
    if ( !v3 )
      SeLockSubjectContext(p_SubjectContexta);
    ClientToken = (PSID **)p_SubjectContexta->ClientToken;
    if ( !p_SubjectContexta->ClientToken )
      ClientToken = (PSID **)p_SubjectContexta->PrimaryToken;
    IsAdmin = SeTokenIsAdmin(ClientToken);
    if ( IsAdmin )
      v7 = RtlEqualSid(SeLocalSystemSid, *ClientToken[19]);
    if ( !v3 )
      SeUnlockSubjectContext(p_SubjectContexta);
    if ( p_SubjectContexta == &SubjectContexta )
      SeReleaseSubjectContext(p_SubjectContexta);
  }
  return IsAdmin && !v7;
}
