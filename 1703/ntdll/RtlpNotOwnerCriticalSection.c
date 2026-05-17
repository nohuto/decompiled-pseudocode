/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800E7490
 * Callers:
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

struct _TEB *__fastcall RtlpNotOwnerCriticalSection(const void **a1)
{
  struct _PEB_LDR_DATA *Ldr; // r8
  struct _TEB *result; // rax
  struct _TEB *v4; // rcx
  __int64 SpareUlong0; // rax

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = (struct _TEB *)&off_1801555A8, a1 == (const void **)&off_1801555A8)
    && (result = NtCurrentTeb(), Ldr->ShutdownThreadId != result->ClientId.UniqueThread) )
  {
    if ( !dword_18015B264 )
      goto LABEL_16;
    v4 = NtCurrentTeb();
    SpareUlong0 = (int)v4->SpareUlong0;
    if ( (_DWORD)SpareUlong0 )
    {
      if ( (int)SpareUlong0 >= 0 )
        v4 = (struct _TEB *)((char *)v4 + SpareUlong0);
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
      RtlDecodePointer(qword_18015B2C0);
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
