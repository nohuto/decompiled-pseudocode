/*
 * XREFs of PopGetSettingNotificationName @ 0x1404C4DF4
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140217DF0 (MmIsSessionInCurrentServerSilo.c)
 *     PopCreateNotificationName @ 0x1404596A4 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x14045DFB0 (PsIsServiceSession.c)
 *     PopFindPowerSettingConfiguration @ 0x1404C2204 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1404C2300 (PopStateIsSessionSpecific.c)
 *     PopValidateContextMembership @ 0x140586050 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, __int64 *a2)
{
  char v4; // r12
  char v5; // r15
  int v6; // edi
  _QWORD *PowerSettingConfiguration; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  NTSTATUS NotificationName; // ebx
  __int64 v12; // rax
  unsigned int ProcessSessionId; // eax
  unsigned int v14; // r14d
  NTSTATUS v15; // eax
  __int64 v16; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  v5 = 1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 16);
  else
    v6 = -1;
  if ( a1 )
  {
    if ( PopStateIsSessionSpecific((_QWORD *)a1) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v14 = ProcessSessionId;
      if ( v6 == -1 || v6 == ProcessSessionId )
      {
        if ( ProcessSessionId == -1 || PsIsServiceSession(ProcessSessionId) )
        {
          NotificationName = -1073741811;
          goto LABEL_12;
        }
        v6 = v14;
      }
      else
      {
        NotificationName = PopValidateContextMembership(SeLocalSystemSid);
        if ( NotificationName < 0 )
        {
          if ( !PsIsServiceSession(v14) )
            goto LABEL_12;
          if ( !MmIsSessionInCurrentServerSilo(v6) )
            goto LABEL_12;
          NotificationName = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( NotificationName < 0 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = -1;
    }
    PowerSettingConfiguration = PopFindPowerSettingConfiguration((_QWORD *)a1, v6);
    v8 = PowerSettingConfiguration;
    if ( PowerSettingConfiguration )
    {
      if ( *((_DWORD *)PowerSettingConfiguration + 14) || *((_DWORD *)PowerSettingConfiguration + 15) )
      {
        v9 = PowerSettingConfiguration[7];
LABEL_10:
        v16 = v9;
LABEL_11:
        KeReleaseGuardedMutex(&PopSettingLock);
        v5 = 0;
        *a2 = v16;
        NotificationName = 0;
        goto LABEL_12;
      }
      NotificationName = PopCreateNotificationName((__int64)&v16);
      if ( NotificationName >= 0 )
      {
        v12 = *(_QWORD *)a1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
          v12 = *(_QWORD *)(a1 + 8) - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
        if ( !v12 )
          *((_DWORD *)v8 + 13) |= 8u;
        v8[7] = v16;
        *((_DWORD *)v8 + 13) |= 1u;
        v4 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      NotificationName = -1073741275;
    }
  }
  else
  {
    v9 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification, 0) )
      goto LABEL_10;
    v15 = PopCreateNotificationName((__int64)&v16);
    NotificationName = v15;
    if ( v15 >= 0 )
    {
      PopPopPowerSettingSetChangeNotification = v16;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v4 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)NotificationName;
}
