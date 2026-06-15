/*
 * XREFs of ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180004A80
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18001DBFC (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 */

__int64 __fastcall LowPowerEpochNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebx

  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 )
  {
    v3 = a3[5] != 0;
    if ( v3 != g_bLowPowerEpoch )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      g_bLowPowerEpoch = v3;
      TsSessionOnLowPowerEpochStateChanged();
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    }
  }
  return 0LL;
}
