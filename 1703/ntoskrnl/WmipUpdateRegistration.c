/*
 * XREFs of WmipUpdateRegistration @ 0x14059FC1C
 * Callers:
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14006E848 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14015420C (WmipFindRegEntryByDevice.c)
 *     WmipQueueRegWork @ 0x14059FF10 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(void *a1)
{
  volatile signed __int32 *RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = (__int64)RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1LL, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
