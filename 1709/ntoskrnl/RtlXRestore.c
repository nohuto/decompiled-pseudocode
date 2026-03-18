/*
 * XREFs of RtlXRestore @ 0x14000B3B0
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14000A790 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14000B274 (KeRestoreExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x140025510 (KxContextToKframes.c)
 *     KiRestoreProcessorState @ 0x14020DB78 (KiRestoreProcessorState.c)
 *     KiParkUmsThread @ 0x14020E3B0 (KiParkUmsThread.c)
 *     PspSetContext @ 0x140514BE0 (PspSetContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlXRestore(__int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 result; // rax

  if ( *(__int64 *)(a1 + 520) >= 0 && (a2 & 6) == 4 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = _mm_getcsr();
    result = a2;
    _xrstor((void *)a1, a2);
    *(_DWORD *)(a1 + 24) = v2;
  }
  else
  {
    result = a2;
    _xrstor((void *)a1, a2);
  }
  return result;
}
