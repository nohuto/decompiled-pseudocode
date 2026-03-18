/*
 * XREFs of DrvSetVideoParameters @ 0x1C00FA574
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeviceIoControlEx @ 0x1C00616F0 (GreDeviceIoControlEx.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 */

__int64 __fastcall DrvSetVideoParameters(UNICODE_STRING *a1, __int64 a2, int a3, _OWORD *a4, int a5, int a6)
{
  unsigned int v10; // esi
  wchar_t *DeviceFromName; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  _DWORD *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  __int64 v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  _OWORD *v27; // rax
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v29; // [rsp+78h] [rbp+10h]

  v10 = -5;
  DeviceFromName = 0LL;
  v12 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v12 + 24) = a1;
  *(_QWORD *)(v12 + 32) = a2;
  WdLogEvent5_WdEvent(v12);
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, a3);
    v14 = DeviceFromName == 0LL;
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(wchar_t **)(a2 + 2592);
    v14 = DeviceFromName == 0LL;
  }
  if ( v14 || DeviceFromName == (wchar_t *)-4LL )
  {
    v15 = WdLogNewEntry5_WdTrace(v13);
LABEL_33:
    WdLogEvent5_WdTrace(v15);
    return v10;
  }
  if ( !DeviceFromName )
  {
LABEL_32:
    v15 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v15 + 24) = (int)v10;
    goto LABEL_33;
  }
  if ( a4 )
  {
    if ( a6 && (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      return 0xFFFFFFFFLL;
    v17 = PALLOCMEM2(0x2C8uLL, 1936876615LL, 0);
    v19 = v17;
    v29 = v17;
    if ( !v17 )
    {
      v20 = WdLogNewEntry5_WdTrace(v18);
      WdLogEvent5_WdTrace(v20);
      return 0xFFFFFFFFLL;
    }
    v21 = v17;
    v22 = a4;
    v23 = 2LL;
    v24 = 2LL;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      *(v21 - 1) = v22[7];
      v22 += 8;
      --v24;
    }
    while ( v24 );
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    *((_DWORD *)v21 + 24) = *((_DWORD *)v22 + 24);
    if ( a5 )
    {
      v25 = v19[5];
      if ( v25 != 1
        && (v25 != 2 || ((v19[6] & 0x100) == 0 || v19[21] != 2) && ((v19[6] & 0x100) == 0 || v19[21] != 4 || v19[24])) )
      {
        Win32FreePool((__int64)v19);
        return v10;
      }
    }
    v26 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)DeviceFromName + 17), 0x230020u, v19, 0x164u, v19, 0x164u, &v28, 0);
    if ( v26 )
      v26 = -5;
    v10 = v26;
    v27 = v19;
    do
    {
      *a4 = *v27;
      a4[1] = v27[1];
      a4[2] = v27[2];
      a4[3] = v27[3];
      a4[4] = v27[4];
      a4[5] = v27[5];
      a4[6] = v27[6];
      a4 += 8;
      *(a4 - 1) = v27[7];
      v27 += 8;
      --v23;
    }
    while ( v23 );
    *a4 = *v27;
    a4[1] = v27[1];
    a4[2] = v27[2];
    a4[3] = v27[3];
    a4[4] = v27[4];
    a4[5] = v27[5];
    *((_DWORD *)a4 + 24) = *((_DWORD *)v27 + 24);
    Win32FreePool((__int64)v19);
    goto LABEL_32;
  }
  return v10;
}
