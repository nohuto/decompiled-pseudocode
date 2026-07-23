/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x140459410
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140044710 (RtlSidDominatesForTrust.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurityFromSubjectContext(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN ServerIsRemote,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  PACCESS_TOKEN ClientToken; // rbx
  char v5; // r12
  __int64 v6; // r15
  int v10; // r8d
  int v11; // r14d
  NTSTATUS ClientSecurity; // edi
  void *v14; // rbp
  BOOLEAN DominatesTrust; // [rsp+A0h] [rbp+8h] BYREF
  BOOLEAN v16; // [rsp+B0h] [rbp+18h]

  v16 = ServerIsRemote;
  ClientToken = SubjectContext->ClientToken;
  v5 = 0;
  v6 = 0LL;
  DominatesTrust = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObject(ClientToken);
  if ( SubjectContext->ClientToken )
  {
    v11 = 2;
    v14 = (void *)*((_QWORD *)SubjectContext->PrimaryToken + 138);
    RtlSidDominatesForTrust(v14, *((PSID *)SubjectContext->ClientToken + 138), &DominatesTrust);
    if ( !DominatesTrust )
    {
      v5 = 1;
      v6 = (__int64)v14;
    }
  }
  else
  {
    v11 = 1;
  }
  LOBYTE(v10) = v16;
  ClientSecurity = SepCreateClientSecurityEx(
                     (_DWORD)ClientToken,
                     (_DWORD)ClientSecurityQos,
                     v10,
                     v11,
                     0,
                     SubjectContext->ImpersonationLevel,
                     0,
                     0LL,
                     v5,
                     v6,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObject(ClientToken);
  return ClientSecurity;
}
