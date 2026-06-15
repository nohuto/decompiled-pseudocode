/*
 * XREFs of ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005FD08
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005EA18 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005ED60 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ValidateDescriptor@SpatialBlock@@QEAAJXZ @ 0x14005FDEC (-ValidateDescriptor@SpatialBlock@@QEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(SpatialBlock **this)
{
  unsigned int v2; // ebx
  void (__fastcall **v3)(char *, __int64, int *); // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = SpatialBlock::ValidateDescriptor(this[112]);
  if ( v2 == -2005139387 )
  {
    v3 = (void (__fastcall **)(char *, __int64, int *))this[92];
    v5 = 1;
    (*v3)((char *)this + 736, 1LL, &v5);
  }
  return v2;
}
