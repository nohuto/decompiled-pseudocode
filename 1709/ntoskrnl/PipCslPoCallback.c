/*
 * XREFs of PipCslPoCallback @ 0x1406D4470
 * Callers:
 *     <none>
 * Callees:
 *     PipCslUpdateState @ 0x1406D4554 (PipCslUpdateState.c)
 */

__int64 __fastcall PipCslPoCallback(LPCGUID SettingGuid, _DWORD *Value, __int64 ValueLength, PVOID Context)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_CONSOLE_LOCKED.Data4;
  if ( v4 || (_DWORD)ValueLength != 4 )
    __fastfail(5u);
  v5 = 1LL;
  if ( *Value )
    v5 = 2LL;
  PipCslUpdateState(v5, Value, ValueLength, Context);
  return 0LL;
}
