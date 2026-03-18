/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x140604CCC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     PiDevCfgCopyDeviceKey @ 0x1405D81C8 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFreeResolveContext @ 0x1405DA940 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405DAA00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgInitResolveContext @ 0x1405DADC4 (PiDevCfgInitResolveContext.c)
 *     PipHardwareConfigActivateService @ 0x1405F2938 (PipHardwareConfigActivateService.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1406046D0 (PpDevCfgProcessDeviceOperations.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteTree @ 0x1406340C4 (_PnpCtxRegDeleteTree.c)
 *     PiDqDeleteUserObject @ 0x14072A78C (PiDqDeleteUserObject.c)
 *     PiDevCfgMigrateService @ 0x14072D250 (PiDevCfgMigrateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14072E24C (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14073174C (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1407E72C8 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1407E7910 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407E7FC8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407E9948 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407EA7E4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1407EC744 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1407ED474 (_CmRemovePanelDeviceWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1407F0EF8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     IoGetStackLimits @ 0x1401307B0 (IoGetStackLimits.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x140506280 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x1405E4B7C (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140604CCC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140653FF0 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, __int64 a3, char a4)
{
  unsigned int *PoolWithTag; // rdi
  signed int v7; // ebx
  int InfoKey; // eax
  ULONG v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  unsigned int *v17; // rax
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+48h] [rbp-10h] BYREF

  Handle = 0LL;
  v22 = 0;
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
    v12 = 0;
  }
  else
  {
    v11 = HighLimit;
    if ( (_DWORD)HighLimit )
    {
      v11 = -1;
      if ( (int)HighLimit + 1 >= (unsigned int)HighLimit )
        v11 = HighLimit + 1;
      v7 = (int)HighLimit + 1 < (unsigned int)HighLimit ? 0xC0000095 : 0;
      if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
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
  if ( !v12
    || (v17 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v12, 0x4C474552u), v10 = 0, (PoolWithTag = v17) != 0LL) )
  {
LABEL_14:
    while ( 2 )
    {
      LODWORD(LowLimit) = v10;
      while ( 1 )
      {
        LODWORD(HighLimit) = v12 >> 1;
        v14 = RegRtlEnumKey(Handle, v10, PoolWithTag, (unsigned int *)&HighLimit);
        if ( v14 == -2147483622 || v14 == -1073741444 )
          break;
        if ( v14 != -1073741789 )
        {
          if ( v14 )
            break;
          LOBYTE(v15) = a4;
          *((_WORD *)PoolWithTag + ((unsigned __int64)v12 >> 1) - 1) = 0;
          v19 = RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3, v15);
          v10 = 0;
          if ( v19 )
            v10 = LowLimit + 1;
          goto LABEL_14;
        }
        v18 = 2LL * (unsigned int)HighLimit;
        v12 = -1;
        if ( v18 <= 0xFFFFFFFF )
          v12 = 2 * HighLimit;
        v7 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v18 > 0xFFFFFFFF )
          break;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v12, 0x4C474552u);
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
          if ( !(_DWORD)LowLimit && v22 < 0xA )
          {
            ++v22;
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
