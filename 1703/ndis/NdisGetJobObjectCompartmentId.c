/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C0067550
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C00675A0 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00E460C (NdisSetJobObjectCompartmentId.c)
 *     ndisNsiGetAllJobInformation @ 0x1C00E47B0 (ndisNsiGetAllJobInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C000CE40 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int *JobProperty; // rax
  unsigned int v3; // ebx
  unsigned int JobSessionId; // eax

  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1833133134LL);
  if ( JobProperty )
  {
    v3 = *JobProperty;
    ObfDereferenceObject(JobProperty);
  }
  else
  {
    JobSessionId = PsGetJobSessionId(a1);
    return (unsigned int)NdisGetSessionCompartmentId(JobSessionId);
  }
  return v3;
}
