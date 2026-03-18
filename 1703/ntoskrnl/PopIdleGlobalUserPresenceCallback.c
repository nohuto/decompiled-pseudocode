/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x140420820
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140004F20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
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
      qword_14034B1D8 = 0LL;
      dword_14034B0D0 = 0;
    }
    PopReleasePolicyLock();
  }
  return 0LL;
}
