/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01A98BC
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A967C (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01A9760 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9F10 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_M.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxRotateScreen(CLegacyRotationMgr *this, int a2, int a3, int *a4)
{
  int v6; // edi
  CLegacyRotationMgr *v7; // rcx
  int v9; // ebx
  int v10; // ebx
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v26[128]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v27[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+F4h] [rbp-Ch]
  int v30; // [rsp+F8h] [rbp-8h]
  _QWORD v31[8]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  int *v35; // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+178h] [rbp+78h]
  int *v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v39; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v40; // [rsp+1C0h] [rbp+C0h]
  __int64 v41; // [rsp+1C8h] [rbp+C8h]
  int *v42; // [rsp+1D0h] [rbp+D0h]
  __int64 v43; // [rsp+1D8h] [rbp+D8h]
  int *v44; // [rsp+1E0h] [rbp+E0h]
  __int64 v45; // [rsp+1E8h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+200h] [rbp+100h] BYREF
  int *v47; // [rsp+220h] [rbp+120h]
  __int64 v48; // [rsp+228h] [rbp+128h]
  int *v49; // [rsp+230h] [rbp+130h]
  __int64 v50; // [rsp+238h] [rbp+138h]
  int *v51; // [rsp+240h] [rbp+140h]
  __int64 v52; // [rsp+248h] [rbp+148h]
  _BYTE v53[36]; // [rsp+260h] [rbp+160h] BYREF
  int v54; // [rsp+284h] [rbp+184h]
  int v55; // [rsp+288h] [rbp+188h]

  v17 = a3;
  memset(v31, 0, sizeof(v31));
  v6 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v31[1]);
  v31[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v31[3]) = 18;
  v19 = 1;
  v18 = 2;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v19, v53, &v18, v26, 0LL) < 0 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    goto LABEL_11;
  v9 = a2 - 1;
  if ( !v9 )
  {
    v6 = 2;
    goto LABEL_12;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v6 = 4;
      goto LABEL_12;
    }
LABEL_11:
    v6 = 1;
  }
LABEL_12:
  if ( v54 != 0x80000000 && v54 != 11 && v54 != 13 )
  {
    if ( v17 )
    {
      v30 = 0;
      v28 = 0;
      v27[0] = 0x1CFFFFFFFALL;
      v29 = v6;
      v27[1] = 0LL;
      DrvDisplayConfigSetDeviceInfo(v27, v31);
    }
    if ( a4 )
      *a4 = 1;
    if ( dword_1C0324850 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
      {
        v20 = v55;
        v33 = &v20;
        v35 = &v17;
        v37 = &v21;
        v34 = 4LL;
        v36 = 4LL;
        v21 = 1003;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBA53, v11, v12, 5u, &pData);
      }
    }
    return 0LL;
  }
  if ( v6 == v55 )
  {
    if ( a4 )
      *a4 = 1;
    if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
    {
      v22 = (int)v14;
      v40 = &v22;
      v42 = &v17;
      v44 = &v23;
      v41 = 4LL;
      v43 = 4LL;
      v23 = 1001;
      v45 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBA53, v13, v14, 5u, &v39);
    }
    return 0LL;
  }
  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000001uLL) )
  {
    v24 = (int)v16;
    v47 = &v24;
    v49 = &v17;
    v51 = &v25;
    v48 = 4LL;
    v50 = 4LL;
    v25 = 1000;
    v52 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBA53, v15, v16, 5u, &v46);
  }
  v55 = v6;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           v7,
           (struct DISPLAYCONFIG_PATH_INFO *)v53,
           (struct DISPLAYCONFIG_MODE_INFO *)v26,
           v17,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v31);
}
