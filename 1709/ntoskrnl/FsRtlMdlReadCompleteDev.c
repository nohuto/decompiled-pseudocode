/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1400E5880
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x14053D7C4 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
