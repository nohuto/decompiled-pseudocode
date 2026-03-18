/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x1405F1E60
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x14015B574 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock();
  v7 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    if ( *a2 )
    {
      byte_1403661B2 = 1;
    }
    else
    {
      byte_1403661B2 = 0;
      if ( byte_1403661B1 )
        PopSetSystemState(4, 7u);
    }
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}
