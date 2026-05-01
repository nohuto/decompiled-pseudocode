/*
 * XREFs of ?Thunk_Message_Connect_6@?$IEyeControlApp_Receive@VEyeControlApp@@@@SAJPEAXPEAPEAX@Z @ 0x1801DF220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IEyeControlApp_Receive<EyeControlApp>::Thunk_Message_Connect_6(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx

  v2 = *a2;
  *(_QWORD *)(a1 + 56) = v2;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 8) + 96LL))(*(_QWORD *)(a1 + 8), v2, a1 + 48);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 32LL))(*(_QWORD *)(a1 + 64));
  return 0LL;
}
