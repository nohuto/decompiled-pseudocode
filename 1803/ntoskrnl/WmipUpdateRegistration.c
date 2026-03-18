/*
 * XREFs of WmipUpdateRegistration @ 0x140651638
 * Callers:
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x140161EC8 (WmipFindRegEntryByDevice.c)
 *     WmipQueueRegWork @ 0x140600AC4 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
