/*
 * XREFs of PopSpoilBatteryEstimate @ 0x140584E84
 * Callers:
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x14057A460 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x140584DDC (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     PopBatteryQueueWork @ 0x14014A7C0 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopSpoilBatteryEstimate(int a1, char a2)
{
  unsigned int v4; // eax
  const char *v5; // r9
  char v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  char *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  if ( a1 < 2 )
  {
    v4 = (unsigned __int8)(1 << a1);
    if ( a2 )
      _InterlockedOr(&PopEstimateSpoilerMask, v4);
    else
      _InterlockedAnd(&PopEstimateSpoilerMask, ~v4);
    PopBatteryQueueWork(4u);
    v5 = "indefinitely";
    if ( !a2 )
      v5 = "temporarily";
    DbgPrintEx(0x92u, 3u, "Battery estimates spoiled %s by %d; mask=%x\n", v5, a1, PopEstimateSpoilerMask);
    if ( hProvider.LevelPlus1 > 5 )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v6;
      v12 = &v7;
      v6 = a2;
      v7 = a1;
      v10 = 1;
      v13 = 4;
      TlgWrite(&hProvider, &unk_1402ACED0, 0LL, 0LL, 4u, &pData);
    }
  }
}
