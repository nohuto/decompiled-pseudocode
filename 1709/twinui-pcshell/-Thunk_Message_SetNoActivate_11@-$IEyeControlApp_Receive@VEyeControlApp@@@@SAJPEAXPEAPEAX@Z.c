/*
 * XREFs of ?Thunk_Message_SetNoActivate_11@?$IEyeControlApp_Receive@VEyeControlApp@@@@SAJPEAXPEAPEAX@Z @ 0x1801DF2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IEyeControlApp_Receive<EyeControlApp>::Thunk_Message_SetNoActivate_11(__int64 a1, _BYTE **a2)
{
  _BYTE *v2; // rdx

  v2 = *a2;
  LOBYTE(v2) = *v2;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64), v2);
  return 0LL;
}
