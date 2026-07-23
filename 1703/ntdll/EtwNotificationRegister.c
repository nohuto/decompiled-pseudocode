/*
 * XREFs of EtwNotificationRegister @ 0x18001B3E0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x18001A200 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 * Callees:
 *     sub_18001B270 @ 0x18001B270 (sub_18001B270.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_18001B710 @ 0x18001B710 (sub_18001B710.c)
 *     sub_18001B91C @ 0x18001B91C (sub_18001B91C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18005FE1C @ 0x18005FE1C (sub_18005FE1C.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  _RTL_SRWLOCK *v9; // rax
  __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rsi

  if ( Guid && RegHandle )
  {
    v7 = *(_QWORD *)&Guid->Data1 - 0x4C8E042A3595AB5CLL;
    if ( *(_QWORD *)&Guid->Data1 == 0x4C8E042A3595AB5CLL )
      v7 = *(_QWORD *)Guid->Data4 + 0x4E4E0164FAD2BD47LL;
    if ( !v7 && qword_1801593B0 )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *RegHandle = 0LL;
    v8 = 0;
    v9 = (_RTL_SRWLOCK *)sub_18001B610(Guid, Callback, Context, Type);
    v10 = (__int64)v9;
    if ( !v9 )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = v9 + 8;
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v8 = sub_18001B270(v10, (__int64)Callback, Type)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      sub_18005FE1C((PSLIST_ENTRY)v10);
    }
    else
    {
      sub_18001B91C((PRTL_BALANCED_NODE)v10);
      sub_18001B710(v10);
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      *RegHandle = v10 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 96) << 48);
    }
  }
  else
  {
    v8 = 87;
  }
  if ( v8 )
LABEL_14:
    RtlSetLastWin32Error(v8);
  return v8;
}
