/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C005E6CC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C00040B4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C002A158 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C002A22C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C002A3DC (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002A438 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C005E288 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0060F20 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00610E0 (RaidGetStorageMiniportProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, IRP *a2)
{
  int StorageAdapterSerialNumberProperty; // edx
  _IRP *MasterIrp; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r8d
  int v9; // r9d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int StorageAdapterPhysicalTopologyProperty; // eax
  unsigned __int64 Length; // [rsp+38h] [rbp+18h] BYREF

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
        v9 = *(_DWORD *)(&MasterIrp->Size + 1);
        if ( v9 )
        {
          if ( v9 == 1 )
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
          v10 = v5 - 1;
          if ( v10 )
          {
            v11 = v10 - 4;
            if ( v11 )
            {
              v12 = v11 - 11;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 32;
                  if ( v14 )
                  {
                    v15 = v14 - 2;
                    if ( v15 )
                    {
                      v16 = v15 - 2;
                      if ( v16 )
                      {
                        if ( v16 == 4 )
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
                                                                 (__int64)a2,
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
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProperty(
                                                       (__int64)a1,
                                                       (__int64)MasterIrp,
                                                       (__int64 *)&Length);
          }
          StorageAdapterSerialNumberProperty = StorageAdapterPhysicalTopologyProperty;
          a2->IoStatus.Information = Length;
        }
LABEL_18:
        v7 = StorageAdapterSerialNumberProperty;
        return RaidCompleteRequestEx(a2, 0, v7);
      }
    }
  }
  a2->IoStatus.Information = 0LL;
  v7 = -1073741808;
  return RaidCompleteRequestEx(a2, 0, v7);
}
