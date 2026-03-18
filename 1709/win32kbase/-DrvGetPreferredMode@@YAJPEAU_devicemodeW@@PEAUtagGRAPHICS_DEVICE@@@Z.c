/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00789F0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C005B8A0 (DrvEnumDisplaySettings.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // rbx
  unsigned int v4; // r15d
  int v5; // r13d
  unsigned int v6; // edi
  _DWORD *v7; // rsi
  unsigned int v8; // r12d
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-168h]
  __int64 v11; // [rsp+28h] [rbp-160h]
  _OWORD v13[5]; // [rsp+40h] [rbp-148h] BYREF
  _OWORD v14[12]; // [rsp+90h] [rbp-F8h] BYREF

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
      memset(v13, 0, sizeof(v13));
      *(_QWORD *)&v13[0] = 0x5000000003LL;
      *((_QWORD *)&v13[0] + 1) = *(_QWORD *)(v11 + 20LL * v8 + 8);
      LODWORD(v13[1]) = *(_DWORD *)(v11 + 20LL * v8 + 4);
      if ( (int)DrvDisplayConfigGetDeviceInfo((int *)v13) < 0 )
        goto LABEL_18;
      memset(v14, 0, sizeof(v14));
      *(_QWORD *)&v14[0] = 197511LL;
      LODWORD(v14[7]) = 1;
      DWORD2(v14[6]) = 1;
      v14[2] = v13[2];
      v14[3] = v13[3];
      v14[4] = v13[4];
      *((_QWORD *)&v14[5] + 1) = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13[3], 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13[3], 8)));
      LODWORD(v14[6]) = 21;
      *(_QWORD *)((char *)&v14[7] + 12) = *(_QWORD *)((char *)&v13[1] + 4);
      if ( (int)((__int64 (__fastcall *)(_OWORD *, _DWORD *))qword_1C0190BC8)(v14, v7) < 0 )
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
