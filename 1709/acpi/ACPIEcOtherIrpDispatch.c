/*
 * XREFs of ACPIEcOtherIrpDispatch @ 0x1C00A0DE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0004B10 (ACPIDispatchForwardIrp.c)
 *     ACPIEcInternalControl @ 0x1C00A0D58 (ACPIEcInternalControl.c)
 *     ACPIEcReadWrite @ 0x1C00A0E20 (ACPIEcReadWrite.c)
 */

__int64 __fastcall ACPIEcOtherIrpDispatch(ULONG_PTR a1, __int64 a2)
{
  unsigned __int8 v2; // r8

  v2 = **(_BYTE **)(a2 + 184);
  if ( v2 >= 3u )
  {
    if ( v2 <= 4u )
      return ACPIEcReadWrite();
    if ( v2 == 15 )
      return ACPIEcInternalControl(a1, (IRP *)a2);
  }
  return ACPIDispatchForwardIrp(a1, (PIRP)a2);
}
