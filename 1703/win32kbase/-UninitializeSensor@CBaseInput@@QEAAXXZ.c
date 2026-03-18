/*
 * XREFs of ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x1C004FD00
 * Callers:
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012E25C (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C004FE90 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::UninitializeSensor(CBaseInput *this)
{
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 40LL))(this);
  CRIMBase::CleanupHandles(this);
  *((_QWORD *)this + 79) = 0LL;
}
