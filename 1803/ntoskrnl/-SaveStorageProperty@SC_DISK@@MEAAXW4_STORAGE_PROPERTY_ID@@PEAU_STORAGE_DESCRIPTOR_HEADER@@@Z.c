/*
 * XREFs of ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402C8500
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402C9FC0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_DISK::SaveStorageProperty(
        SC_DISK *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx

  switch ( a2 )
  {
    case StorageDeviceWriteCacheProperty:
      v5 = 216LL;
      break;
    case StorageAccessAlignmentProperty:
      v5 = 200LL;
      break;
    case StorageDeviceSeekPenaltyProperty:
      v5 = 248LL;
      break;
    case StorageDeviceTrimProperty:
      v5 = 264LL;
      break;
    case StorageDeviceLBProvisioningProperty:
      v5 = 256LL;
      break;
    case StorageDeviceResiliencyProperty:
      v5 = 240LL;
      break;
    case StorageAdapterSerialNumberProperty:
      v5 = 208LL;
      break;
    case StorageDeviceLocationProperty:
      v5 = 232LL;
      break;
    case StorageDeviceZonedDeviceProperty:
      v5 = 272LL;
      break;
    default:
      SC_DEVICE::SaveStorageProperty(this, a2, a3);
      return;
  }
  v6 = *(_QWORD *)((char *)this + v5);
  if ( v6 )
    PspQueueApcSpecialApc(v6);
  *(_QWORD *)((char *)this + v5) = a3;
}
