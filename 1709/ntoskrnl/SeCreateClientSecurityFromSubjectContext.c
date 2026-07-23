/*
 * XREFs of SeCreateClientSecurityFromSubjectContext @ 0x1405985F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x1400A09D0 (RtlSidDominatesForTrust.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
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
  int v10; // r14d
  NTSTATUS ClientSecurity; // edi
  void *v13; // rbp
  BOOLEAN DominatesTrust; // [rsp+A0h] [rbp+8h] BYREF
  BOOLEAN v15; // [rsp+B0h] [rbp+18h]

  v15 = ServerIsRemote;
  ClientToken = SubjectContext->ClientToken;
  v5 = 0;
  v6 = 0LL;
  DominatesTrust = 0;
  if ( !ClientToken )
    ClientToken = SubjectContext->PrimaryToken;
  ObfReferenceObject(ClientToken);
  if ( SubjectContext->ClientToken )
  {
    v10 = 2;
    v13 = (void *)*((_QWORD *)SubjectContext->PrimaryToken + 138);
    RtlSidDominatesForTrust(v13, *((PSID *)SubjectContext->ClientToken + 138), &DominatesTrust);
    if ( !DominatesTrust )
    {
      v5 = 1;
      v6 = (__int64)v13;
    }
  }
  else
  {
    v10 = 1;
  }
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)ClientToken,
                     (__int64)ClientSecurityQos,
                     v15,
                     v10,
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
