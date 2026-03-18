/*
 * XREFs of KdpSysGetVersion @ 0x14079888C
 * Callers:
 *     KdSystemDebugControl @ 0x1406D6B20 (KdSystemDebugControl.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpSysGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8

  v1 = xmmword_140356760;
  *(_OWORD *)a1 = KdVersionBlock;
  v2 = qword_140356770;
  *(_OWORD *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 32) = v2;
}
