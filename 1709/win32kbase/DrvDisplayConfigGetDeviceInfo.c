/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C0026310
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0026560 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00789F0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0026524 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C005BD64 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C0093D4C (DrvpGetDeviceInterfaceName.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00F9600 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  int DisplayDeviceInfo; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-18h]
  int v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *a1;
  WdLogEvent5_WdEvent(v2);
  v4 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() && *a1 != -2 && *a1 != -11 )
    return 3221225659LL;
  v5 = a1 + 4;
  v6 = (unsigned int)a1[4];
  if ( (_DWORD)v6 == -1
    || (result = ((__int64 (__fastcall *)(int *, __int64, int *, int *))qword_1C0190A30)(a1 + 2, v6, a1 + 2, a1 + 4),
        (int)result >= 0) )
  {
    switch ( *a1 )
    {
      case -17:
      case -14:
      case -13:
      case -12:
      case -10:
      case -5:
      case 2:
      case 3:
      case 6:
      case 7:
      case 9:
        LOBYTE(v3) = 1;
        v8 = ((__int64 (__fastcall *)(__int64, int *))qword_1C01906A0)(v3, a1);
        v5 = (_DWORD *)v8;
        if ( v8 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v9);
          *(_QWORD *)(v15 + 24) = a1;
          *(_QWORD *)(v15 + 32) = v5;
          WdLogEvent5_WdWarning(v15);
        }
        goto LABEL_7;
      case -15:
        if ( (unsigned int)a1[1] < 0x20 )
          goto LABEL_32;
        if ( gProtocolType )
          return 3221225506LL;
        v16 = (unsigned int)a1[5];
        v17 = (unsigned int)*v5;
        v19 = *((_QWORD *)a1 + 3);
        v18 = *((_QWORD *)a1 + 1);
        v20 = 0;
        LODWORD(v5) = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, __int64))qword_1C0190C38)(
                        v18,
                        v17,
                        v16,
                        &v20,
                        v19);
        a1[5] = v20;
        goto LABEL_7;
      case -11:
      case -2:
        if ( (unsigned int)a1[1] < 0x7F0 )
          goto LABEL_32;
        LOBYTE(v4) = *a1 == -11;
        DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo(v4, a1);
        goto LABEL_11;
      case -9:
        if ( (unsigned int)a1[1] < 0x18 )
          goto LABEL_32;
        v11 = (unsigned int)*v5;
        v12 = *((_QWORD *)a1 + 1);
        v20 = 0;
        LODWORD(v5) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C01906B0)(
                        v12,
                        v11,
                        0LL,
                        &v20,
                        0LL);
        if ( (int)v5 >= 0 )
        {
          LOBYTE(v4) = v20 == 2;
          a1[5] = v4;
        }
        goto LABEL_7;
      case -8:
        if ( (unsigned int)a1[1] < 0x218 )
          goto LABEL_32;
        if ( gProtocolType )
          return 3221225506LL;
        DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, int *, int *))qword_1C0190B38)(
                              *((_QWORD *)a1 + 1),
                              (unsigned int)*v5,
                              512LL,
                              a1 + 5,
                              a1 + 6);
        goto LABEL_11;
      case -7:
        if ( (unsigned int)a1[1] < 0x31C )
          goto LABEL_32;
        if ( !gProtocolType )
        {
          DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, _QWORD))qword_1C01906B0)(
                                *((_QWORD *)a1 + 1),
                                (unsigned int)*v5,
                                a1,
                                0LL,
                                0LL);
          goto LABEL_11;
        }
        return 3221225506LL;
      case -3:
        if ( a1[1] != 32 )
          return 3221225485LL;
        DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
        goto LABEL_11;
      case 1:
        v13 = gpGraphicsDeviceList;
        if ( (unsigned int)a1[1] < 0x54 )
          goto LABEL_32;
        if ( !gpGraphicsDeviceList )
          goto LABEL_35;
        do
        {
          if ( a1[2] == *((_DWORD *)v13 + 66) && a1[3] == *((_DWORD *)v13 + 67) && *((_DWORD *)v13 + 68) == *v5 )
            break;
          v13 = (wchar_t *)*((_QWORD *)v13 + 16);
        }
        while ( v13 );
        if ( !v13 )
          goto LABEL_35;
        LODWORD(v5) = 0;
        *(_OWORD *)(a1 + 5) = *((_OWORD *)v13 + 4);
        *(_OWORD *)(a1 + 9) = *((_OWORD *)v13 + 5);
        *(_OWORD *)(a1 + 13) = *((_OWORD *)v13 + 6);
        *(_OWORD *)(a1 + 17) = *((_OWORD *)v13 + 7);
        goto LABEL_7;
      case 4:
        if ( (unsigned int)a1[1] < 0x114 )
        {
LABEL_32:
          result = 3221225507LL;
        }
        else
        {
          v13 = gpGraphicsDeviceList;
          if ( !gpGraphicsDeviceList )
            goto LABEL_35;
          do
          {
            if ( a1[2] == *((_DWORD *)v13 + 66) && a1[3] == *((_DWORD *)v13 + 67) )
              break;
            v13 = (wchar_t *)*((_QWORD *)v13 + 16);
          }
          while ( v13 );
          if ( v13 && (v13 = (wchar_t *)*((_QWORD *)v13 + 18)) != 0LL )
          {
            DisplayDeviceInfo = DrvpGetDeviceInterfaceName((PDEVICE_OBJECT)v13, &GUID_DEVINTERFACE_DISPLAY_ADAPTER);
LABEL_11:
            LODWORD(v5) = DisplayDeviceInfo;
LABEL_7:
            result = (unsigned int)v5;
          }
          else
          {
LABEL_35:
            v14 = WdLogNewEntry5_WdWarning(v13);
            WdLogEvent5_WdWarning(v14);
            result = 3221226021LL;
          }
        }
        break;
      default:
        LODWORD(v5) = -1073741811;
        goto LABEL_7;
    }
  }
  return result;
}
