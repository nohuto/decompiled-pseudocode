/*
 * XREFs of PsIumGetOnDemandDebugChallenge @ 0x14071AB54
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     VslGetOnDemandDebugChallenge @ 0x1406B3C14 (VslGetOnDemandDebugChallenge.c)
 */

__int64 __fastcall PsIumGetOnDemandDebugChallenge(ULONG_PTR a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         4096,
         (__int64)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         2035381072,
         Object,
         0LL,
         0LL);
  if ( v7 >= 0 )
  {
    v7 = VslGetOnDemandDebugChallenge((__int64)Object[0], a2, a3, a4);
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
  }
  return (unsigned int)v7;
}
