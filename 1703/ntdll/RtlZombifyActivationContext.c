/*
 * XREFs of RtlZombifyActivationContext @ 0x1800E01F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlZombifyActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  NTSTATUS v1; // edi
  void (__fastcall *v3)(__int64, PACTIVATION_CONTEXT, PVOID, __int64, _QWORD, char *); // rax
  __int64 v4; // r9
  PVOID NotificationContext; // r8
  char v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !ActivationContext
    || (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return -1073741811;
  }
  if ( (ActivationContext->Flags & 1) == 0 )
  {
    v3 = *(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, __int64, _QWORD, char *))ActivationContext->SentNotifications;
    if ( v3 )
    {
      v4 = *(_QWORD *)&ActivationContext->SentNotifications[2];
      NotificationContext = ActivationContext->NotificationContext;
      v7 = 0;
      v3(2LL, ActivationContext, NotificationContext, v4, 0LL, &v7);
    }
    ActivationContext->Flags |= 1u;
  }
  return v1;
}
