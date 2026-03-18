/*
 * XREFs of WRITE_PM1_ENABLE @ 0x1C0035064
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002B080 (ACPIInterruptServiceRoutineDPC.c)
 *     PciExpressWakeControl @ 0x1C00309F0 (PciExpressWakeControl.c)
 *     ACPIEnableInitializeACPI @ 0x1C00329A0 (ACPIEnableInitializeACPI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WRITE_PM1_ENABLE(__int16 a1)
{
  __int64 result; // rax
  __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
    (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(PmHalDispatchTable + 136))(0LL, 2LL, &v2);
  result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(PmHalDispatchTable + 136))(3LL, 2LL, &v2);
  return result;
}
