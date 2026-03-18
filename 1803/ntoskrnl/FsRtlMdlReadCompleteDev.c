/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1400C6700
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x140573E28 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
