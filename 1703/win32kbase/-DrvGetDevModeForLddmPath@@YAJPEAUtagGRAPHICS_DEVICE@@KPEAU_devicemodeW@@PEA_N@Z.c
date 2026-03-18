/*
 * XREFs of ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00621D8
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 * Callees:
 *     DrvQueryDisplayConfig @ 0x1C000D270 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0 (DrvGetDisplayConfigBufferSizes.c)
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C005EFC8 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     ?Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ @ 0x1C00623DC (-Allocate@QDC_AUTO_BUFFERS@@QEAAJXZ.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C0062444 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvGetDevModeForLddmPath(struct tagGRAPHICS_DEVICE *a1, int a2, struct _devicemodeW *a3, bool *a4)
{
  unsigned int v8; // esi
  int DisplayConfigBufferSizes; // ebx
  __int64 v10; // rdx
  bool v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rsi
  _DWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[528]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+250h] [rbp+150h] BYREF
  int v18; // [rsp+254h] [rbp+154h] BYREF
  __int64 v19; // [rsp+258h] [rbp+158h]
  __int64 v20; // [rsp+260h] [rbp+160h]

  memset(v16, 0, sizeof(v16));
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  if ( a2 == -1 )
  {
    v8 = 18;
  }
  else
  {
    if ( a2 != -2 )
    {
      DisplayConfigBufferSizes = -1073741811;
      goto LABEL_21;
    }
    v8 = 20;
  }
  do
  {
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(v8, (__int64)&v17, (__int64)&v18);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      DisplayConfigBufferSizes = QDC_AUTO_BUFFERS::Allocate((QDC_AUTO_BUFFERS *)v16);
      if ( DisplayConfigBufferSizes >= 0 )
        DisplayConfigBufferSizes = DrvQueryDisplayConfig(v8, &v17, v19, (__int64)&v18, v20, v15);
    }
  }
  while ( DisplayConfigBufferSizes == -1073741789 || DisplayConfigBufferSizes == -2147483643 );
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v10 = 0LL;
    DisplayConfigBufferSizes = -1073741275;
    if ( v17 )
    {
      v11 = 1;
      while ( 1 )
      {
        v12 = v19 + 72 * v10;
        if ( *((_DWORD *)a1 + 68) == *(_DWORD *)(v12 + 8)
          && *((_DWORD *)a1 + 66) == *(_DWORD *)v12
          && *((_DWORD *)a1 + 67) == *(_DWORD *)(v12 + 4)
          && *(_WORD *)(v12 + 14) != 0xFFFF
          && *(_WORD *)(v12 + 34) != 0xFFFF )
        {
          break;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v17 )
          goto LABEL_20;
      }
      DisplayConfigBufferSizes = 0;
      v13 = v20 + ((unsigned __int64)*(unsigned __int16 *)(v12 + 34) << 6);
      if ( a3 )
        DisplayConfigBufferSizes = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, struct _devicemodeW *))qword_1C018BF48)(
                                     v12,
                                     ((unsigned __int64)*(unsigned __int16 *)(v12 + 14) << 6) + v20 + 16,
                                     v13 + 16,
                                     a3);
      if ( a4 )
      {
        if ( *(_DWORD *)(v13 + 32) != -2 || *(_DWORD *)(v13 + 36) != -2 )
          v11 = 0;
        *a4 = v11;
      }
    }
  }
LABEL_20:
  if ( DisplayConfigBufferSizes == -1073741275 && a2 == -2 && a3 )
  {
    memset(a3, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&a3->dmSpecVersion = 67175425;
    a3->dmSize = 220;
    a3->dmFields = 410910848;
    DrvGetDisplayDriverDpiSetting(a3);
    DisplayConfigBufferSizes = 0;
  }
LABEL_21:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v16);
  return (unsigned int)DisplayConfigBufferSizes;
}
