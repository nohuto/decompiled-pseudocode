/*
 * XREFs of UserPowerStateCallout @ 0x1C0076F74
 * Callers:
 *     W32CalloutDispatch @ 0x1C0048FA0 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C00771C0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077F64 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  char v3; // bp
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0;
  v3 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3);
  if ( !v1 )
    return UserSessionSwitchBlock_Start();
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( gbPendingMonitorOn )
    {
      gbPendingMonitorOn = 0;
      v10[1] = gPendingMonitorOnReason;
      v10[0] = 4LL;
      gPendingMonitorOnReason = 0;
      QueuePowerRequest(v10, 0LL);
    }
    return 0LL;
  }
  else
  {
    if ( gbPowerCalloutsReady && gbVideoInitialized && gWinLogonRpcHandle )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( v1 != 1 )
      {
        if ( (gPowerState & 1) != 0 )
        {
          if ( !v3 )
          {
            if ( v1 != 8 )
            {
              if ( v1 == 2 )
                dword_1C0190F1C = *((_DWORD *)a1 + 5);
LABEL_12:
              Arg0 = v1;
              ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
              LOBYTE(v8) = 1;
              return QueuePowerRequest(0LL, v8);
            }
            gPowerState &= ~1u;
            Event = 0LL;
          }
        }
        else
        {
          v2 = -1073741823;
        }
        goto LABEL_24;
      }
      if ( v3 )
      {
        if ( (gPowerState & 1) != 0 )
        {
LABEL_15:
          gPowerState |= 1u;
          gPowerState = v7 & 4 | gPowerState & 0xFFFFFFFB;
          gPowerState = gPowerState & 0xFFFFFFFD | (v7 >> 30) & 2;
          gPowerState = (8 * (v7 & 1)) | gPowerState & 0xFFFFFFF7;
          dword_1C0190F08 = v5;
          gPowerState = (8 * (v7 & 2)) | gPowerState & 0xFFFFFFEF;
          dword_1C0190F0C = v6;
          dword_1C0190F10 = v7;
          if ( (gPowerState & 4) != 0 )
            dword_1C0190EE4 = 40;
          if ( (gPowerState & 2) != 0 )
            dword_1C0190EE4 = 9;
          if ( Event )
            KeSetEvent(Event, 1, 0);
          if ( !v3 )
            goto LABEL_12;
          goto LABEL_24;
        }
      }
      else if ( (gPowerState & 1) == 0 )
      {
        goto LABEL_15;
      }
      v2 = -1073741811;
LABEL_24:
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      return v2;
    }
    return 3221225473LL;
  }
}
