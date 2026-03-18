/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1C00096EC
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C00094B0 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0049408 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *result; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

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
    if ( (_QWORD *)*result == result )
    {
      v5 = *(_QWORD **)(a1 + 544);
      v6 = a2 + 2;
      if ( (_QWORD *)*v5 != result )
        __fastfail(3u);
      *v6 = result;
      a2[3] = v5;
      *v5 = v6;
      result[1] = v6;
      if ( (v3 & 1) != 0 )
      {
        result = (_QWORD *)qword_1C0076F98;
        if ( *(__int64 **)qword_1C0076F98 != &AcpiPowerDelayedQueueList )
          __fastfail(3u);
        *a2 = &AcpiPowerDelayedQueueList;
        a2[1] = result;
        *result = a2;
        qword_1C0076F98 = (__int64)a2;
      }
      else
      {
        result = (_QWORD *)qword_1C0076FA8;
        if ( *(__int64 **)qword_1C0076FA8 != &AcpiPowerQueueList )
          __fastfail(3u);
        *a2 = &AcpiPowerQueueList;
        a2[1] = result;
        *result = a2;
        qword_1C0076FA8 = (__int64)a2;
      }
    }
    else
    {
      v7 = *(_QWORD **)(a1 + 544);
      v8 = a2 + 2;
      if ( (_QWORD *)*v7 != result )
        __fastfail(3u);
      *v8 = result;
      v8[1] = v7;
      *v7 = v8;
      result[1] = v8;
    }
  }
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    return (_QWORD *)ACPIPowerScheduleDpc();
  return result;
}
