/*
 * XREFs of PopPowerAggregatorWorker @ 0x14076AC00
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopDiagTracePowerAggregatorCompletionEvent @ 0x1407685F8 (PopDiagTracePowerAggregatorCompletionEvent.c)
 *     PopDiagTracePowerAggregatorSessionBegin @ 0x140768900 (PopDiagTracePowerAggregatorSessionBegin.c)
 *     PopDiagTracePowerAggregatorSessionEnd @ 0x140768A14 (PopDiagTracePowerAggregatorSessionEnd.c)
 *     PopPowerAggregatorSelectRequest @ 0x14076A9E8 (PopPowerAggregatorSelectRequest.c)
 *     PopPowerAggregatorValidateAction @ 0x14076AB7C (PopPowerAggregatorValidateAction.c)
 *     PopNetCheckOpportunisticDs @ 0x14076B81C (PopNetCheckOpportunisticDs.c)
 */

void PopPowerAggregatorWorker()
{
  int v0; // r8d
  __int64 v1; // rbx
  int v2; // ebx
  int v3; // [rsp+24h] [rbp-2Ch] BYREF
  int v4; // [rsp+28h] [rbp-28h] BYREF
  int v5; // [rsp+2Ch] [rbp-24h] BYREF
  int v6; // [rsp+30h] [rbp-20h]
  int v7; // [rsp+34h] [rbp-1Ch]
  _DWORD v8[4]; // [rsp+38h] [rbp-18h] BYREF

  v7 = 0;
  PopAcquirePolicyLock();
  v5 = (unsigned __int8)byte_1403AAA6D;
  v6 = dword_1403AAA7C;
  if ( dword_1403AAA78 == 0 || (LOBYTE(v7) = 0, (unsigned __int8)PopNetCheckOpportunisticDs()) )
    LOBYTE(v7) = 1;
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v4 = PopPowerAggregatorWork[0]++;
  if ( dword_1403A8630 )
  {
    PopPowerAggregatorSelectRequest(&v4, (__int64)v8);
    if ( v8[0] == 1 )
    {
      v0 = 1;
    }
    else if ( (unsigned int)(v8[0] - 2) > 1 )
    {
      v0 = 0;
    }
    else
    {
      v0 = 2;
      if ( (_BYTE)v7 )
      {
        v0 = 4;
        if ( !(_BYTE)v5 && v6 == 1 )
          v0 = 6;
      }
      if ( v8[0] == 2 )
        ++v0;
    }
    v3 = v0;
    if ( v0 != dword_1403A8624 )
    {
      PopDiagTracePowerAggregatorSessionBegin(v4, (__int64)v8, v0, &v5);
      if ( !(unsigned int)PopPowerAggregatorValidateAction(&v4, &v3) )
      {
        v1 = v3;
        if ( v3 )
        {
          dword_1403A8624 = v3;
          if ( qword_1403D1480 )
            qword_1403D1480(*((unsigned int *)&PopPowerAggregatorActionContexts + 6 * v3));
          v2 = (*((__int64 (__fastcall **)(int *, _QWORD))&PopPowerAggregatorActionContexts + 3 * v1 + 1))(
                 &v4,
                 (unsigned int)v1);
          PopDiagTracePowerAggregatorCompletionEvent(v4, v2);
          PopDiagTracePowerAggregatorSessionEnd(v4, v2);
        }
      }
    }
  }
  byte_1403A8628 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
