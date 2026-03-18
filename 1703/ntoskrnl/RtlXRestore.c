/*
 * XREFs of RtlXRestore @ 0x140030CC0
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x140007450 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140030B9C (KeRestoreExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x140110820 (KxContextToKframes.c)
 *     KiRestoreProcessorState @ 0x1402071E8 (KiRestoreProcessorState.c)
 *     KiParkUmsThread @ 0x140207A00 (KiParkUmsThread.c)
 *     PspSetContext @ 0x140521660 (PspSetContext.c)
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
