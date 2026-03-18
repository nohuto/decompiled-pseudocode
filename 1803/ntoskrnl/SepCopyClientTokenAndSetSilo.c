/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x14078C9C0
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     SepUpdateSiloInClientSecurity @ 0x140792184 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     SeCopyClientToken @ 0x14055EC24 (SeCopyClientToken.c)
 *     SepSetServerSiloToken @ 0x14078CCC0 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v7; // ebx
  ULONG ServerSiloServiceSessionId; // eax

  result = SeCopyClientToken(a1, a2, a3, 0, 0LL, a4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1 )
      v7 = SeSetSessionIdToken((PACCESS_TOKEN)*a4, ServerSiloServiceSessionId);
    if ( v7 < 0 || (v7 = SepSetServerSiloToken(*a4, a3), v7 < 0) )
    {
      ObfDereferenceObject((PVOID)*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v7;
  }
  return result;
}
