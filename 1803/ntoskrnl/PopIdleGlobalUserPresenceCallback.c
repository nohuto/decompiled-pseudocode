/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x140526B10
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140077584 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleGlobalUserPresenceCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  int v5; // ebx

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4;
  if ( !v4 && Value && ValueLength == 4 )
  {
    v5 = *Value;
    PopAcquirePolicyLock();
    if ( !v5 )
    {
      PopIdleCancelAoAcDozeS4Timer(2u);
      qword_1403AA0B8 = 0LL;
      qword_1403AA120 = 0LL;
      dword_1403A9FB0 = 0;
    }
    PopReleasePolicyLock();
  }
  return 0LL;
}
