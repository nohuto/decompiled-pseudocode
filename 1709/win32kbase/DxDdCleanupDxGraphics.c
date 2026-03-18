/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C009A394
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C009A304 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C01903E8 )
    qword_1C01903E8(qword_1C01903D8);
  memset(&gDxgkInterface, 0, 0x890uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C01903E8 )
    qword_1C01903E8(qword_1C01903D8);
  memset(&gDxgkInterface, 0, 0x890uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
