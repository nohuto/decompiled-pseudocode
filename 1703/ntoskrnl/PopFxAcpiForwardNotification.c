/*
 * XREFs of PopFxAcpiForwardNotification @ 0x140237EB8
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140237DA8 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  struct _IO_REMOVE_LOCK *v5; // rsi
  NTSTATUS v9; // edi
  char v10; // bl

  v5 = (struct _IO_REMOVE_LOCK *)(a1 + 248);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 248), (PVOID)0x72466F50, File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 80) + 112LL))(a2, a3);
    IoReleaseRemoveLockEx(v5, (PVOID)0x72466F50, 0x20u);
    *a5 = v10;
  }
  return (unsigned int)v9;
}
