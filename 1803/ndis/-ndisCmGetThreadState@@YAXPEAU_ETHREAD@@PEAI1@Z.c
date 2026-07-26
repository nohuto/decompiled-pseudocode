/*
 * XREFs of ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C00085C0
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0009530 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ndisGetNsiClientInfo @ 0x1C0022458 (ndisGetNsiClientInfo.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003E5D8 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ndisNsiGetAllThreadInformation @ 0x1C00AC120 (ndisNsiGetAllThreadInformation.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00686C4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

void __fastcall ndisCmGetThreadState(PETHREAD Thread, unsigned int *a2, unsigned int *a3)
{
  unsigned int *ThreadProperty; // rax
  PACCESS_TOKEN v7; // rax
  void *v8; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  unsigned int v11; // eax
  NTSTATUS v12; // ebx
  int v13; // esi
  KIRQL v14; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  ThreadProperty = (unsigned int *)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    *a2 = *ThreadProperty;
    *a3 = ThreadProperty[1];
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
  if ( *a2 )
    return;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  else
  {
    v7 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v8 = v7;
    if ( v7 )
    {
      v12 = SeQueryInformationToken(v7, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v8);
      if ( v12 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_8;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_8:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v13 = 0;
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v13 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v14);
    if ( !v13 )
      v13 = 1;
    v11 = v13;
  }
  else
  {
    v11 = 1;
  }
  *a2 = v11;
}
