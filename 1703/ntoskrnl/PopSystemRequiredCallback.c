/*
 * XREFs of PopSystemRequiredCallback @ 0x1404C6100
 * Callers:
 *     <none>
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14004C420 (RtlLookupElementGenericTableAvl.c)
 *     PopSystemRequiredPowerRequest @ 0x140070204 (PopSystemRequiredPowerRequest.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopExecutionRequiredPowerRequest @ 0x1404C75C8 (PopExecutionRequiredPowerRequest.c)
 */

__int64 __fastcall PopSystemRequiredCallback(char a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *v6; // rax
  __int64 v7; // rcx
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-10h]

  PopSystemRequiredPowerRequest(a1, 1);
  LOBYTE(v4) = 1;
  PopAcquirePowerRequestPushLock(v4);
  if ( byte_14034BC94 )
  {
    if ( PopPowerRequestConvertSystemToExecution )
    {
      v9 = a2;
      v6 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
      if ( v6 )
      {
        v7 = *v6;
        if ( **(_DWORD **)(*v6 + 80) )
        {
          if ( !a1 )
          {
            --*(_DWORD *)(v7 + 108);
LABEL_10:
            LOBYTE(v7) = a1;
            PopExecutionRequiredPowerRequest(v7, a2);
            goto LABEL_2;
          }
          ++*(_DWORD *)(v7 + 108);
          if ( !PopPowerRequestSyncedPowerSource )
            goto LABEL_10;
        }
      }
    }
  }
LABEL_2:
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return 0LL;
}
