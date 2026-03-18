/*
 * XREFs of IoctlToNVMe @ 0x1C000D04C
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0002120 (NVMeHwBuildIo.c)
 * Callees:
 *     MdlToPrp @ 0x1C00070DC (MdlToPrp.c)
 *     SglToPrp @ 0x1C00073DC (SglToPrp.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B8AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000BA3C (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000BCD4 (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000C36C (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000C53C (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlFirmwareProcess @ 0x1C000C78C (IoctlFirmwareProcess.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C9A8 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C000CD78 (IoctlStorageStreamsReleaseId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000CE78 (IoctlStorageStreamsGetOpenStreams.c)
 *     CompareId @ 0x1C0012A9C (CompareId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned int ProtocolInfoIdentifyData; // eax
  int v7; // ebp
  const char *v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  switch ( *(_DWORD *)(v4 + 16) )
  {
    case 0x1B0780:
      ProtocolInfoIdentifyData = IoctlFirmwareProcess(a1, a2);
      goto LABEL_42;
    case 0x2D1400:
      v7 = v4 + 4;
      if ( (unsigned __int8)CompareId((unsigned int)"PROTOCOL", 8, (int)v4 + 4, 8, 0LL) )
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
        {
          v9 = *(_DWORD **)(a2 + 64);
          v10 = 60LL;
        }
        else
        {
          v9 = *(_DWORD **)(a2 + 24);
          v10 = 16LL;
        }
        v11 = *(unsigned int *)(a2 + v10);
        if ( (unsigned int)v11 < 0x4C
          || (v12 = (unsigned int)v9[13], v11 < v12 + 36 + (unsigned __int64)(unsigned int)v9[14]) )
        {
          *(_BYTE *)(a2 + 3) = 21;
LABEL_40:
          v5 = -1056964602;
          goto LABEL_43;
        }
        if ( (!(_DWORD)v12 || (((_BYTE)v12 + 36) & 7) == 0) && v9[9] == 3 )
        {
          v13 = v9[10];
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( !v14 )
            {
              ProtocolInfoIdentifyData = QueryProtocolInfoIdentifyData(a1, a2);
              goto LABEL_42;
            }
            v15 = v14 - 1;
            if ( !v15 )
            {
              ProtocolInfoIdentifyData = QueryProtocolInfoLogPageData(a1, a2);
              goto LABEL_42;
            }
            if ( v15 == 1 )
            {
              ProtocolInfoIdentifyData = QueryProtocolInfoFeatureData(a1, a2);
              goto LABEL_42;
            }
          }
        }
LABEL_39:
        *(_BYTE *)(a2 + 3) = 6;
        goto LABEL_40;
      }
      if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v7, 8, 0LL) )
      {
        ProtocolInfoIdentifyData = IoctlQueryTemperatureInfoProcess(a1, a2);
        goto LABEL_42;
      }
      v8 = "QUEUEINF";
LABEL_38:
      if ( (unsigned __int8)CompareId((_DWORD)v8, 8, v7, 8, 0LL) )
        goto LABEL_43;
      goto LABEL_39;
    case 0x2D2828:
      ProtocolInfoIdentifyData = IoctlStorageStreamsGetParameters(a1, a2);
      goto LABEL_42;
    case 0x2D282C:
      ProtocolInfoIdentifyData = IoctlStorageStreamsGetOpenStreams(a1, a2);
      goto LABEL_42;
    case 0x2D2830:
      ProtocolInfoIdentifyData = IoctlStorageStreamsReleaseId(a1, a2);
      goto LABEL_42;
    case 0x2D940C:
      v7 = v4 + 4;
      if ( (unsigned __int8)CompareId((unsigned int)"CREATEQU", 8, (int)v4 + 4, 8, 0LL) )
        goto LABEL_43;
      v8 = "DELETEQU";
      goto LABEL_38;
  }
  if ( *(_DWORD *)(v4 + 16) != 3002880 || !(unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)v4 + 4, 8, 0LL) )
    goto LABEL_39;
  ProtocolInfoIdentifyData = IoctlSetTemperatureThresholdProcess(a1, a2);
LABEL_42:
  v5 = ProtocolInfoIdentifyData;
LABEL_43:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
      v16 = MdlToPrp(a1, a2);
    else
      v16 = SglToPrp(a1, a2);
    v5 = v16;
    if ( v16 )
    {
      ++*(_DWORD *)(a1 + 3320);
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  return v5;
}
