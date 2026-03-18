/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1405038FC
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x140507AA8 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140508230 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiCMOpenObjectKey @ 0x14050C084 (PiCMOpenObjectKey.c)
 *     PiDqOpenObjectRegKey @ 0x14051C2CC (PiDqOpenObjectRegKey.c)
 *     PiSwPropertySet @ 0x1405C6324 (PiSwPropertySet.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x1405D2178 (_PnpSetObjectPropertyWorker.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405D7FF4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405DAF28 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14072CA60 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730D6C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14073174C (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407E9ED0 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x1407EB1D4 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1407EB4B4 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405090C4 (_PnpOpenObjectRegKeyDispatch.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        int a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, int, __int64 *); // rdi
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20[10]; // [rsp+48h] [rbp-29h] BYREF

  memset(v20, 0, sizeof(v20));
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 488);
  BYTE4(v20[2]) = a5;
  v20[3] = a6;
  HIDWORD(v20[4]) = a8;
  LODWORD(v20[2]) = a4;
  if ( v12 )
  {
    v13 = v12(a1, a2, a3, 2LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
      {
LABEL_12:
        v15 = v20[0];
        goto LABEL_5;
      }
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v20[2], SBYTE4(v20[2]), v20[3], (__int64)&v20[4], HIDWORD(v20[4]));
  v15 = v14;
  if ( v12 )
  {
    LODWORD(v20[0]) = v14;
    v17 = v12(a1, a2, a3, 2LL, 2, v20);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 != -1073741536 )
      {
        v19 = v15;
        if ( v18 )
          v19 = -1073741595;
        v15 = v19;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v15 >= 0 && a7 )
    *a7 = v20[4];
  return (unsigned int)v15;
}
