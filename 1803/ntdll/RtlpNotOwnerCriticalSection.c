/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800E2150
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

struct _TEB *__fastcall RtlpNotOwnerCriticalSection(__int64 a1)
{
  struct _PEB_LDR_DATA *Ldr; // r8
  struct _TEB *result; // rax
  struct _TEB *v4; // rcx
  __int64 SpareUlong0; // rax

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = (struct _TEB *)&off_1801565B0, (_UNKNOWN **)a1 == &off_1801565B0)
    && (result = NtCurrentTeb(), Ldr->ShutdownThreadId != result->ClientId.UniqueThread) )
  {
    if ( !dword_18015C290 )
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
          (int)"NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          *(_QWORD *)(a1 + 16));
        __debugbreak();
      }
      RtlDecodePointer(qword_18015C2F0);
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
