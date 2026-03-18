/*
 * XREFs of EtwpAcquireTokenAccessInformation @ 0x1407A565C
 * Callers:
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 */

__int64 __fastcall EtwpAcquireTokenAccessInformation(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  PVOID *v2; // rsi
  PACCESS_TOKEN v3; // rbx
  unsigned int InformationToken; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx

  v1 = (volatile signed __int64 *)(a1 + 704);
  v2 = (PVOID *)(a1 + 792);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
  v3 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  InformationToken = SeQueryInformationToken(v3, TokenAccessInformation, v2);
  ObfDereferenceObject(v3);
  v7 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = v7 & 6;
  if ( (_BYTE)v7 == 2 )
    ExfTryToWakePushLock(v1, v7, v5, v6);
  KeAbPostRelease((ULONG_PTR)v1);
  return InformationToken;
}
