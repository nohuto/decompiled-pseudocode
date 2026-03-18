/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C011C5D4
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C011C364 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00F9570 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C011C7F8 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 */

char __fastcall DxgDetermineBootImageMode(__int64 a1, __int64 *a2, char a3, _BYTE *a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v32; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v33; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v34; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v36[2]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v37; // [rsp+78h] [rbp-88h]
  _OWORD v38[2]; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+A0h] [rbp-60h]
  _OWORD v40[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+130h] [rbp+30h]
  WCHAR v42; // [rsp+134h] [rbp+34h]

  *(_DWORD *)&v33.Length = 8781956;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v40[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v40[1] = v4;
  v32 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_DWORD *)&v34.Length = 2228256;
  v40[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v40[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v40[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v40[5] = v12;
  v40[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v36[1] = *(_OWORD *)L"mageMode";
  v40[7] = v14;
  v41 = *(_DWORD *)L"rs";
  v42 = aRegistryMachin_8[66];
  v33.Buffer = (wchar_t *)v40;
  v37 = aCddbootimagemo[16];
  v34.Buffer = (wchar_t *)v36;
  v36[0] = *(_OWORD *)L"CddBootImageMode";
  v15 = ReadRegistryDwordKeyValue(&v33, &v34, &v32);
  if ( v15 >= 0 )
  {
    v19 = v32;
  }
  else
  {
    v39 = *(_DWORD *)L"e";
    v35.Buffer = (wchar_t *)v38;
    *(_DWORD *)&v35.Length = 2359330;
    v38[0] = *(_OWORD *)L"CddBootScreenMode";
    v38[1] = *(_OWORD *)L"creenMode";
    v15 = ReadRegistryDwordKeyValue(&v33, &v35, &v32);
    v19 = v32;
    if ( v15 < 0 )
      v19 = -1;
  }
  switch ( v19 )
  {
    case 0u:
      return v15;
    case 0xFFFFFFFF:
    case 1u:
      if ( a3 )
      {
        *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 236) = 1;
        LOBYTE(v15) = DxgkSetBootAnimationRelayState(3LL);
        if ( (_BYTE)v15 )
          goto LABEL_10;
        v30 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v30 + 24) = 5129LL;
      }
      else
      {
        if ( !a2 )
          return v15;
        if ( ((*(_DWORD *)(a1 + 12) - 20) & 0xFFFFFFFD) != 0 )
        {
          v27 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          v28 = *(int *)(a1 + 12);
          goto LABEL_23;
        }
        Global = DXGGLOBAL::GetGlobal(v17);
        *((_OWORD *)Global + 60) = *(_OWORD *)a1;
        *((_OWORD *)Global + 61) = *(_OWORD *)(a1 + 16);
        v21 = *a2;
        *((_QWORD *)DXGGLOBAL::GetGlobal(v22) + 119) = v21;
        v23 = a2[2];
        *((_QWORD *)DXGGLOBAL::GetGlobal(v24) + 132) = v23;
        *((_DWORD *)DXGGLOBAL::GetGlobal(v25) + 236) = 1;
        LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
        if ( (_BYTE)v15 )
        {
LABEL_10:
          *a4 = 1;
          return v15;
        }
        v30 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v30 + 24) = 5162LL;
      }
      LOBYTE(v15) = WdLogEvent5_WdAssertion(v30);
      goto LABEL_10;
    case 2u:
      *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 236) = 2;
      break;
    case 3u:
      *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 236) = 3;
      break;
    default:
      v27 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      v28 = v19;
LABEL_23:
      *(_QWORD *)(v27 + 24) = v28;
      LOBYTE(v15) = WdLogEvent5_WdWarning(v27);
      return v15;
  }
  LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
  return v15;
}
