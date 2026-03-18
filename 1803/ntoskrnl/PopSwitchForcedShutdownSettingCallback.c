/*
 * XREFs of PopSwitchForcedShutdownSettingCallback @ 0x140186810
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopSwitchForcedShutdownSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock(a1);
  v10 = *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data4 - a1[1];
  if ( !v10 && a3 == 4 && a2 )
  {
    byte_1403AAA64 = *a2 != 0;
    v6 = 0;
  }
  PopReleasePolicyLock(v8, v7, v9);
  return v6;
}
