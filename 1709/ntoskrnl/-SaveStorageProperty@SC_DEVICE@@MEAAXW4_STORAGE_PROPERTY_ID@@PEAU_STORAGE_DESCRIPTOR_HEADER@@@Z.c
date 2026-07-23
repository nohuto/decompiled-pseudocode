/*
 * XREFs of ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140294470
 * Callers:
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402929C0 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     ?ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ @ 0x140294308 (-ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_DEVICE::SaveStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( a2 )
  {
    switch ( a2 )
    {
      case StorageAdapterProperty:
        v6 = 88LL;
        break;
      case StorageDeviceIdProperty:
        v6 = 112LL;
        break;
      case StorageMiniportProperty:
        v6 = 120LL;
        break;
      case StorageAdapterCryptoProperty|StorageDeviceIdProperty:
        v6 = 104LL;
        break;
      default:
        goto LABEL_15;
    }
  }
  else
  {
    v6 = 96LL;
  }
  v7 = *(_QWORD *)((char *)this + v6);
  if ( v7 )
    PspQueueApcSpecialApc(v7);
  *(_QWORD *)((char *)this + v6) = a3;
  a3 = 0LL;
  if ( a2 == StorageDeviceProperty )
  {
    SC_DEVICE::ExtractDeviceStrings(this);
LABEL_15:
    if ( a3 )
      PspQueueApcSpecialApc(a3);
  }
}
