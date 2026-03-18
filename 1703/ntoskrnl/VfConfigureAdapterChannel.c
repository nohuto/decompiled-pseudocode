/*
 * XREFs of VfConfigureAdapterChannel @ 0x140769740
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x14076C45C (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfConfigureAdapterChannel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, _QWORD, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, _QWORD, __int64))ViGetRealDmaOperation(a1, 168LL);
  return RealDmaOperation(a1, a2, a3);
}
