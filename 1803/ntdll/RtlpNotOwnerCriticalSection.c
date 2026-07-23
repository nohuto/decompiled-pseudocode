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

_RTL_CRITICAL_SECTION *__fastcall RtlpNotOwnerCriticalSection(_RTL_CRITICAL_SECTION *a1)
{
  PPEB_LDR_DATA Ldr; // r8
  _RTL_CRITICAL_SECTION *result; // rax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = &stru_1801565B0, a1 == &stru_1801565B0)
    && (result = (_RTL_CRITICAL_SECTION *)NtCurrentTeb(), Ldr->ShutdownThreadId != (HANDLE)result[1].SpinCount) )
  {
    if ( !dword_18015C290 )
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
    result = (_RTL_CRITICAL_SECTION *)LODWORD(v4->NtTib.Self);
    if ( !result->RecursionCount || !*(_BYTE *)((unsigned int)result->RecursionCount + 0x28LL) )
    {
LABEL_16:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          0x65u,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1->OwningThread);
        __debugbreak();
      }
      RtlDecodePointer(Ptr);
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
