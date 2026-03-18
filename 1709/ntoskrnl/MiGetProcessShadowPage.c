/*
 * XREFs of MiGetProcessShadowPage @ 0x14017C108
 * Callers:
 *     MiSmallVaStillMapsFrame @ 0x1400C9FCC (MiSmallVaStillMapsFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessShadowPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 632) >> 12;
}
