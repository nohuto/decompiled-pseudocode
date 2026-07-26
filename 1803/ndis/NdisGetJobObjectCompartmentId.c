/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C0014150
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C0014120 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00F1248 (NdisSetJobObjectCompartmentId.c)
 *     ndisNsiGetAllJobInformation @ 0x1C00F13F0 (ndisNsiGetAllJobInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0009160 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int *JobProperty; // rax
  unsigned int JobSessionId; // eax
  unsigned int v4; // ebx

  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1833133134LL);
  if ( JobProperty )
  {
    v4 = *JobProperty;
    ObfDereferenceObject(JobProperty);
  }
  else
  {
    JobSessionId = PsGetJobSessionId(a1);
    return (unsigned int)NdisGetSessionCompartmentId(JobSessionId);
  }
  return v4;
}
