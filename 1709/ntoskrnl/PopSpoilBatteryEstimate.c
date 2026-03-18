/*
 * XREFs of PopSpoilBatteryEstimate @ 0x1405CB048
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x1405CB168 (PopUpdateConsoleDisplayState.c)
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x140701400 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopSpoilBatteryEstimate(int a1, unsigned __int8 a2)
{
  unsigned int v4; // eax
  const char *v5; // r9
  int v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
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
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v11 = 0;
      v14 = 0;
      v6 = a2;
      v9 = &v6;
      v12 = &v7;
      v7 = a1;
      v10 = 4;
      v13 = 4;
      TlgWrite(&pCallbackContext, &unk_1402D1503, 0LL, 0LL, 4u, &pData);
    }
  }
}
