/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800E6AE0
 * Callers:
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

struct _TEB *__fastcall RtlpNotOwnerCriticalSection(const void **a1)
{
  _PEB_LDR_DATA *Ldr; // r8
  struct _TEB *result; // rax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = (struct _TEB *)&LdrpLoaderLock, a1 == (const void **)&LdrpLoaderLock)
    && (result = NtCurrentTeb(), Ldr->ShutdownThreadId != result->ClientId.UniqueThread) )
  {
    if ( !UseWOW64 )
      goto LABEL_16;
    v4 = NtCurrentTeb();
    WowTebOffset = v4->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
    }
    else
    {
      v4 = 0LL;
    }
    result = (struct _TEB *)LODWORD(v4->NtTib.Self);
    if ( !HIDWORD(result->NtTib.StackBase) || !*(_BYTE *)(HIDWORD(result->NtTib.StackBase) + 0x28LL) )
    {
LABEL_16:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          101,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1[2]);
        __debugbreak();
      }
      RtlDecodePointer(RtlpUnhandledExceptionFilter);
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
