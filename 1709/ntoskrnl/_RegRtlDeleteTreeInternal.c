/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x14057E5D0
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgFreeResolveContext @ 0x1405895E4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405896A4 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x1405A4610 (PipHardwareConfigActivateService.c)
 *     _PnpCtxRegDeleteTree @ 0x1405CB5A4 (_PnpCtxRegDeleteTree.c)
 *     PiDqDeleteUserObject @ 0x1406C4078 (PiDqDeleteUserObject.c)
 *     PiDevCfgMigrateService @ 0x1406C67A4 (PiDevCfgMigrateService.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14077E748 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14077ED08 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14077F360 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407819C0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140786114 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x140521DE8 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, __int64 a3, char a4)
{
  _WORD *PoolWithTag; // rdi
  signed int v7; // ebx
  int InfoKey; // eax
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  _WORD *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+48h] [rbp-10h] BYREF

  Handle = 0LL;
  v24 = 0;
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
  InfoKey = RegRtlQueryInfoKey((_DWORD)Handle, 0, (unsigned int)&HighLimit, 0, 0LL, 0LL);
  v10 = 0;
  if ( InfoKey )
  {
    v12 = 0;
  }
  else
  {
    v11 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v18 = HighLimit + 1;
      v19 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v19 = HighLimit + 1;
      v11 = v19;
      v7 = v18 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( v18 < (unsigned int)HighLimit )
        goto LABEL_3;
      v10 = 0;
    }
    v12 = -1;
    v13 = 2LL * v11;
    if ( v13 <= 0xFFFFFFFF )
      v12 = 2 * v11;
    v7 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_3;
  }
  if ( !v12 || (v20 = ExAllocatePoolWithTag(PagedPool, v12, 0x4C474552u), v10 = 0, (PoolWithTag = v20) != 0LL) )
  {
LABEL_14:
    while ( 2 )
    {
      LODWORD(LowLimit) = v10;
      while ( 1 )
      {
        LODWORD(HighLimit) = v12 >> 1;
        v14 = RegRtlEnumKey(Handle, v10, PoolWithTag, &HighLimit);
        if ( v14 == -2147483622 || v14 == -1073741444 )
          break;
        if ( v14 != -1073741789 )
        {
          if ( v14 )
            break;
          LOBYTE(v15) = a4;
          PoolWithTag[((unsigned __int64)v12 >> 1) - 1] = 0;
          v17 = RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3, v15);
          v10 = 0;
          if ( v17 )
            v10 = LowLimit + 1;
          goto LABEL_14;
        }
        v21 = 2LL * (unsigned int)HighLimit;
        v12 = -1;
        if ( v21 <= 0xFFFFFFFF )
          v12 = 2 * HighLimit;
        v7 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v21 > 0xFFFFFFFF )
          break;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x4C474552u);
        if ( !PoolWithTag )
        {
          v7 = -1073741801;
          break;
        }
        v10 = LowLimit;
      }
      if ( v7 >= 0 )
      {
        v16 = RegRtlDeleteKeyTransacted(a1, a2, a3);
        if ( v16 == -1073741535 )
        {
          if ( !(_DWORD)LowLimit && v24 < 0xA )
          {
            ++v24;
            v10 = 0;
            continue;
          }
        }
        else if ( v16 >= 0 )
        {
          break;
        }
        v7 = v16;
      }
      break;
    }
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
