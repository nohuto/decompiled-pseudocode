/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ @ 0x18000B234
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000B164 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800171CC (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1InputDeliveryServer@@EEAA@XZ @ 0x18007E3F4 (--1InputDeliveryServer@@EEAA@XZ.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$26 @ 0x1800CD320 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$26.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$28 @ 0x1800CD346 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$28.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$9 @ 0x1800D01F4 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$9.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$10 @ 0x1800D0207 (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$10.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$9 @ 0x1800D03DD (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$9.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$10 @ 0x1800D03F0 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = a1 + 8;
  v4 = (__int64 *)a1[15];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, a2);
    v3[7] = 0LL;
  }
  if ( a1[2] )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 144LL))(a1[1]);
  a1[2] = 0LL;
  v6 = a1[1];
  if ( v6 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
