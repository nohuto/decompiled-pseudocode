/*
 * XREFs of FsRtlOplockIsSharedRequest @ 0x1404433E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlOplockIsSharedRequest(PIRP Irp)
{
  ULONG LowPart; // edx

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 590400 )
    return (*(_BYTE *)(&Irp->AssociatedIrp.MasterIrp->Size + 1) & 4) == 0;
  else
    return LowPart == 589828;
}
