/*
 * XREFs of AMLISetNSObjectNotifyFlag @ 0x1C0044448
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007ACA0 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLISetNSObjectNotifyFlag(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *(_WORD *)(*a1 + 64) |= 0x10u;
  return result;
}
