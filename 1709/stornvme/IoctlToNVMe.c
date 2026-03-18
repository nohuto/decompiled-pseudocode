/*
 * XREFs of IoctlToNVMe @ 0x1C000CC18
 * Callers:
 *     NVMeHwBuildIo @ 0x1C00021D0 (NVMeHwBuildIo.c)
 * Callees:
 *     MdlToPrp @ 0x1C0006E34 (MdlToPrp.c)
 *     SglToPrp @ 0x1C0007118 (SglToPrp.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B4A0 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B644 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B8DC (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000BF64 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000C134 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlFirmwareProcess @ 0x1C000C370 (IoctlFirmwareProcess.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C578 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C000C938 (IoctlStorageStreamsReleaseId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000CA48 (IoctlStorageStreamsGetOpenStreams.c)
 *     CompareId @ 0x1C001254C (CompareId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // esi
  _DWORD *v8; // rdx
  unsigned int *v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  int v12; // eax
  int v13; // eax
  int v14; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 64);
  else
    v5 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v5 + 16) != 1771392 )
  {
    switch ( *(_DWORD *)(v5 + 16) )
    {
      case 0x2D1400:
        v7 = v5 + 4;
        if ( (unsigned __int8)CompareId((unsigned int)"PROTOCOL", 8, (int)v5 + 4, 8, 0LL) )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
          {
            v8 = *(_DWORD **)(a2 + 64);
            v9 = (unsigned int *)(a2 + 60);
          }
          else
          {
            v8 = *(_DWORD **)(a2 + 24);
            v9 = (unsigned int *)(a2 + 16);
          }
          v10 = *v9;
          if ( (unsigned int)v10 < 0x4C
            || (v11 = (unsigned int)v8[13], a3 = v11 + 36, v10 < v11 + 36 + (unsigned __int64)(unsigned int)v8[14]) )
          {
            *(_BYTE *)(a2 + 3) = 21;
LABEL_35:
            result = 3238002694LL;
            goto LABEL_37;
          }
          if ( (!(_DWORD)v11 || (a3 & 7) == 0) && v8[9] == 3 )
          {
            v12 = v8[10];
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( !v13 )
              {
                result = QueryProtocolInfoIdentifyData(a1, a2);
                goto LABEL_37;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                result = QueryProtocolInfoLogPageData(a1, a2);
                goto LABEL_37;
              }
              if ( v14 == 1 )
              {
                result = QueryProtocolInfoFeatureData(a1, a2);
                goto LABEL_37;
              }
            }
          }
        }
        else if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v7, 8, 0LL) )
        {
          result = IoctlQueryTemperatureInfoProcess(a1, a2);
          goto LABEL_37;
        }
        break;
      case 0x2D2828:
        result = IoctlStorageStreamsGetParameters(a1, a2);
        goto LABEL_37;
      case 0x2D282C:
        result = IoctlStorageStreamsGetOpenStreams(a1, a2);
        goto LABEL_37;
      case 0x2D2830:
        result = IoctlStorageStreamsReleaseId(a1, a2);
        goto LABEL_37;
      default:
        if ( *(_DWORD *)(v5 + 16) == 3002880
          && (unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)v5 + 4, 8, 0LL) )
        {
          result = IoctlSetTemperatureThresholdProcess(a1, a2);
          goto LABEL_37;
        }
        break;
    }
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_35;
  }
  result = IoctlFirmwareProcess(a1, a2);
LABEL_37:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
      result = MdlToPrp(a1, a2);
    else
      result = SglToPrp(a1, a2, a3);
    if ( (_DWORD)result )
    {
      ++*(_DWORD *)(a1 + 3272);
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  return result;
}
