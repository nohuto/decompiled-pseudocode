/*
 * XREFs of IoctlToNVMe @ 0x1C000C478
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0002130 (NVMeHwBuildIo.c)
 * Callees:
 *     MdlToPrp @ 0x1C0006A1C (MdlToPrp.c)
 *     SglToPrp @ 0x1C0006CDC (SglToPrp.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000AD60 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000AF04 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B188 (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000B7F4 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000B9C4 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlFirmwareProcess @ 0x1C000BC00 (IoctlFirmwareProcess.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000BE0C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C000C1C8 (IoctlStorageStreamsReleaseId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000C2BC (IoctlStorageStreamsGetOpenStreams.c)
 *     CompareId @ 0x1C0010AFC (CompareId.c)
 */

__int64 __fastcall IoctlToNVMe(_DWORD *a1, __int64 a2, __int64 a3)
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
                result = QueryProtocolInfoIdentifyData((__int64)a1, a2);
                goto LABEL_37;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                result = QueryProtocolInfoLogPageData((__int64)a1, a2);
                goto LABEL_37;
              }
              if ( v14 == 1 )
              {
                result = QueryProtocolInfoFeatureData((__int64)a1, a2);
                goto LABEL_37;
              }
            }
          }
        }
        else if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v7, 8, 0LL) )
        {
          result = IoctlQueryTemperatureInfoProcess((__int64)a1, a2);
          goto LABEL_37;
        }
        break;
      case 0x2D2828:
        result = IoctlStorageStreamsGetParameters((__int64)a1, a2);
        goto LABEL_37;
      case 0x2D282C:
        result = IoctlStorageStreamsGetOpenStreams((__int64)a1, a2);
        goto LABEL_37;
      case 0x2D2830:
        result = IoctlStorageStreamsReleaseId((__int64)a1, a2);
        goto LABEL_37;
      default:
        if ( *(_DWORD *)(v5 + 16) == 3002880
          && (unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)v5 + 4, 8, 0LL) )
        {
          result = IoctlSetTemperatureThresholdProcess((__int64)a1, a2);
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
    if ( (a1[13] & 8) != 0 )
      result = MdlToPrp((__int64)a1, a2);
    else
      result = SglToPrp((__int64)a1, a2, a3);
    if ( (_DWORD)result )
    {
      ++a1[818];
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  return result;
}
