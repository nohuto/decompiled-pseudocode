/*
 * XREFs of PopValidateRTCWake @ 0x14040A380
 * Callers:
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 * Callees:
 *     PopDiagTraceRtcWakeInfo @ 0x140138514 (PopDiagTraceRtcWakeInfo.c)
 *     PopCurrentPowerStatePrecise @ 0x140577B60 (PopCurrentPowerStatePrecise.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1406C963C (PopCalculateWakeTimeAdjustment.c)
 */

unsigned __int8 __fastcall PopValidateRTCWake(_BYTE *a1)
{
  char v1; // dl
  unsigned __int64 v2; // rbp
  char v3; // al
  int v4; // eax
  int v5; // r14d
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r12
  int v8; // ebx
  int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 v13; // rbp
  _BYTE v14[32]; // [rsp+40h] [rbp-38h] BYREF

  v1 = PopFixedWakeSourceMask;
  v2 = 0LL;
  v3 = PopFixedWakeSourceMask;
  *a1 = 0;
  v4 = v3 & 0x18;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( v4 == 16 )
  {
    v10 = 1;
    dword_14034B1E0 = 1;
  }
  else if ( v4 == 8 )
  {
    v10 = 0;
    v6 = 1;
    dword_14034B1E0 = 0;
  }
  else if ( v4 )
  {
    PopCurrentPowerStatePrecise(v14);
    v10 = dword_14034BB2C;
    v1 = PopFixedWakeSourceMask;
    dword_14034B1E0 = dword_14034BB2C;
  }
  else
  {
    v10 = dword_14034B1E0;
  }
  if ( (unsigned __int64)v10 >= 3 )
  {
    if ( (v1 & 4) == 0 )
      *a1 = 1;
    if ( qword_14034B208 && qword_14034B1F0[0] > (unsigned __int64)qword_14034B208 )
    {
      v10 = 1;
      dword_14034B1E0 = 1;
    }
    else
    {
      v10 = 0;
      *a1 = 0;
      dword_14034B1E0 = 0;
      v6 = 1;
    }
  }
  v11 = qword_14034B1F0[3 * v10];
  if ( v11 )
  {
    v13 = qword_14034B1C8;
    v2 = v13 - 10000 * (unsigned int)PopCalculateWakeTimeAdjustment();
    if ( v11 - 100000000 < v2 )
    {
      if ( v2 <= v11
        || v2 - v11 < (-(__int64)(PopPendingUserPresenceDuringSystemSleep != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000 )
      {
        v7 = 1;
      }
      else
      {
        *a1 = 0;
        v5 = 3;
        dword_14034B1E0 = 3;
      }
    }
    else
    {
      *a1 = 0;
      v5 = 2;
      dword_14034B1E0 = 3;
    }
    v8 = 0;
  }
  else
  {
    dword_14034B1E0 = 3;
    v5 = 1;
    *a1 = 0;
  }
  PopDiagTraceRtcWakeInfo(v6, v7, v5, (unsigned __int8)*a1, v8, v6, v2);
  return v7;
}
