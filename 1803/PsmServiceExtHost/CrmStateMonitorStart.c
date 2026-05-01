/*
 * XREFs of CrmStateMonitorStart @ 0x180039514
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CrmStateMonitorRegistrationAdd @ 0x18003991C (CrmStateMonitorRegistrationAdd.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180039B1C (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSebStart @ 0x180039BB0 (CrmStateMonitorSebStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180039C50 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180039D28 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorConstrainedModeStart @ 0x180039DB4 (CrmStateMonitorConstrainedModeStart.c)
 *     CrmStateMonitorGameModeStart @ 0x180039E58 (CrmStateMonitorGameModeStart.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     CrmStateMonitorTestStart @ 0x18006A894 (CrmStateMonitorTestStart.c)
 */

__int64 __fastcall CrmStateMonitorStart(int *a1, __int64 a2, __int64 a3)
{
  GUID *v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebx
  unsigned __int16 v16; // ax
  int v17; // r9d
  int v19; // ecx
  unsigned int v20; // eax
  const void *v21; // r9
  int v22; // r9d
  unsigned __int16 v23; // r10
  int v24; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v25[3]; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v27; // [rsp+60h] [rbp-29h]
  int v28; // [rsp+68h] [rbp-21h]
  int v29; // [rsp+6Ch] [rbp-1Dh]
  int *v30; // [rsp+70h] [rbp-19h]
  int v31; // [rsp+78h] [rbp-11h]
  int v32; // [rsp+7Ch] [rbp-Dh]
  int *v33; // [rsp+80h] [rbp-9h]
  int v34; // [rsp+88h] [rbp-1h] BYREF
  int v35; // [rsp+8Ch] [rbp+3h]
  int *v36; // [rsp+90h] [rbp+7h]
  int v37; // [rsp+98h] [rbp+Fh] BYREF
  int v38; // [rsp+9Ch] [rbp+13h]
  _BYTE v39[16]; // [rsp+A0h] [rbp+17h] BYREF

  if ( *a1 <= 8 )
  {
    if ( *a1 == 8 )
    {
      v14 = CrmStateMonitorGameModeStart(a1, v39);
      goto LABEL_22;
    }
    if ( *a1 >= 0 )
    {
      if ( *a1 <= 1 )
      {
        v14 = CrmStateMonitorTestStart(a1);
        goto LABEL_22;
      }
      switch ( *a1 )
      {
        case 2:
          v6 = &GUID_GLOBAL_USER_PRESENCE;
          goto LABEL_21;
        case 3:
          v6 = &GUID_ACDC_POWER_SOURCE;
          goto LABEL_21;
        case 4:
          v6 = &GUID_BATTERY_PERCENTAGE_REMAINING;
          goto LABEL_21;
        case 5:
          v6 = &GUID_CONSOLE_DISPLAY_STATE;
          goto LABEL_21;
        case 6:
          v6 = &GUID_POWER_SAVING_STATUS;
LABEL_21:
          v14 = CrmStateMonitorPowerSettingsStart(a1, v6, a3, v39);
          goto LABEL_22;
        case 7:
          v6 = &GUID_LOW_POWER_EPOCH;
          goto LABEL_21;
      }
    }
LABEL_41:
    v15 = -1073741822;
    goto LABEL_25;
  }
  v7 = *a1 - 9;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v14 = CrmStateMonitorTimeSinceBootStart(a1, v39);
      goto LABEL_22;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v14 = CrmStateMonitorTimeSinceLogonStart(a1, v39);
      goto LABEL_22;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
          {
            v14 = CrmStateMonitorConstrainedModeStart(a1, v39);
            goto LABEL_22;
          }
          goto LABEL_41;
        }
        v13 = WNF_SEB_IP_ADDRESS_AVAILABLE;
      }
      else
      {
        v13 = WNF_SEB_FREE_NETWORK_PRESENT;
      }
    }
    else
    {
      v13 = WNF_SEB_INTERNET_PRESENT;
    }
    v14 = CrmStateMonitorSebStart(a1, v13, v39);
LABEL_22:
    v15 = v14;
    goto LABEL_23;
  }
  v19 = *a1;
  a1[14] = 0;
  *((_QWORD *)a1 + 5) = a1 + 14;
  v20 = CrmStateMonitorStateSizeGet(v19);
  memcpy_0(v39, v21, v20);
  v15 = 0;
LABEL_23:
  if ( v15 >= 0 )
  {
    CrmStateMonitorRegistrationAdd(a1, a2, a3);
    v15 = 0;
  }
LABEL_25:
  v16 = CrmStateMonitorStateSizeGet(*a1);
  if ( v17 <= 1 )
  {
    if ( (unsigned int)dword_180092130 > 5 )
    {
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v27 = v25;
      v30 = &v34;
      v33 = (int *)v39;
      v34 = v16;
      v36 = &v24;
      v25[0] = v17;
      v24 = v15;
      v28 = 4;
      v31 = 2;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083F80, 0LL, 0LL, 6u, &pData);
    }
  }
  else if ( (unsigned int)dword_180092130 > 5
         && TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL) )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v27 = &v24;
    v30 = v25;
    v33 = &v37;
    v36 = (int *)v39;
    v37 = v23;
    v24 = v22;
    v25[0] = v15;
    v28 = 4;
    v31 = 4;
    v34 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083EE1, 0LL, 0LL, 6u, &pData);
  }
  return (unsigned int)v15;
}
