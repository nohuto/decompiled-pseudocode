/*
 * XREFs of RtlULongSub @ 0x1400CE2DC
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x140223FF0 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1405CF254 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x1405F6FA0 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x140653784 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1407E4C9C (BiGetFilePathFromEfiPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
