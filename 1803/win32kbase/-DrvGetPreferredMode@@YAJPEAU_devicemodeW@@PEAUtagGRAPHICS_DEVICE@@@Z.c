/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D2F4
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0043200 (DrvEnumDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0042B10 (DrvDisplayConfigGetDeviceInfo.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // rbx
  unsigned int v4; // r12d
  int v5; // r15d
  unsigned int v6; // edi
  _DWORD *v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-178h]
  __int64 v13; // [rsp+28h] [rbp-170h]
  _OWORD v15[5]; // [rsp+40h] [rbp-158h] BYREF
  _OWORD v16[13]; // [rsp+90h] [rbp-108h] BYREF

  v3 = a1;
  UpdateMonitorDevices();
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v5 = 0x7FFF;
  v12 = 0x7FFF;
  v6 = 0x7FFF;
  v7 = PALLOCMEM2(0x100DBuLL, 0x76656447u, 1);
  if ( !v7 )
    return 3221225495LL;
  v8 = 0;
  if ( *((_DWORD *)a2 + 54) )
  {
    do
    {
      v9 = 32LL * v8;
      v13 = *((_QWORD *)a2 + 28);
      if ( (*(_BYTE *)(v9 + v13) & 3) != 3 )
        goto LABEL_18;
      memset(v15, 0, sizeof(v15));
      *(_QWORD *)&v15[0] = 0x5000000003LL;
      *((_QWORD *)&v15[0] + 1) = *(_QWORD *)(v9 + v13 + 8);
      LODWORD(v15[1]) = *(_DWORD *)(v9 + v13 + 4);
      if ( (int)DrvDisplayConfigGetDeviceInfo((int *)v15) < 0 )
        goto LABEL_18;
      memset(v16, 0, 0xC8uLL);
      *(_QWORD *)&v16[0] = 197511LL;
      LODWORD(v16[7]) = 1;
      DWORD2(v16[6]) = 1;
      v16[2] = v15[2];
      v16[3] = v15[3];
      v16[4] = v15[4];
      *((_QWORD *)&v16[5] + 1) = __PAIR64__(
                                   _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15[3], 12)),
                                   _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15[3], 8)));
      LODWORD(v16[6]) = 21;
      *(_QWORD *)((char *)&v16[7] + 12) = *(_QWORD *)((char *)&v15[1] + 4);
      if ( (int)((__int64 (__fastcall *)(_OWORD *, _DWORD *))qword_1C01A1F88)(v16, v7) < 0 )
        goto LABEL_18;
      v10 = v7[46];
      if ( v10 >= v6 )
        v10 = v6;
      v6 = v10;
      if ( v7[43] <= v4 )
      {
        v4 = v7[43];
        v5 = v7[44];
        v12 = v5;
      }
      else
      {
LABEL_18:
        v5 = v12;
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)a2 + 54) );
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
