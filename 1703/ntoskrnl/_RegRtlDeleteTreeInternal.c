/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x1405AA1FC
 * Callers:
 *     _PnpSetPropertyWorker @ 0x1404DB1E0 (_PnpSetPropertyWorker.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     PiDevCfgFreeResolveContext @ 0x140593004 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405930D4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteTree @ 0x1405D4C78 (_PnpCtxRegDeleteTree.c)
 *     PiDqDeleteUserObject @ 0x1406985F8 (PiDqDeleteUserObject.c)
 *     PiDevCfgMigrateService @ 0x14069AB80 (PiDevCfgMigrateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14073A060 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14073A61C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14073C458 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14073D28C (_CmRemoveDeviceFromContainerWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140742778 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x14044A174 (_RegRtlQueryInfoKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404840A0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, __int64 a3, char a4)
{
  _WORD *PoolWithTag; // rsi
  signed int v7; // ebx
  int InfoKey; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  _WORD *v18; // rax
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+48h] [rbp-10h] BYREF

  Handle = 0LL;
  v23 = 0;
  PoolWithTag = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v7 = -1073741670;
    goto LABEL_3;
  }
  v7 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v7 < 0 )
    goto LABEL_3;
  InfoKey = RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL);
  v10 = 0;
  if ( InfoKey )
  {
    LODWORD(v12) = 0;
  }
  else
  {
    v11 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v16 = HighLimit + 1;
      v17 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v17 = HighLimit + 1;
      v11 = v17;
      v7 = v16 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( v16 < (unsigned int)HighLimit )
        goto LABEL_3;
      v10 = 0;
    }
    v12 = 2LL * v11;
    if ( v12 > 0xFFFFFFFF )
    {
      v7 = -1073741675;
      goto LABEL_3;
    }
    v7 = 0;
  }
  if ( !(_DWORD)v12
    || (v18 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x4C474552u), v10 = 0, (PoolWithTag = v18) != 0LL) )
  {
LABEL_13:
    LODWORD(LowLimit) = v10;
    while ( 1 )
    {
      LODWORD(HighLimit) = (unsigned int)v12 >> 1;
      v13 = RegRtlEnumKey(Handle, v10, PoolWithTag, &HighLimit);
      if ( v13 == -2147483622 || v13 == -1073741444 )
        goto LABEL_15;
      if ( v13 != -1073741789 )
      {
        if ( v13 )
          goto LABEL_15;
        LOBYTE(v14) = a4;
        PoolWithTag[((unsigned __int64)(unsigned int)v12 >> 1) - 1] = 0;
        v20 = RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3, v14);
        v10 = 0;
        if ( v20 )
          v10 = LowLimit + 1;
        goto LABEL_13;
      }
      v19 = 2LL * (unsigned int)HighLimit;
      HighLimit = v19;
      if ( v19 > 0xFFFFFFFF )
        break;
      LODWORD(v12) = v19;
      v7 = 0;
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        LODWORD(v19) = HighLimit;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v19, 0x4C474552u);
      if ( !PoolWithTag )
      {
        v7 = -1073741801;
LABEL_15:
        if ( v7 < 0 )
          goto LABEL_3;
        v15 = RegRtlDeleteKeyTransacted(a1, a2, a3);
        if ( v15 != -1073741535 )
        {
          if ( v15 >= 0 )
            goto LABEL_3;
          goto LABEL_18;
        }
        if ( (_DWORD)LowLimit || v23 >= 0xA )
        {
LABEL_18:
          v7 = v15;
          goto LABEL_3;
        }
        ++v23;
        v10 = 0;
        goto LABEL_13;
      }
      v10 = LowLimit;
    }
    v7 = -1073741675;
  }
  else
  {
    v7 = -1073741801;
  }
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v7;
}
