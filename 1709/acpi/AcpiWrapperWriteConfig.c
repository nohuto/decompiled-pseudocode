/*
 * XREFs of AcpiWrapperWriteConfig @ 0x1C000EF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiWrapperWriteConfig(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(PmHalDispatchTable + 56))(a1, a2);
}
