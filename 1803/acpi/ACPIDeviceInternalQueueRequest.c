/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1C001AA78
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C001B754 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001F95C (ACPIPowerScheduleDpc.c)
 */

_QWORD *__fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    result = (_QWORD *)AcpiPowerSynchronizeList;
    if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) != &AcpiPowerSynchronizeList )
      __fastfail(3u);
    *a2 = AcpiPowerSynchronizeList;
    a2[1] = &AcpiPowerSynchronizeList;
    result[1] = a2;
    AcpiPowerSynchronizeList = (__int64)a2;
  }
  else
  {
    result = (_QWORD *)(a1 + 536);
    v5 = a2 + 2;
    if ( (_QWORD *)*result == result )
    {
      v6 = (_QWORD *)result[1];
      if ( (_QWORD *)*v6 != result )
        __fastfail(3u);
      *v5 = result;
      a2[3] = v6;
      *v6 = v5;
      result[1] = v5;
      if ( (v3 & 1) != 0 )
      {
        result = (_QWORD *)qword_1C00670B8;
        if ( *(__int64 **)qword_1C00670B8 != &AcpiPowerDelayedQueueList )
          __fastfail(3u);
        *a2 = &AcpiPowerDelayedQueueList;
        a2[1] = result;
        *result = a2;
        qword_1C00670B8 = (__int64)a2;
      }
      else
      {
        result = (_QWORD *)qword_1C00670C8;
        if ( *(__int64 **)qword_1C00670C8 != &AcpiPowerQueueList )
          __fastfail(3u);
        *a2 = &AcpiPowerQueueList;
        a2[1] = result;
        *result = a2;
        qword_1C00670C8 = (__int64)a2;
      }
    }
    else
    {
      v7 = (_QWORD *)result[1];
      if ( (_QWORD *)*v7 != result )
        __fastfail(3u);
      *v5 = result;
      v5[1] = v7;
      *v7 = v5;
      result[1] = v5;
    }
  }
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    return (_QWORD *)ACPIPowerScheduleDpc();
  return result;
}
