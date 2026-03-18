/*
 * XREFs of PopInitSIdle @ 0x140582D98
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopDispatchFullWake @ 0x14057A150 (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x1405C30A0 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 * Callees:
 *     PopResetIdleTime @ 0x14003A050 (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     PopIsDozeSupported @ 0x1404C592C (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x140582F4C (PopTraceSystemIdleTimeoutInitialization.c)
 */

__int64 __fastcall PopInitSIdle(char a1)
{
  char v1; // bl
  int v3; // edi
  int v4; // r9d
  int v5; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  char v11; // [rsp+28h] [rbp-89h]
  _BYTE v12[92]; // [rsp+48h] [rbp-69h] BYREF
  int v13; // [rsp+A4h] [rbp-Dh]
  __int64 Source2; // [rsp+ACh] [rbp-5h] BYREF
  int v15; // [rsp+B4h] [rbp+3h]
  int v16; // [rsp+B8h] [rbp+7h]

  v1 = 1;
  Source2 = 0x100000000LL;
  v13 = -1;
  v3 = 5;
  v15 = *((_DWORD *)PopPolicy + 14);
  v16 = 2;
  if ( (PopFullWake & 3) != 0 || !dword_14034BB40 || (PopSimulate & 0x1000000) != 0 )
  {
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v12);
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      if ( v12[20] )
      {
        LODWORD(Source2) = 2;
        v3 = 1;
        v9 = *((_DWORD *)PopPolicy + 15);
        v16 = 1;
        goto LABEL_34;
      }
      if ( v12[3] || v12[4] || v12[5] )
      {
        LODWORD(Source2) = 2;
        v3 = 2;
        v9 = *((_DWORD *)PopPolicy + 15);
        v16 = 4;
        goto LABEL_34;
      }
    }
    else if ( !*((_DWORD *)PopPolicy + 22) )
    {
      goto LABEL_4;
    }
    if ( !PopIsDozeSupported((__int64)v12) || !*(_DWORD *)(v10 + 88) )
      goto LABEL_4;
    v3 = 3;
    LODWORD(Source2) = 3;
    v9 = *(_DWORD *)(v10 + 88);
    v16 = 5;
LABEL_34:
    v13 = v9;
    goto LABEL_4;
  }
  v3 = 4;
  if ( (unsigned int)(qword_14034B184 - 2) <= 1 )
  {
    v16 = HIDWORD(qword_14034B184);
    LODWORD(Source2) = qword_14034B184;
  }
  else
  {
    LODWORD(Source2) = 2;
    v16 = 4;
  }
  v15 = 0;
  v13 = dword_14034BB40;
  HIDWORD(Source2) = 1;
LABEL_4:
  if ( RtlCompareMemory(&qword_14034B0B4, &Source2, 0xCuLL) == 12
    && (v4 = dword_14034B0C0, dword_14034B0C0 == v16)
    && (v5 = dword_14034B0AC, dword_14034B0AC == v13) )
  {
    v1 = 0;
  }
  else
  {
    PopResetIdleTime(4);
    v4 = v16;
    v5 = v13;
    dword_14034B0BC = v15;
    qword_14034B0B4 = Source2;
    byte_14034B0D4 = 1;
    dword_14034B0C0 = v16;
    dword_14034B0AC = v13;
    if ( dword_14033B6D0 )
      v7 = dword_14034B0C4 | 1;
    else
      v7 = dword_14034B0C4 & 0xFFFFFFFE;
    dword_14034B0C4 = v7;
    if ( !byte_14034BC94 )
    {
      if ( dword_14033B6F0 )
        v8 = v7 | 2;
      else
        v8 = v7 & 0xFFFFFFFD;
      dword_14034B0C4 = v8;
    }
  }
  v11 = v5;
  LOBYTE(v5) = v1;
  return PopTraceSystemIdleTimeoutInitialization(v5, v3, qword_14034B0B4, v4, v11, SBYTE4(qword_14034B0B4), a1);
}
