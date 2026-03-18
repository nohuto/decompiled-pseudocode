/*
 * XREFs of SeCreateClientSecurity @ 0x1404D41D0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1404CEEA0 (AlpcpImpersonateMessage.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     NtImpersonateThread @ 0x14058775C (NtImpersonateThread.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x1400EF698 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  __int64 v7; // rsi
  NTSTATUS ClientSecurity; // ebx
  unsigned __int8 v10; // [rsp+60h] [rbp-20h] BYREF
  char v11; // [rsp+61h] [rbp-1Fh] BYREF
  char v12; // [rsp+62h] [rbp-1Eh] BYREF
  unsigned int v13; // [rsp+64h] [rbp-1Ch] BYREF
  int v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF

  v15 = 0LL;
  v10 = 0;
  v7 = PsReferenceEffectiveToken(
         (_DWORD)ClientThread,
         (unsigned int)&v14,
         (unsigned int)&v12,
         (unsigned int)&v13,
         (__int64)&v11);
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v7 + 1104), (__int64)&v11, &v10, &v15);
  ClientSecurity = SepCreateClientSecurityEx(
                     (_DWORD *)v7,
                     (__int64)ClientSecurityQos,
                     RemoteSession,
                     v14,
                     v12,
                     v13,
                     0,
                     0LL,
                     v10,
                     v15,
                     (__int64)ClientContext);
  if ( ClientSecurity < 0 || !ClientSecurityQos->ContextTrackingMode )
    ObfDereferenceObject((PVOID)v7);
  return ClientSecurity;
}
