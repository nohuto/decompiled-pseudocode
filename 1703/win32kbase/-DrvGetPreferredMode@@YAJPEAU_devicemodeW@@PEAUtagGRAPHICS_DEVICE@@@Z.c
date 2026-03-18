/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0061848
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000D740 (DrvDisplayConfigGetDeviceInfo.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // rbx
  unsigned int v4; // r15d
  int v5; // r13d
  unsigned int v6; // esi
  _DWORD *v7; // rdi
  unsigned int v8; // r12d
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp-108h]
  __int64 v11; // [rsp+38h] [rbp-100h]
  _QWORD v13[2]; // [rsp+48h] [rbp-F0h] BYREF
  int v14; // [rsp+58h] [rbp-E0h]
  _QWORD v15[10]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v16[10]; // [rsp+B0h] [rbp-88h] BYREF

  v3 = a1;
  UpdateMonitorDevices();
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v5 = 0x7FFF;
  v10 = 0x7FFF;
  v6 = 0x7FFF;
  v7 = PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
  if ( !v7 )
    return 3221225495LL;
  v8 = 0;
  if ( *((_DWORD *)a2 + 56) )
  {
    do
    {
      v11 = *((_QWORD *)a2 + 29);
      if ( (*(_BYTE *)(v11 + 20LL * v8) & 3) != 3 )
        goto LABEL_18;
      memset(v15, 0, sizeof(v15));
      v15[0] = 0x5000000003LL;
      v15[1] = *(_QWORD *)(v11 + 20LL * v8 + 8);
      LODWORD(v15[2]) = *(_DWORD *)(v11 + 20LL * v8 + 4);
      if ( (int)DrvDisplayConfigGetDeviceInfo((int *)v15) < 0 )
        goto LABEL_18;
      memset(v16, 0, 0x48uLL);
      v16[5] = 0x100000001LL;
      v16[6] = v15[6];
      v14 = 0;
      v13[0] = v15[7];
      v13[1] = 5LL;
      if ( (int)((__int64 (__fastcall *)(_QWORD *, _QWORD *, _QWORD *, _DWORD *))qword_1C018BF48)(v16, v13, &v15[4], v7) < 0 )
        goto LABEL_18;
      if ( v7[46] < v6 )
        v6 = v7[46];
      if ( v7[43] <= v4 )
      {
        v4 = v7[43];
        v5 = v7[44];
        v10 = v5;
      }
      else
      {
LABEL_18:
        v5 = v10;
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)a2 + 56) );
    v3 = a1;
  }
  Win32FreePool((__int64)v7);
  result = 3221225713LL;
  if ( v4 != 0x7FFF )
    result = 0LL;
  v3->dmDisplayFrequency = v6;
  v3->dmPelsWidth = v4;
  v3->dmPelsHeight = v5;
  v3->dmFields = 5767168;
  return result;
}
