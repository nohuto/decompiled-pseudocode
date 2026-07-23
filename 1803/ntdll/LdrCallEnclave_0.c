/*
 * XREFs of LdrCallEnclave_0 @ 0x1800CA210
 * Callers:
 *     RtlEnclaveCallDispatch @ 0x18009E900 (RtlEnclaveCallDispatch.c)
 *     LdrCallEnclave @ 0x1800C9690 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18009E970 @ 0x18009E970 (sub_18009E970.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

NTSTATUS __cdecl LdrCallEnclave_0(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 *v6; // rax
  __int64 *v7; // r14
  NTSTATUS v8; // ebx

  v6 = sub_18001EE04((unsigned __int64)Routine, 0);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
    sub_1800C9DEC(v7);
    return sub_18009E970(Routine, 0LL, Flags, RoutineParamReturn);
  }
  else
  {
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(PVOID))Routine)(*RoutineParamReturn);
  }
  return v8;
}
