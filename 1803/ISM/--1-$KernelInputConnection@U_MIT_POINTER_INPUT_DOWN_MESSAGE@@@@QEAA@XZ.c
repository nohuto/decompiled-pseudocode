/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ @ 0x18000F62C
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000F4F0 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 *     ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x180023810 (--_GInputDeliveryServer@@UEAAPEAXI@Z.c)
 *     ??_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z @ 0x180024200 (--_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18007B6E8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x180090304 (--1InputConfigContextProvider@@MEAA@XZ.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x1800E4381 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x1800E4470 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$21 @ 0x1800E7A1A (_DWMInputRouter--DWMInputRouter_--_1_--dtor$21.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$23 @ 0x1800E7A40 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$23.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
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
