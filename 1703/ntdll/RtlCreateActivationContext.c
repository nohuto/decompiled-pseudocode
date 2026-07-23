/*
 * XREFs of RtlCreateActivationContext @ 0x180054430
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180054594 @ 0x180054594 (sub_180054594.c)
 *     sub_180054610 @ 0x180054610 (sub_180054610.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E0420 @ 0x1800E0420 (sub_1800E0420.c)
 */

NTSTATUS __cdecl RtlCreateActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT_DATA ActivationContextData,
        ULONG ExtraBytes,
        PACTIVATION_CONTEXT_NOTIFY_ROUTINE NotificationRoutine,
        PVOID NotificationContext,
        PACTIVATION_CONTEXT *ActivationContext)
{
  __int64 v6; // rdi
  void *v9; // r14
  NTSTATUS v10; // ebx
  _QWORD *Heap; // rax
  _ACTIVATION_CONTEXT *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v6 = ExtraBytes;
  v9 = 0LL;
  if ( ActivationContextData == (PACTIVATION_CONTEXT_DATA)"Actx " )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return -1073741811;
  }
  if ( ActivationContext )
    *ActivationContext = 0LL;
  if ( !Flags && ActivationContextData && ExtraBytes <= 0x10000 && ActivationContext )
  {
    v10 = sub_180054610();
    if ( v10 < 0 )
      return v10;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6 + 528);
    v9 = Heap;
    if ( !Heap )
      return -1073741801;
    v12 = (_ACTIVATION_CONTEXT *)(Heap + 1);
    *Heap = 1733124929LL;
    v13 = Heap + 15;
    v14 = 0LL;
    v15 = *(unsigned int *)((char *)&ActivationContextData->FormatVersion + ActivationContextData->AssemblyRosterOffset);
    v16 = Heap + 17;
    if ( (unsigned int)v15 <= 0x20 )
      v14 = v16;
    v10 = sub_180054594(v13, v15, v14);
    if ( v10 >= 0 )
    {
      *(_QWORD *)&v12->SentNotifications[2] = NotificationContext;
      *(_QWORD *)&v12->RefCount = 1LL;
      v12->NotificationContext = ActivationContextData;
      *(_QWORD *)v12->SentNotifications = NotificationRoutine;
      *(_QWORD *)&v12->SentNotifications[4] = 0LL;
      *(_QWORD *)&v12->SentNotifications[6] = 0LL;
      *(_QWORD *)v12->DisabledNotifications = 0LL;
      *(_QWORD *)&v12->DisabledNotifications[2] = 0LL;
      *(_QWORD *)&v12->DisabledNotifications[4] = 0LL;
      *(_QWORD *)&v12->DisabledNotifications[6] = 0LL;
      *(_QWORD *)&v12->StorageMap.Flags = 0LL;
      v12->StorageMap.AssemblyArray = 0LL;
      memset(&v12[1].NotificationContext, 0, 0x80uLL);
      LODWORD(v12[1].NotificationRoutine) = 0;
      if ( byte_18015C44D )
        sub_1800E0420(v12);
      *ActivationContext = v12;
      return 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v10;
}
