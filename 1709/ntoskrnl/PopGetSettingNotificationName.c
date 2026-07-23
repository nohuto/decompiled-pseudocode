/*
 * XREFs of PopGetSettingNotificationName @ 0x1404EAE58
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x1400B0BE4 (PopSetNotificationWork.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmIsSessionInCurrentServerSilo @ 0x140221E00 (MmIsSessionInCurrentServerSilo.c)
 *     PopFindPowerSettingConfiguration @ 0x1404DFEBC (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x1404DFFB8 (PopStateIsSessionSpecific.c)
 *     PopCreateNotificationName @ 0x1405994C8 (PopCreateNotificationName.c)
 *     PsIsServiceSession @ 0x1405EC7EC (PsIsServiceSession.c)
 *     PopValidateContextMembership @ 0x1405F0DD4 (PopValidateContextMembership.c)
 */

__int64 __fastcall PopGetSettingNotificationName(__int64 a1, _WNF_STATE_NAME *a2)
{
  char v4; // r12
  char v5; // r15
  int v6; // edi
  _WNF_STATE_NAME *PowerSettingConfiguration; // rax
  _WNF_STATE_NAME *v8; // rdi
  _WNF_STATE_NAME v9; // rax
  int v10; // ebx
  __int64 v12; // rax
  unsigned int ProcessSessionId; // eax
  unsigned int v14; // r14d
  int v15; // eax
  _WNF_STATE_NAME StateName; // [rsp+28h] [rbp-40h] BYREF

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
        if ( ProcessSessionId == -1 || (unsigned __int8)PsIsServiceSession(ProcessSessionId) )
        {
          v10 = -1073741811;
          goto LABEL_12;
        }
        v6 = v14;
      }
      else
      {
        v10 = PopValidateContextMembership(SeLocalSystemSid);
        if ( v10 < 0 )
        {
          if ( !(unsigned __int8)PsIsServiceSession(v14) )
            goto LABEL_12;
          if ( !MmIsSessionInCurrentServerSilo(v6) )
            goto LABEL_12;
          v10 = PopValidateContextMembership(SeExports->SeLocalServiceSid);
          if ( v10 < 0 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      v6 = -1;
    }
    PowerSettingConfiguration = (_WNF_STATE_NAME *)PopFindPowerSettingConfiguration((_QWORD *)a1, v6);
    v8 = PowerSettingConfiguration;
    if ( PowerSettingConfiguration )
    {
      if ( PowerSettingConfiguration[7].Data[0] || PowerSettingConfiguration[7].Data[1] )
      {
        v9 = PowerSettingConfiguration[7];
LABEL_10:
        StateName = v9;
LABEL_11:
        KeReleaseGuardedMutex(&PopSettingLock);
        v5 = 0;
        *a2 = StateName;
        v10 = 0;
        goto LABEL_12;
      }
      v10 = PopCreateNotificationName(&StateName);
      if ( v10 >= 0 )
      {
        v12 = *(_QWORD *)a1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
          v12 = *(_QWORD *)(a1 + 8) - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
        if ( !v12 )
          v8[6].Data[1] |= 8u;
        v8[7] = StateName;
        v8[6].Data[1] |= 1u;
        v4 = 1;
        goto LABEL_11;
      }
    }
    else
    {
      v10 = -1073741275;
    }
  }
  else
  {
    v9 = PopPopPowerSettingSetChangeNotification;
    if ( PopPopPowerSettingSetChangeNotification != __PAIR64__(PopPopPowerSettingSetChangeNotification.Data[0], 0) )
      goto LABEL_10;
    v15 = PopCreateNotificationName(&StateName);
    v10 = v15;
    if ( v15 >= 0 )
    {
      PopPopPowerSettingSetChangeNotification = StateName;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( v5 )
    KeReleaseGuardedMutex(&PopSettingLock);
  if ( v4 )
    PopSetNotificationWork(0x80u);
  return (unsigned int)v10;
}
