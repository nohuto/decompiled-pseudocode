/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C000D740
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC (rimFindMonitorForDigitizerWithQDCData.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D420 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0061848 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     DrvpGetDeviceInterfaceName @ 0x1C000BCC0 (DrvpGetDeviceInterfaceName.c)
 *     DrvIsWddmDriverPresent @ 0x1C000D994 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C000D9C4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00F9490 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  int DisplayDeviceInfo; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  wchar_t *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *a1;
  WdLogEvent5_WdEvent(v2);
  v4 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() && *a1 != -2 && *a1 != -11 )
    return 3221225659LL;
  v5 = a1 + 4;
  v6 = (unsigned int)a1[4];
  if ( (_DWORD)v6 == -1
    || (result = ((__int64 (__fastcall *)(int *, __int64, int *, int *))qword_1C018BDB0)(a1 + 2, v6, a1 + 2, a1 + 4),
        (int)result >= 0) )
  {
    switch ( *a1 )
    {
      case -11:
      case -2:
        if ( (unsigned int)a1[1] < 0x7F0 )
          goto LABEL_32;
        LOBYTE(v4) = *a1 == -11;
        DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo(v4, a1);
        goto LABEL_7;
      case -10:
      case -5:
      case 2:
      case 3:
      case 6:
      case 7:
      case 9:
      case 10:
        LOBYTE(v3) = 1;
        v11 = ((__int64 (__fastcall *)(__int64, int *))qword_1C018BA38)(v3, a1);
        v5 = (_DWORD *)v11;
        if ( v11 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(v12);
          *(_QWORD *)(v15 + 24) = a1;
          *(_QWORD *)(v15 + 32) = v5;
          WdLogEvent5_WdWarning(v15);
        }
        goto LABEL_8;
      case -9:
        if ( (unsigned int)a1[1] < 0x18 )
          goto LABEL_32;
        v9 = (unsigned int)*v5;
        v10 = *((_QWORD *)a1 + 1);
        v16 = 0;
        LODWORD(v5) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C018BA48)(
                        v10,
                        v9,
                        0LL,
                        &v16,
                        0LL);
        if ( (int)v5 >= 0 )
        {
          LOBYTE(v4) = v16 == 2;
          a1[5] = v4;
        }
        goto LABEL_8;
      case -8:
        if ( (unsigned int)a1[1] < 0x218 )
          goto LABEL_32;
        if ( gProtocolType )
          return 3221225506LL;
        DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, int *, int *))qword_1C018BEB8)(
                              *((_QWORD *)a1 + 1),
                              (unsigned int)*v5,
                              512LL,
                              a1 + 5,
                              a1 + 6);
        goto LABEL_7;
      case -7:
        if ( (unsigned int)a1[1] < 0x21C )
          goto LABEL_32;
        if ( !gProtocolType )
        {
          DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, _QWORD))qword_1C018BA48)(
                                *((_QWORD *)a1 + 1),
                                (unsigned int)*v5,
                                a1,
                                0LL,
                                0LL);
          goto LABEL_7;
        }
        return 3221225506LL;
      case -3:
        if ( a1[1] != 32 )
          return 3221225485LL;
        DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
        goto LABEL_7;
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
        goto LABEL_8;
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
            DisplayDeviceInfo = DrvpGetDeviceInterfaceName(
                                  (PDEVICE_OBJECT)v13,
                                  &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                  0x1C0000000LL,
                                  (wchar_t *)a1 + 10);
LABEL_7:
            LODWORD(v5) = DisplayDeviceInfo;
LABEL_8:
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
        goto LABEL_8;
    }
  }
  return result;
}
