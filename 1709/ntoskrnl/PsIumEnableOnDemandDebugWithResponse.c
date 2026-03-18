/*
 * XREFs of PsIumEnableOnDemandDebugWithResponse @ 0x14071AAC4
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x1406B3B50 (VslEnableOnDemandDebugWithResponse.c)
 */

__int64 __fastcall PsIumEnableOnDemandDebugWithResponse(ULONG_PTR a1, const void *a2, unsigned int a3)
{
  int v5; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = ObpReferenceObjectByHandleWithTag(
         a1,
         0x2000,
         (__int64)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         2035381072,
         &Object,
         0LL,
         0LL);
  if ( v5 >= 0 )
  {
    v5 = VslEnableOnDemandDebugWithResponse((__int64)Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v5;
}
