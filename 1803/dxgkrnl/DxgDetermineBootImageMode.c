/*
 * XREFs of DxgDetermineBootImageMode @ 0x1C017033C
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01FC9CC (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00DF050 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C01A9164 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
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
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v33; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v34; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v36; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v37[2]; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t v38; // [rsp+78h] [rbp-88h]
  _OWORD v39[2]; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+A0h] [rbp-60h]
  _OWORD v41[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+130h] [rbp+30h]
  WCHAR v43; // [rsp+134h] [rbp+34h]

  *(_DWORD *)&v34.Length = 8781956;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v41[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v41[1] = v4;
  v33 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_DWORD *)&v35.Length = 2228256;
  v41[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v41[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v41[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v41[5] = v12;
  v41[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v37[1] = *(_OWORD *)L"mageMode";
  v41[7] = v14;
  v42 = *(_DWORD *)L"rs";
  v43 = aRegistryMachin_9[66];
  v34.Buffer = (wchar_t *)v41;
  v38 = aCddbootimagemo[16];
  v35.Buffer = (wchar_t *)v37;
  v37[0] = *(_OWORD *)L"CddBootImageMode";
  v15 = ReadRegistryDwordKeyValue(&v34, &v35, &v33);
  if ( v15 >= 0 )
  {
    v19 = v33;
  }
  else
  {
    v40 = *(_DWORD *)L"e";
    v36.Buffer = (wchar_t *)v39;
    *(_DWORD *)&v36.Length = 2359330;
    v39[0] = *(_OWORD *)L"CddBootScreenMode";
    v39[1] = *(_OWORD *)L"creenMode";
    v15 = ReadRegistryDwordKeyValue(&v34, &v36, &v33);
    v19 = v33;
    if ( v15 < 0 )
      v19 = -1;
  }
  if ( v19 )
  {
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
      {
        if ( v19 == 3 )
        {
          *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 256) = 3;
          LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
          return v15;
        }
        if ( v19 != -1 )
        {
          v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          v21 = v19;
LABEL_20:
          *(_QWORD *)(v20 + 24) = v21;
          LOBYTE(v15) = WdLogEvent5_WdWarning(v20);
          return v15;
        }
      }
      v22 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v22 + 24) = 5104LL;
      LOBYTE(v15) = WdLogEvent5_WdWarning(v22);
    }
    if ( a3 )
    {
      *((_DWORD *)DXGGLOBAL::GetGlobal(v17) + 256) = 1;
      LOBYTE(v15) = DxgkSetBootAnimationRelayState(3LL);
      if ( !(_BYTE)v15 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v24 + 24) = 5117LL;
LABEL_23:
        LOBYTE(v15) = WdLogEvent5_WdAssertion(v24);
        goto LABEL_24;
      }
      goto LABEL_24;
    }
    if ( a2 )
    {
      if ( ((*(_DWORD *)(a1 + 12) - 20) & 0xFFFFFFFD) != 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        v21 = *(int *)(a1 + 12);
        goto LABEL_20;
      }
      Global = DXGGLOBAL::GetGlobal(v17);
      *((_OWORD *)Global + 65) = *(_OWORD *)a1;
      *((_OWORD *)Global + 66) = *(_OWORD *)(a1 + 16);
      v26 = *a2;
      *((_QWORD *)DXGGLOBAL::GetGlobal(v27) + 129) = v26;
      v28 = a2[2];
      *((_QWORD *)DXGGLOBAL::GetGlobal(v29) + 142) = v28;
      *((_DWORD *)DXGGLOBAL::GetGlobal(v30) + 256) = 1;
      LOBYTE(v15) = DxgkSetBootAnimationRelayState(1LL);
      if ( !(_BYTE)v15 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v24 + 24) = 5150LL;
        goto LABEL_23;
      }
LABEL_24:
      *a4 = 1;
    }
  }
  return v15;
}
