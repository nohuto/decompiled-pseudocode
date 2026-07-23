/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1405D42D4
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400674A0 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  NTSTATUS v2; // ebx
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  if ( !PopNetBIServiceSid )
    return (unsigned int)-1073741823;
  v2 = RtlCheckTokenMembership(0LL, PopNetBIServiceSid, &IsMember);
  if ( v2 >= 0 )
  {
    if ( !IsMember )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock();
    if ( PopNetBIRequestActive )
    {
      if ( a1 )
      {
LABEL_6:
        v2 = -1073741811;
LABEL_7:
        PopReleasePolicyLock();
        return (unsigned int)v2;
      }
    }
    else if ( !a1 )
    {
      goto LABEL_6;
    }
    PopNetBIRequestActive = a1;
    goto LABEL_7;
  }
  return (unsigned int)v2;
}
