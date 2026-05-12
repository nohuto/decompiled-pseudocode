/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C005F458
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000C8A0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C000F950 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C00300A8 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C0030258 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C00302B4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C005F620 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006091C (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0064474 (RaidGetStorageMiniportProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, IRP *a2)
{
  int StorageAdapterSerialNumberProperty; // edx
  _IRP *MasterIrp; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r9d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  unsigned int v15; // r8d
  int StorageAdapterPhysicalTopologyProperty; // eax
  size_t Length; // [rsp+38h] [rbp+18h] BYREF

  StorageAdapterSerialNumberProperty = -1073741811;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length >= 8 )
  {
    v5 = *(int *)&MasterIrp->Type;
    if ( (unsigned int)v5 <= 0x39 )
    {
      v6 = 0x22A000000030022LL;
      if ( _bittest64(&v6, v5) )
      {
        v7 = *(_DWORD *)(&MasterIrp->Size + 1);
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            StorageAdapterSerialNumberProperty = 0;
          }
          else
          {
            a2->IoStatus.Information = 0LL;
            StorageAdapterSerialNumberProperty = -1073741808;
          }
        }
        else
        {
          v8 = v5 - 1;
          if ( v8 )
          {
            v9 = v8 - 4;
            if ( v9 )
            {
              v10 = v9 - 11;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  v12 = v11 - 32;
                  if ( v12 )
                  {
                    v13 = v12 - 2;
                    if ( v13 )
                    {
                      v14 = v13 - 2;
                      if ( v14 )
                      {
                        if ( v14 == 4 )
                        {
                          StorageAdapterSerialNumberProperty = RaidGetStorageAdapterSerialNumberProperty(
                                                                 a1,
                                                                 MasterIrp,
                                                                 &Length);
                          a2->IoStatus.Information = Length;
                        }
                        goto LABEL_18;
                      }
                      StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterPhysicalTopologyProperty(
                                                                 (__int64)a1,
                                                                 a2,
                                                                 &Length);
                    }
                    else
                    {
                      StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterTemperatureProperty(
                                                                 (__int64)a1,
                                                                 a2,
                                                                 &Length);
                    }
                  }
                  else
                  {
                    StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProtocolSpecificProperty(
                                                               (__int64)a1,
                                                               a2,
                                                               &Length);
                  }
                }
                else
                {
                  StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterCryptoProperty(
                                                             (__int64)a1,
                                                             (__int64)a2,
                                                             &Length);
                }
              }
              else
              {
                StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterRpmbProperty(a1, (__int64)a2, &Length);
              }
            }
            else
            {
              StorageAdapterPhysicalTopologyProperty = RaidGetStorageMiniportProperty(a1, MasterIrp, &Length);
            }
          }
          else
          {
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProperty(a1, MasterIrp, &Length);
          }
          StorageAdapterSerialNumberProperty = StorageAdapterPhysicalTopologyProperty;
          a2->IoStatus.Information = Length;
        }
LABEL_18:
        v15 = StorageAdapterSerialNumberProperty;
        return RaidCompleteRequestEx(a2, 0, v15);
      }
    }
  }
  a2->IoStatus.Information = 0LL;
  v15 = -1073741808;
  return RaidCompleteRequestEx(a2, 0, v15);
}
