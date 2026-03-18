/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C011C1F4
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011BF88 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00A6040 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C011C41C (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 */

char __fastcall DxgDetermineBootImageMode(__int64 a1, __int64 *a2, _BYTE *a3)
{
  __int128 v3; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v37; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v38; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v39; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v40; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v41[2]; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t v42; // [rsp+80h] [rbp-88h]
  _OWORD v43[2]; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+A8h] [rbp-60h]
  _OWORD v45[8]; // [rsp+B8h] [rbp-50h] BYREF
  int v46; // [rsp+138h] [rbp+30h]
  WCHAR v47; // [rsp+13Ch] [rbp+34h]

  *(_DWORD *)&v38.Length = 8781956;
  v3 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v45[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v7 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v37 = -1;
  v45[1] = v3;
  *(_DWORD *)&v39.Length = 2228256;
  v8 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  v45[2] = v7;
  v9 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v45[3] = v8;
  v10 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v45[4] = v9;
  v11 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v45[5] = v10;
  v45[6] = v11;
  v12 = *(_OWORD *)L"icsDrivers";
  v41[1] = *(_OWORD *)L"mageMode";
  v45[7] = v12;
  v46 = *(_DWORD *)L"rs";
  v47 = aRegistryMachin_8[66];
  v38.Buffer = (wchar_t *)v45;
  v42 = aCddbootimagemo[16];
  v39.Buffer = (wchar_t *)v41;
  v41[0] = *(_OWORD *)L"CddBootImageMode";
  v13 = ReadRegistryDwordKeyValue(&v38, &v39, &v37);
  if ( v13 >= 0 )
  {
    v18 = v37;
  }
  else
  {
    v44 = *(_DWORD *)L"e";
    v40.Buffer = (wchar_t *)v43;
    *(_DWORD *)&v40.Length = 2359330;
    v43[0] = *(_OWORD *)L"CddBootScreenMode";
    v43[1] = *(_OWORD *)L"creenMode";
    v13 = ReadRegistryDwordKeyValue(&v38, &v40, &v37);
    v18 = v37;
    if ( v13 < 0 )
      v18 = -1;
  }
  if ( v18 )
  {
    switch ( v18 )
    {
      case 1u:
        goto LABEL_9;
      case 2u:
        *((_DWORD *)DXGGLOBAL::GetGlobal(v15, v14, v16, v17) + 236) = 2;
        break;
      case 3u:
        *((_DWORD *)DXGGLOBAL::GetGlobal(v15, v14, v16, v17) + 236) = 3;
        break;
      case 0xFFFFFFFF:
LABEL_9:
        v13 = *(_DWORD *)(a1 + 12) - 20;
        if ( (v13 & 0xFFFFFFFD) == 0 )
        {
          if ( a2 )
          {
            Global = DXGGLOBAL::GetGlobal(v15, v14, v16, v17);
            *((_OWORD *)Global + 60) = *(_OWORD *)a1;
            *((_OWORD *)Global + 61) = *(_OWORD *)(a1 + 16);
            v20 = *a2;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v22, v21, v23, v24) + 119) = v20;
            v25 = a2[2];
            *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26, v28, v29) + 132) = v25;
            *((_DWORD *)DXGGLOBAL::GetGlobal(v31, v30, v32, v33) + 236) = 1;
            LOBYTE(v13) = DxgkSetBootAnimationRelayState(1);
            *a3 = 1;
          }
          return v13;
        }
        v34 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v35 = *(int *)(a1 + 12);
LABEL_19:
        *(_QWORD *)(v34 + 24) = v35;
        LOBYTE(v13) = WdLogEvent5_WdWarning(v34);
        return v13;
      default:
        v34 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v35 = v18;
        goto LABEL_19;
    }
    LOBYTE(v13) = DxgkSetBootAnimationRelayState(1);
  }
  return v13;
}
