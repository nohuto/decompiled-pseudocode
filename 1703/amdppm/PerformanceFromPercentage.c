/*
 * XREFs of PerformanceFromPercentage @ 0x1C0006F7C
 * Callers:
 *     PerfSelectionCpc @ 0x1C0006710 (PerfSelectionCpc.c)
 *     PerfControlCpc @ 0x1C0006770 (PerfControlCpc.c)
 *     PerfControlCpcSingleRegister @ 0x1C0006850 (PerfControlCpcSingleRegister.c)
 *     PerfControlCpcHidden @ 0x1C0006A40 (PerfControlCpcHidden.c)
 *     PerfControlCpcSingleRegisterHidden @ 0x1C0006B60 (PerfControlCpcSingleRegisterHidden.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerformanceFromPercentage(__int64 a1, unsigned int a2)
{
  if ( a2 == *(_DWORD *)(a1 + 68) )
    return *(_QWORD *)(a1 + 8);
  if ( a2 == 100 )
    return *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 99) && a2 == *(_DWORD *)(a1 + 84) )
    return *(_QWORD *)(a1 + 56);
  if ( a2 == *(_DWORD *)(a1 + 76) )
    return *(_QWORD *)(a1 + 24);
  if ( a2 == *(_DWORD *)(a1 + 80) )
    return *(_QWORD *)(a1 + 32);
  return (unsigned __int64)a2 * *(_QWORD *)(a1 + 16) / 0x64;
}
