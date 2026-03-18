/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x1C0104B68
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GetHidTelemetryData @ 0x1C0104D40 (GetHidTelemetryData.c)
 *     AccessPTPEnabledStatus @ 0x1C01051B0 (AccessPTPEnabledStatus.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C01053C0 (_GetPrecisionTouchPadThresholds.c)
 *     IsLegacyTouchPad @ 0x1C019BEDC (IsLegacyTouchPad.c)
 *     _TelemPTPConfigUpdateEx @ 0x1C019C138 (_TelemPTPConfigUpdateEx.c)
 *     ReadTiltCalibrationData @ 0x1C01A292C (ReadTiltCalibrationData.c)
 */

// write access to const memory has been detected, the output may be wrong!
void CheckPointerDeviceConfiguration()
{
  __int64 v0; // rsi
  struct DEVICEINFO *v1; // r14
  char v2; // r12
  char v3; // r13
  int v4; // edi
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DEVICEINFO *DeviceList; // rbx
  __int64 v9; // r8
  __int128 v10; // xmm6
  char v11; // r9
  __int128 v12; // xmm7
  char v13; // dl
  int v14; // eax
  __int64 v15[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+B0h] [rbp+30h] BYREF

  v0 = 0LL;
  v15[1] = 0LL;
  v1 = 0LL;
  v16[1] = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = 1;
  v5 = 0;
  v17 = 1;
  _GetPrecisionTouchPadConfiguration(0LL);
  GetPrecisionTouchPadThresholds();
  AccessPTPEnabledStatus(0LL, 1LL, &v17);
  gPTPEnabled = v17;
  CPTPProcessor::EnvironmentChanged();
  EnterDeviceInfoListCrit_(v6);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v17, gpRimDevBackedDeviceInfoListLock);
  v7 = gdwMitConfig;
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  v9 = 0LL;
  if ( DeviceList )
  {
    v10 = *(_OWORD *)v15;
    v11 = 3;
    v12 = *(_OWORD *)v16;
    while ( 1 )
    {
      v13 = *((_BYTE *)DeviceList + 48);
      if ( v13 == v11
        && ((v7 = 256LL, (*((_WORD *)DeviceList + 32) & 0x100) != 0) || (*((_DWORD *)DeviceList + 46) & 0x800) != 0)
        && gPTPEnabled == (_DWORD)v9 )
      {
        RIMRevokeConfigurationChange(DeviceList, 87LL);
      }
      else
      {
        if ( !__CFSHR__(*((_DWORD *)DeviceList + 50), 8) )
          goto LABEL_7;
        v7 = *((_QWORD *)DeviceList + 59);
        if ( *(_QWORD *)(v7 + 320) == v9 )
        {
          if ( __CFSHR__(*((_DWORD *)DeviceList + 50), 8) )
          {
            GetHidTelemetryData(DeviceList);
            v9 = 0LL;
            if ( !v0 && (v7 = *((_QWORD *)DeviceList + 59), *(_DWORD *)(v7 + 24) == 7) )
            {
              v14 = *(_DWORD *)(v7 + 1528);
              v11 = 3;
              switch ( v14 )
              {
                case 1:
                  v5 = 1;
                  break;
                case 2:
                  v5 = 2;
                  break;
                case 3:
                  v5 = 3;
                  break;
              }
              v10 = *(_OWORD *)(v7 + 172);
              v0 = (__int64)DeviceList;
              v12 = *(_OWORD *)(v7 + 204);
            }
            else
            {
              v11 = 3;
              v7 = (unsigned int)(*(_DWORD *)(*((_QWORD *)DeviceList + 59) + 24LL) - 1);
              if ( (unsigned int)v7 <= 3 )
                v3 = 1;
            }
            goto LABEL_8;
          }
LABEL_7:
          if ( !v13 )
          {
            if ( *((_WORD *)DeviceList + 366) == (_WORD)v9 )
            {
              v2 = 1;
            }
            else if ( (unsigned int)IsLegacyTouchPad(DeviceList) && !v1 )
            {
              v1 = DeviceList;
            }
          }
          goto LABEL_8;
        }
        *(_OWORD *)v16 = *((_OWORD *)DeviceList + 13);
        ReadTiltCalibrationData(v7, v16);
        GetHidTelemetryData(DeviceList);
      }
      v9 = 0LL;
      v11 = 3;
LABEL_8:
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
      if ( !DeviceList )
      {
        if ( v0 )
        {
          v4 = v9;
        }
        else
        {
          if ( !v1 )
            break;
          v0 = (__int64)v1;
        }
        *(_OWORD *)v16 = v12;
        *(_OWORD *)v15 = v10;
        TelemPTPConfigUpdateEx(v5, v4, v2, v3, (__int64)v15, (__int64)v16, v0);
        break;
      }
    }
  }
  LeaveDeviceInfoListCrit_(v7);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v17);
}
