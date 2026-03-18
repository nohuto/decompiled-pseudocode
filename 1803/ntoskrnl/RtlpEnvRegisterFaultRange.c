/*
 * XREFs of RtlpEnvRegisterFaultRange @ 0x14029F208
 * Callers:
 *     RtlCSparseBitmapCleanup @ 0x14029D7B0 (RtlCSparseBitmapCleanup.c)
 *     RtlCSparseBitmapStart @ 0x14029DB28 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmManageFaultRange @ 0x140262270 (MmManageFaultRange.c)
 */

__int64 __fastcall RtlpEnvRegisterFaultRange(ULONG_PTR a1, ULONG_PTR a2, int a3, int a4, int a5)
{
  char v5; // r8

  if ( a3 == 1 )
    v5 = a4 == 0;
  else
    v5 = 33;
  return (unsigned int)MmManageFaultRange(a1, a2, v5, a5 == 0) == 0 ? 0xC000009A : 0;
}
