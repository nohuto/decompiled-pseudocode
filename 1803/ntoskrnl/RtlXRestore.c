/*
 * XREFs of RtlXRestore @ 0x1400B6118
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1400B5FF4 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1400C5810 (KeSaveExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x140132CB0 (KxContextToKframes.c)
 *     KiRestoreProcessorState @ 0x14024BD80 (KiRestoreProcessorState.c)
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     PspSetContext @ 0x140558D4C (PspSetContext.c)
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
