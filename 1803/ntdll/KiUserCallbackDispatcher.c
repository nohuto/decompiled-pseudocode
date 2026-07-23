/*
 * XREFs of KiUserCallbackDispatcher @ 0x18009E7E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x18009AB60 (ZwCallbackReturn.c)
 *     sub_18009E680 @ 0x18009E680 (sub_18009E680.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // [rsp+20h] [rbp+20h]

  v5 = sub_18009E680(v7, (unsigned int)a5, HIDWORD(a5), (__int64)NtCurrentPeb()->KernelCallbackTable);
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
