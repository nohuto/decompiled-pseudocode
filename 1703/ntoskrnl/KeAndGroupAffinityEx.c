/*
 * XREFs of KeAndGroupAffinityEx @ 0x140080B50
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     PnpSetDeviceAffinityThread @ 0x140080DB0 (PnpSetDeviceAffinityThread.c)
 *     PpmEventDomainPerfStateChange @ 0x14014B088 (PpmEventDomainPerfStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndGroupAffinityEx(unsigned __int16 *a1, __int64 a2, char *a3)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx
  char v7; // [rsp+0h] [rbp-28h] BYREF

  if ( a3 )
  {
    *(_DWORD *)(a3 + 10) = 0;
    *((_WORD *)a3 + 7) = 0;
    *((_WORD *)a3 + 4) = *(_WORD *)(a2 + 8);
  }
  else
  {
    a3 = &v7;
  }
  v4 = *(_WORD *)(a2 + 8);
  v5 = 0;
  if ( *a1 <= v4 )
    *(_QWORD *)a3 = 0LL;
  else
    *(_QWORD *)a3 = *(_QWORD *)a2 & *(_QWORD *)&a1[4 * v4 + 4];
  LOBYTE(v5) = *(_QWORD *)a3 != 0LL;
  return v5;
}
