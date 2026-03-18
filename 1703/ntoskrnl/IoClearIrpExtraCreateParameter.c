/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x1401F38A0
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
