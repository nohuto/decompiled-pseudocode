/*
 * XREFs of ?SetRxMute@TelephonyControllerCallInstance@@UEAAJH@Z @ 0x18011C9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::SetRxMute(TelephonyControllerCallInstance *this, int a2)
{
  __int64 v2; // rcx
  GUID v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_QWORD *)this + 5);
  v4 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
  v5 = 4;
  v6 = 2;
  return (*(__int64 (__fastcall **)(__int64, GUID *, __int64, int *, int, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &v4,
           24LL,
           &v8,
           4,
           &v7);
}
