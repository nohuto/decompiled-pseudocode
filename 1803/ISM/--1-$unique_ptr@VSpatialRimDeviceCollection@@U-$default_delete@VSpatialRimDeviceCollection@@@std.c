/*
 * XREFs of ??1?$unique_ptr@VSpatialRimDeviceCollection@@U?$default_delete@VSpatialRimDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x18007193C
 * Callers:
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$12 @ 0x1800E730A (_RIMRawInputProvider--Initialize_--_1_--dtor$12.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<SpatialRimDeviceCollection>::~unique_ptr<SpatialRimDeviceCollection>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  return result;
}
