/*
 * XREFs of ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0060F4C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006295C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C00616F0 (GreDeviceIoControlEx.c)
 */

void __fastcall DrvUpdatePDevForWDDMDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  char v7; // [rsp+5Ch] [rbp+14h]

  v2 = *(_QWORD *)(a1 + 2592);
  if ( (*(_DWORD *)(v2 + 160) & 0x800000) != 0
    && (int)GreDeviceIoControlEx(*(PDEVICE_OBJECT *)(v2 + 136), 0x232043u, 0LL, 0, &v6, 8u, (__int64)&v5, 1u) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 2608) + 184LL) = v6;
    v3 = *(_QWORD *)(a1 + 2608);
    if ( v7 )
      *(_DWORD *)(v3 + 180) &= ~2u;
    else
      *(_DWORD *)(v3 + 180) |= 2u;
    v4 = *(_QWORD *)(a1 + 2608);
    if ( *(_DWORD *)(v4 + 180) )
      *(_DWORD *)(v4 + 72) |= 0x200000u;
  }
}
