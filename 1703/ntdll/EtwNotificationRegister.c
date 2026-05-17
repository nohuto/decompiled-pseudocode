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

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi

  if ( a1 && a5 )
  {
    v7 = *a1 - 0x4C8E042A3595AB5CLL;
    if ( *a1 == 0x4C8E042A3595AB5CLL )
      v7 = a1[1] + 0x4E4E0164FAD2BD47LL;
    if ( !v7 && qword_1801593B0 )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *a5 = 0LL;
    v8 = 0;
    v9 = sub_18001B610(a1, a3, a4, a2);
    v10 = v9;
    if ( !v9 )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = v9 + 64;
    RtlAcquireSRWLockExclusive(v9 + 64);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( a2 != 10 && (v8 = sub_18001B270(v10, a3, a2)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      sub_18005FE1C((PSLIST_ENTRY)v10);
    }
    else
    {
      sub_18001B91C(v10);
      sub_18001B710(v10);
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      *a5 = v10 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 96) << 48);
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
