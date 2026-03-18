/*
 * XREFs of PsAssignImpersonationToken @ 0x140571B40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall PsAssignImpersonationToken(PETHREAD Thread, HANDLE Token)
{
  NTSTATUS v2; // edi
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS result; // eax
  PVOID v6; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( !Token )
  {
    PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
    return v2;
  }
  result = ObReferenceObjectByHandle(
             Token,
             4u,
             (POBJECT_TYPE)SeTokenObjectType,
             CurrentThread->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      ObfDereferenceObject(Object);
      return -1073741656;
    }
    v2 = PsImpersonateClient(Thread, Object, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Object + 49));
    ObfDereferenceObject(v6);
    return v2;
  }
  return result;
}
