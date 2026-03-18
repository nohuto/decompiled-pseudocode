/*
 * XREFs of PopInitSIdle @ 0x1405B9968
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopSleepPowerSettingCallback @ 0x1405B8A60 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopDispatchFullWake @ 0x140706BC0 (PopDispatchFullWake.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopResetIdleTime @ 0x14012EC3C (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     PopIsDozeSupported @ 0x1404E86D8 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 */

BOOLEAN __fastcall PopInitSIdle(int a1)
{
  unsigned __int8 v2; // bl
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  BOOLEAN result; // al
  REGHANDLE v7; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // r9
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+60h] [rbp-A8h] BYREF
  int v18; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v19[92]; // [rsp+78h] [rbp-90h] BYREF
  int v20; // [rsp+D4h] [rbp-34h]
  _BYTE Source2[12]; // [rsp+DCh] [rbp-2Ch] BYREF
  int v22; // [rsp+E8h] [rbp-20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+20h] BYREF
  int *v24; // [rsp+138h] [rbp+30h]
  __int64 v25; // [rsp+140h] [rbp+38h]
  int *v26; // [rsp+148h] [rbp+40h]
  __int64 v27; // [rsp+150h] [rbp+48h]
  int *v28; // [rsp+158h] [rbp+50h]
  __int64 v29; // [rsp+160h] [rbp+58h]
  int *v30; // [rsp+168h] [rbp+60h]
  __int64 v31; // [rsp+170h] [rbp+68h]
  int *v32; // [rsp+178h] [rbp+70h]
  __int64 v33; // [rsp+180h] [rbp+78h]
  int *v34; // [rsp+188h] [rbp+80h]
  __int64 v35; // [rsp+190h] [rbp+88h]

  v20 = -1;
  *(_QWORD *)Source2 = 0x100000000LL;
  v2 = 1;
  v3 = 5;
  *(_DWORD *)&Source2[8] = *((_DWORD *)PopPolicy + 14);
  v22 = 2;
  if ( (PopFullWake & 3) != 0 || !dword_1403661C0 || (PopSimulate & 0x1000000) != 0 )
  {
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v19);
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      if ( v19[20] )
      {
        *(_DWORD *)Source2 = 2;
        v3 = 1;
        v10 = *((_DWORD *)PopPolicy + 15);
        v22 = 1;
        goto LABEL_35;
      }
      if ( v19[3] || v19[4] || v19[5] )
      {
        *(_DWORD *)Source2 = 2;
        v3 = 2;
        v10 = *((_DWORD *)PopPolicy + 15);
        v22 = 4;
        goto LABEL_35;
      }
    }
    else if ( !*((_DWORD *)PopPolicy + 22) )
    {
      goto LABEL_4;
    }
    if ( !PopIsDozeSupported((__int64)v19) || !*(_DWORD *)(v11 + 88) )
      goto LABEL_4;
    v3 = 3;
    *(_DWORD *)Source2 = 3;
    v10 = *(_DWORD *)(v11 + 88);
    v22 = 5;
LABEL_35:
    v20 = v10;
    goto LABEL_4;
  }
  v3 = 4;
  if ( (unsigned int)(qword_1403657E4 - 2) <= 1 )
  {
    v22 = HIDWORD(qword_1403657E4);
    *(_DWORD *)Source2 = qword_1403657E4;
  }
  else
  {
    *(_DWORD *)Source2 = 2;
    v22 = 4;
  }
  v20 = dword_1403661C0;
  *(_QWORD *)&Source2[4] = 1LL;
LABEL_4:
  if ( RtlCompareMemory(&qword_140365714, Source2, 0xCuLL) == 12
    && (v4 = dword_140365720, dword_140365720 == v22)
    && (v5 = dword_14036570C, dword_14036570C == v20) )
  {
    v2 = 0;
  }
  else
  {
    PopResetIdleTime(4);
    v4 = v22;
    v5 = v20;
    dword_14036571C = *(_DWORD *)&Source2[8];
    qword_140365714 = *(_QWORD *)Source2;
    byte_140365734 = 1;
    dword_140365720 = v22;
    dword_14036570C = v20;
    if ( dword_140353750 )
      v8 = dword_140365724 | 1;
    else
      v8 = dword_140365724 & 0xFFFFFFFE;
    dword_140365724 = v8;
    if ( !byte_140366314 )
    {
      if ( dword_140353770 )
        v9 = v8 | 2;
      else
        v9 = v8 & 0xFFFFFFFD;
      dword_140365724 = v9;
    }
  }
  v17 = HIDWORD(qword_140365714);
  result = qword_140365714;
  v14 = qword_140365714;
  v18 = a1;
  v16 = v5;
  v15 = v4;
  v13 = v3;
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_TIMEOUT_INITIALIZED);
    if ( result )
    {
      v12 = v2;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v12;
      v25 = 4LL;
      v24 = &v13;
      v27 = 4LL;
      v26 = &v14;
      v28 = &v15;
      v30 = &v16;
      v32 = &v17;
      v34 = &v18;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      return EtwWrite(v7, &POP_ETW_EVENT_SYSTEM_IDLE_TIMEOUT_INITIALIZED, 0LL, 7u, &UserData);
    }
  }
  return result;
}
