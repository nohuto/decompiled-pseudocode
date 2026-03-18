/*
 * XREFs of ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005351C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00D1224 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  char v9; // [rsp+6Ch] [rbp+14h]

  v2 = *(_QWORD *)(a1 + 2568);
  if ( (*(_DWORD *)(v2 + 160) & 0x800000) != 0
    && (int)GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)(v2 + 136), 0x232043u, 0LL, 0, &v8, 8u, &v7, 1u, 1) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 2584) + 184LL) = v8;
    v3 = *(_QWORD *)(a1 + 2584);
    v4 = *(_DWORD *)(v3 + 180);
    if ( v9 )
      v5 = v4 & 0xFFFFFFFD;
    else
      v5 = v4 | 2;
    *(_DWORD *)(v3 + 180) = v5;
    v6 = *(_QWORD *)(a1 + 2584);
    if ( *(_DWORD *)(v6 + 180) )
      *(_DWORD *)(v6 + 72) |= 0x200000u;
  }
}
