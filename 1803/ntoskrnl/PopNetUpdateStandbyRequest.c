/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x14076BBF8
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14009F580 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h]

  if ( PopNetBIServiceSid )
  {
    v2 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid);
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( !v4 )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock();
    if ( PopNetBIRequestActive )
    {
      if ( !a1 )
        goto LABEL_8;
    }
    else if ( a1 )
    {
LABEL_8:
      PopNetBIRequestActive = a1;
LABEL_9:
      PopReleasePolicyLock();
      return (unsigned int)v2;
    }
    v2 = -1073741811;
    goto LABEL_9;
  }
  return (unsigned int)-1073741823;
}
