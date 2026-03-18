/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1C000CB48
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C000C8F8 (RIMOnDisplayStateChange.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0105F10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0016CE0 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     GetPointerDeviceConfig @ 0x1C00615F0 (GetPointerDeviceConfig.c)
 *     rimSetDeviceDisplayConfig @ 0x1C008DEC8 (rimSetDeviceDisplayConfig.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C0090768 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutp.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // r9
  _BYTE v12[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+28h] [rbp-70h]
  char v14; // [rsp+30h] [rbp-68h]
  _BYTE v15[72]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+88h] [rbp-10h]

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 59);
      v10 = *((_QWORD *)a1 + 43);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10);
      else
        RIMEndAllActiveContacts(v10, a2, 0LL);
    }
    CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v12);
    v16 = 0LL;
    if ( (int)GetPointerDeviceConfig(a1, v12, v15) < 0 )
    {
      *((_DWORD *)a2 + 39) = 0;
    }
    else
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedOutputConfig *)v12, (struct CRegionConfig *)v15);
    }
    if ( !v14 )
      GreLeaveCriticalRegionAndReleasePushLockShared(v13);
  }
  if ( *((_DWORD *)a1 + 194) && a4 && *((_DWORD *)a1 + 198) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v11 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 192LL * v4);
      if ( v11[4] == *((_DWORD *)a1 + 327) && v11[5] == *((_DWORD *)a1 + 328) && v11[7] == *((_DWORD *)a1 + 329) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
