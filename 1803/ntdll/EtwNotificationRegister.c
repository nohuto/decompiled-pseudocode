/*
 * XREFs of EtwNotificationRegister @ 0x1800296B0
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x1800099D0 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 * Callees:
 *     sub_180008138 @ 0x180008138 (sub_180008138.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     sub_1800241D0 @ 0x1800241D0 (sub_1800241D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     sub_1800298DC @ 0x1800298DC (sub_1800298DC.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
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
    if ( !v7 && qword_18015A418 )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *RegHandle = 0LL;
    v8 = 0;
    v9 = (_RTL_SRWLOCK *)sub_1800298DC(Guid, Callback, Context, Type);
    v10 = (__int64)v9;
    if ( !v9 )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = v9 + 8;
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v8 = sub_180029538(v10, (__int64)Callback, Type)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      sub_180008138((PSLIST_ENTRY)v10);
    }
    else
    {
      sub_1800241D0((PRTL_BALANCED_NODE)v10);
      sub_1800299E8(v10);
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
