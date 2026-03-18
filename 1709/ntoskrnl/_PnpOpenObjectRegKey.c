/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1405264F8
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140447A84 (PiDqOpenObjectRegKey.c)
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     _PnpGetObjectPropertyWorker @ 0x140523FE8 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14052447C (PiPnpRtlCacheObjectBaseKey.c)
 *     _PnpSetObjectPropertyWorker @ 0x14052FA38 (_PnpSetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenObjectKey @ 0x140574110 (PiCMOpenObjectKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiSwPropertySet @ 0x1405997C8 (PiSwPropertySet.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405A1FC8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405A47EC (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgInitDeviceCallback @ 0x1406C6210 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407810BC (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140782128 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x14078240C (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x140526414 (_PnpOpenObjectRegKeyDispatch.c)
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

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x48uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 312);
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
  v14 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v20[2], SBYTE4(v20[2]), v20[3], &v20[4], SWORD2(v20[4]));
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
