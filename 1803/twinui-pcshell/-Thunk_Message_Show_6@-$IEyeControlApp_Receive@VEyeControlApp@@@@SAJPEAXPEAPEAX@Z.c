/*
 * XREFs of ?Thunk_Message_Show_6@?$IEyeControlApp_Receive@VEyeControlApp@@@@SAJPEAXPEAPEAX@Z @ 0x18030BE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IEyeControlApp_Receive<EyeControlApp>::Thunk_Message_Show_6(__int64 a1, _BYTE **a2)
{
  _BYTE *v2; // rdx

  v2 = *a2;
  LOBYTE(v2) = *v2;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), v2);
  return 0LL;
}
