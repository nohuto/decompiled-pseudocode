/*
 * XREFs of PopFxAcpiForwardNotification @ 0x140282D00
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140282BF4 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxAcpiForwardNotification(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  struct _IO_REMOVE_LOCK *v5; // rsi
  NTSTATUS v9; // edi
  char v10; // bl

  v5 = (struct _IO_REMOVE_LOCK *)(a1 + 248);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 248), (PVOID)0x72466F50, &File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 80) + 112LL))(a2, a3);
    IoReleaseRemoveLockEx(v5, (PVOID)0x72466F50, 0x20u);
    *a5 = v10;
  }
  return (unsigned int)v9;
}
