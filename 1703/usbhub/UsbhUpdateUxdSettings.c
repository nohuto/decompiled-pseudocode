/*
 * XREFs of UsbhUpdateUxdSettings @ 0x1C0022298
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C001C3D0 (UsbhGetGlobalUxdSettings.c)
 *     UsbhBuildDeviceID @ 0x1C001CFA0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C001D200 (UsbhBuildHardwareID.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 *     UsbhReleasePdoUxdLock @ 0x1C00223CC (UsbhReleasePdoUxdLock.c)
 *     UsbhAcquirePdoUxdLock @ 0x1C0022400 (UsbhAcquirePdoUxdLock.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D47C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C00532D0 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhGetUxdDeviceKey @ 0x1C00586E0 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0058910 (UsbhGetUxdPortKey.c)
 *     UsbhUpdateSqmFlags @ 0x1C0072008 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhUpdateUxdSettings(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, _BYTE *a4)
{
  _DWORD *v8; // rdi
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  __int64 v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  int v17; // esi
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  int v22; // r8d
  __int128 v23; // [rsp+40h] [rbp-99h] BYREF
  _OWORD Source1[5]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD Source2[5]; // [rsp+A0h] [rbp-39h] BYREF

  v8 = PdoExt((__int64)a2);
  v9 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  UsbhAcquirePdoUxdLock(v10, a2);
  *a4 = 0;
  v11 = *((_OWORD *)v8 + 161);
  v8[353] &= ~0x10000u;
  Source2[0] = v11;
  Source2[1] = *((_OWORD *)v8 + 162);
  Source2[2] = *((_OWORD *)v8 + 163);
  Source2[3] = *((_OWORD *)v8 + 164);
  LODWORD(Source2[4]) = v8[660];
  UsbhGetGlobalUxdSettings(v12, (_QWORD *)v9 + 647);
  if ( !v9[1297] || dword_1C006962C )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        21,
        (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
    UsbhReleasePdoUxdLock(v13, a2);
    return 0LL;
  }
  if ( (int)UsbhGetUxdPortKey(a1, *((unsigned __int16 *)v8 + 710), Source1) < 0 )
  {
    if ( (int)UsbhGetUxdDeviceKey(v15, a2, Source1) < 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          24,
          (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
          *((_WORD *)v8 + 710));
      goto LABEL_17;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *((unsigned __int16 *)v8 + 700),
        (_DWORD)WPP_GLOBAL_Control,
        23,
        (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
        *((_WORD *)v8 + 700),
        *((_WORD *)v8 + 701),
        *((_WORD *)v8 + 702));
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
      *((_WORD *)v8 + 710));
  }
  v8[353] |= 0x10000u;
LABEL_17:
  *((_OWORD *)v8 + 161) = Source1[0];
  *((_OWORD *)v8 + 162) = Source1[1];
  *((_OWORD *)v8 + 163) = Source1[2];
  *((_OWORD *)v8 + 164) = Source1[3];
  v8[660] = Source1[4];
  if ( RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (v8[353] & 4) == 0 )
    *a4 = 1;
  v17 = 0;
  if ( *a4 && a3 )
  {
    v17 = UsbhBuildHardwareID(a1, (__int64)a2, (__int64)&v23);
    if ( v17 < 0 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          26,
          (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
    }
    else
    {
      UsbhFreeID((__int64)(v8 + 522));
      *(_OWORD *)(v8 + 522) = v23;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          25,
          (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
          *((__int64 *)&v23 + 1),
          SBYTE8(v23),
          SBYTE4(v23));
      v17 = UsbhBuildDeviceID(a1, (__int64)a2, (__int64)&v23);
      if ( v17 < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            28,
            (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
      }
      else
      {
        UsbhFreeID((__int64)(v8 + 518));
        *(_OWORD *)(v8 + 518) = v23;
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            27,
            (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids,
            *((__int64 *)&v23 + 1),
            SBYTE8(v23),
            SBYTE4(v23));
      }
    }
  }
  UsbhReleasePdoUxdLock(v16, a2);
  v22 = v8[695];
  if ( (v22 & 4) == 0 && (v8[353] & 0x10000) != 0 )
  {
    v8[695] = v22 | 4;
    UsbhUpdateSqmFlags(a2);
  }
  return (unsigned int)v17;
}
