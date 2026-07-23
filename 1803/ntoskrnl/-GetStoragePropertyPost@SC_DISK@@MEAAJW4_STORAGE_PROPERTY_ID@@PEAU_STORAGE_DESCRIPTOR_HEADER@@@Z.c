/*
 * XREFs of ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402C82B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SC_DISK::GetStoragePropertyPost(
        SC_DISK *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  unsigned int v3; // r9d
  DWORD Version; // ecx
  DWORD v5; // ecx
  DWORD Size; // eax

  v3 = 0;
  if ( a2 != StorageDeviceWriteCacheProperty )
  {
    if ( a2 == StorageAccessAlignmentProperty )
    {
      v5 = *((_DWORD *)this + 42);
      if ( a3[2].Version != v5 )
        return (unsigned int)-1073739509;
      Size = a3[2].Size;
      if ( Size < v5 || Size % v5 )
        return (unsigned int)-1073739509;
    }
    else if ( a2 == StorageDeviceLocationProperty )
    {
      Version = a3[4].Version;
      if ( Version < a3->Version || Version > a3->Size - 1 )
        a3[4].Version = 0;
    }
  }
  return v3;
}
