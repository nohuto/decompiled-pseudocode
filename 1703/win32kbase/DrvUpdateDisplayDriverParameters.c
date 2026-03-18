/*
 * XREFs of DrvUpdateDisplayDriverParameters @ 0x1C005D670
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C005D518 (ApplyPathModalityToCdsRegistryStore.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C005D75C (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DrvUpdateDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW *a2,
        int a3,
        int a4)
{
  unsigned __int16 v6; // cx
  int v7; // ebp
  int v10; // r15d
  const unsigned __int16 *RegistryHandleFromDeviceMap; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // r14
  __int64 v15; // rcx
  unsigned int v16; // ebp
  _OWORD *v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rdx
  const unsigned __int16 *v20; // rax
  unsigned int v21; // edx
  unsigned __int16 *v22; // r12
  int v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+90h] [rbp+28h]

  v6 = gProtocolType;
  v7 = -1073741823;
  v26 = -1073741823;
  v10 = 2;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    *((_DWORD *)a1 + 69) = a3 == 0;
    if ( (*((_DWORD *)a1 + 40) & 8) != 0 && a2 )
    {
      v15 = *((_QWORD *)a1 + 36);
      v16 = a2->dmDriverExtra + a2->dmSize;
      if ( v15 )
      {
        Win32FreePool(v15);
        *((_QWORD *)a1 + 36) = 0LL;
      }
      v17 = PALLOCMEM2(v16, 1936876615LL, 0);
      *((_QWORD *)a1 + 36) = v17;
      if ( !v17 )
        return 3221225495LL;
      *v17 = *(_OWORD *)a2->dmDeviceName;
      v17[1] = *(_OWORD *)&a2->dmDeviceName[8];
      v17[2] = *(_OWORD *)&a2->dmDeviceName[16];
      v17[3] = *(_OWORD *)&a2->dmDeviceName[24];
      v17[4] = *(_OWORD *)&a2->dmSpecVersion;
      v17[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4);
      v17[6] = *(_OWORD *)&a2->dmYResolution;
      v17[7] = *(_OWORD *)&a2->dmFormName[5];
      v17[8] = *(_OWORD *)&a2->dmFormName[13];
      v17[9] = *(_OWORD *)&a2->dmFormName[21];
      v17[10] = *(_OWORD *)&a2->dmFormName[29];
      v17[11] = *(_OWORD *)&a2->dmPelsHeight;
      v17[12] = *(_OWORD *)&a2->dmICMIntent;
      *((_QWORD *)v17 + 26) = *(_QWORD *)&a2->dmReserved2;
      *((_DWORD *)v17 + 54) = a2->dmPanningHeight;
      memmove((void *)(*((_QWORD *)a1 + 36) + 220LL), &a2[1], a2->dmDriverExtra);
    }
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      RegistryHandleFromDeviceMap = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                                                (unsigned __int16 *)a1,
                                                                v10,
                                                                0LL,
                                                                0LL,
                                                                0,
                                                                0LL,
                                                                v6);
      v13 = (unsigned __int16 *)RegistryHandleFromDeviceMap;
      if ( RegistryHandleFromDeviceMap )
      {
        v26 = DrvWriteDisplayDriverParameters(a1, v12, RegistryHandleFromDeviceMap, a2, a3, v23);
        v7 = v26;
        ZwClose(v13);
      }
      if ( v7 >= 0 )
        break;
      if ( v10 != 2 )
        goto LABEL_6;
      v6 = gProtocolType;
      v10 = 0;
    }
    if ( a4 )
    {
      UpdateMonitorDevices();
      v18 = 0;
      if ( *((_DWORD *)a1 + 56) )
      {
        do
        {
          v19 = *((_QWORD *)a1 + 29);
          if ( (*(_BYTE *)(v19 + 20LL * v18) & 3) == 3 )
          {
            v20 = (const unsigned __int16 *)DrvGetRegistryHandleFromDeviceMap(
                                              (unsigned __int16 *)a1,
                                              v10,
                                              (unsigned int *)(v19 + 4 * (5LL * v18 + 1)),
                                              0LL,
                                              0,
                                              0LL,
                                              gProtocolType);
            v22 = (unsigned __int16 *)v20;
            if ( v20 )
            {
              DrvWriteDisplayDriverParameters(a1, v21, v20, a2, a3, v24);
              ZwClose(v22);
            }
          }
          ++v18;
        }
        while ( v18 < *((_DWORD *)a1 + 56) );
        v7 = v26;
      }
    }
LABEL_6:
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      return 0;
    return (unsigned int)v7;
  }
}
