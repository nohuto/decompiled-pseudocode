/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x1800867B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x180044370 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE TokenHandle,
        PUNICODE_STRING CapabilityName,
        PBOOLEAN HasCapability)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( HasCapability )
  {
    if ( RtlIsMultiSessionSku() )
      *HasCapability = 0;
    else
      return (unsigned int)RtlCapabilityCheck(TokenHandle, CapabilityName, HasCapability);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
