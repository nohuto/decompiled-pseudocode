/*
 * XREFs of ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0050D78
 * Callers:
 *     DrvUpdateDisplayDriverParameters @ 0x1C0050C84 (DrvUpdateDisplayDriverParameters.c)
 * Callees:
 *     ?DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z @ 0x1C00511F0 (-DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C00512AC (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DrvWriteDisplayDriverParameters(
        struct tagGRAPHICS_DEVICE *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        struct _devicemodeW *const a4,
        int a5)
{
  __int64 result; // rax
  NTSTATUS v9; // esi
  char v10; // bl
  PCWSTR *p_Name; // rcx
  __int64 v12; // r8
  wchar_t **v13; // rdx
  const WCHAR *v14; // rax
  unsigned int v15; // r15d
  NTSTATUS v16; // eax
  WORD dmDriverExtra; // ax
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  struct _devicemodeW *v20; // [rsp+38h] [rbp-C8h]
  _devicemodeW v21; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v22[12]; // [rsp+120h] [rbp+20h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+150h] [rbp+50h] BYREF
  __int64 v24; // [rsp+188h] [rbp+88h]
  int v25; // [rsp+190h] [rbp+90h]
  __int64 v26; // [rsp+198h] [rbp+98h]
  DWORD *p_dmPelsWidth; // [rsp+1A0h] [rbp+A0h]
  int v28; // [rsp+1A8h] [rbp+A8h]
  __int64 v29; // [rsp+1B0h] [rbp+B0h]
  int v30; // [rsp+1B8h] [rbp+B8h]
  __int64 v31; // [rsp+1C0h] [rbp+C0h]
  int v32; // [rsp+1C8h] [rbp+C8h]
  __int64 v33; // [rsp+1D0h] [rbp+D0h]
  DWORD *p_dmPelsHeight; // [rsp+1D8h] [rbp+D8h]
  int v35; // [rsp+1E0h] [rbp+E0h]
  __int64 v36; // [rsp+1E8h] [rbp+E8h]
  int v37; // [rsp+1F0h] [rbp+F0h]
  __int64 v38; // [rsp+1F8h] [rbp+F8h]
  int v39; // [rsp+200h] [rbp+100h]
  __int64 v40; // [rsp+208h] [rbp+108h]
  DWORD *p_dmDisplayFrequency; // [rsp+210h] [rbp+110h]
  int v42; // [rsp+218h] [rbp+118h]
  __int64 v43; // [rsp+220h] [rbp+120h]
  int v44; // [rsp+228h] [rbp+128h]
  __int64 v45; // [rsp+230h] [rbp+130h]
  int v46; // [rsp+238h] [rbp+138h]
  __int64 v47; // [rsp+240h] [rbp+140h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+248h] [rbp+148h]
  int v49; // [rsp+250h] [rbp+150h]
  __int64 v50; // [rsp+258h] [rbp+158h]
  int v51; // [rsp+260h] [rbp+160h]
  __int64 v52; // [rsp+268h] [rbp+168h]
  int v53; // [rsp+270h] [rbp+170h]
  __int64 v54; // [rsp+278h] [rbp+178h]
  DWORD *p_dmPanningWidth; // [rsp+280h] [rbp+180h]
  int v56; // [rsp+288h] [rbp+188h]
  __int64 v57; // [rsp+290h] [rbp+190h]
  int v58; // [rsp+298h] [rbp+198h]
  __int64 v59; // [rsp+2A0h] [rbp+1A0h]
  int v60; // [rsp+2A8h] [rbp+1A8h]
  __int64 v61; // [rsp+2B0h] [rbp+1B0h]
  DWORD *p_dmPanningHeight; // [rsp+2B8h] [rbp+1B8h]
  int v63; // [rsp+2C0h] [rbp+1C0h]
  __int64 v64; // [rsp+2C8h] [rbp+1C8h]
  int v65; // [rsp+2D0h] [rbp+1D0h]
  __int64 v66; // [rsp+2D8h] [rbp+1D8h]
  int v67; // [rsp+2E0h] [rbp+1E0h]
  __int64 v68; // [rsp+2E8h] [rbp+1E8h]
  DWORD *p_dmDisplayOrientation; // [rsp+2F0h] [rbp+1F0h]
  int v70; // [rsp+2F8h] [rbp+1F8h]
  __int64 v71; // [rsp+300h] [rbp+200h]
  int v72; // [rsp+308h] [rbp+208h]
  __int64 v73; // [rsp+310h] [rbp+210h]
  int v74; // [rsp+318h] [rbp+218h]
  __int64 v75; // [rsp+320h] [rbp+220h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+328h] [rbp+228h]
  int v77; // [rsp+330h] [rbp+230h]
  __int64 v78; // [rsp+338h] [rbp+238h]
  int v79; // [rsp+340h] [rbp+240h]
  __int64 (__fastcall *v80)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+348h] [rbp+248h]
  int v81; // [rsp+350h] [rbp+250h]
  const wchar_t *v82; // [rsp+358h] [rbp+258h]
  _devicemodeW *v83; // [rsp+360h] [rbp+260h]
  int v84; // [rsp+368h] [rbp+268h]
  int *v85; // [rsp+370h] [rbp+270h]
  int v86; // [rsp+378h] [rbp+278h]
  __int64 v87; // [rsp+380h] [rbp+280h]
  int v88; // [rsp+388h] [rbp+288h]
  _BYTE v89[40]; // [rsp+390h] [rbp+290h] BYREF

  v20 = a4;
  v18 = 11;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    return 0LL;
  result = DrvWriteAttachedSettings(0xFFFDu, a3, a4, a5, &v18);
  v9 = result;
  if ( !a5 )
  {
    if ( a4 )
    {
      v10 = 0;
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
      {
        memset(&v21, 0, sizeof(v21));
        v19 = 0;
        QueryTable.QueryRoutine = 0LL;
        QueryTable.Flags = 288;
        QueryTable.EntryContext = &v21.dmBitsPerPel;
        p_dmPelsWidth = &v21.dmPelsWidth;
        p_dmPelsHeight = &v21.dmPelsHeight;
        p_dmDisplayFrequency = &v21.dmDisplayFrequency;
        p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&v21.dmDisplayFlags;
        p_dmPanningWidth = &v21.dmPanningWidth;
        p_dmPanningHeight = &v21.dmPanningHeight;
        p_dmDisplayOrientation = &v21.dmDisplayOrientation;
        p_dmDisplayFixedOutput = &v21.dmDisplayFixedOutput;
        v80 = DrvDriverExtraSizeCallback;
        QueryTable.Name = 0LL;
        QueryTable.DefaultType = 0x4000000;
        QueryTable.DefaultData = 0LL;
        QueryTable.DefaultLength = 0;
        v24 = 0LL;
        v25 = 288;
        v26 = 0LL;
        v28 = 0x4000000;
        v29 = 0LL;
        v30 = 0;
        v31 = 0LL;
        v32 = 288;
        v33 = 0LL;
        v35 = 0x4000000;
        v36 = 0LL;
        v37 = 0;
        v38 = 0LL;
        v39 = 288;
        v40 = 0LL;
        v42 = 0x4000000;
        v43 = 0LL;
        v44 = 0;
        v45 = 0LL;
        v46 = 288;
        v47 = 0LL;
        v49 = 0x4000000;
        v50 = 0LL;
        v51 = 0;
        v52 = 0LL;
        v53 = 288;
        v54 = 0LL;
        v56 = 0x4000000;
        v57 = 0LL;
        v58 = 0;
        v59 = 0LL;
        v60 = 288;
        v61 = 0LL;
        v63 = 0x4000000;
        v64 = 0LL;
        v65 = 0;
        v66 = 0LL;
        v67 = 288;
        v68 = 0LL;
        v70 = 0x4000000;
        v71 = 0LL;
        v72 = 0;
        v73 = 0LL;
        v74 = 288;
        v75 = 0LL;
        v77 = 0x4000000;
        v78 = 0LL;
        v79 = 0;
        v81 = 0;
        v84 = 4;
        v83 = &v21;
        v86 = 4;
        v85 = &v19;
        v87 = 0LL;
        v88 = 0;
        memset(v89, 0, sizeof(v89));
        p_Name = &QueryTable.Name;
        v12 = 9LL;
        v13 = off_1C0172AD0;
        do
        {
          v14 = *v13++;
          *p_Name = v14;
          p_Name += 7;
          --v12;
        }
        while ( v12 );
        v82 = L"DefaultSettings.DriverExtra";
        v9 = RtlQueryRegistryValues(0x40000000u, a3, &QueryTable, 0LL, 0LL);
        if ( v9 < 0 || (v21.dmDriverExtra & 0xFFFB) == 0 || (v10 = 1, AreEquivalentDevModes(a4, &v21)) )
          v10 = 0;
      }
      v15 = 0;
      v22[0] = a4->dmBitsPerPel;
      v22[1] = a4->dmPelsWidth;
      v22[2] = a4->dmPelsHeight;
      v22[3] = a4->dmDisplayFrequency;
      v22[4] = a4->dmDisplayFlags;
      v22[5] = a4->dmPanningWidth;
      v22[6] = a4->dmPanningHeight;
      v22[7] = a4->dmDisplayOrientation;
      v22[8] = a4->dmDisplayFixedOutput;
      v22[9] = a4->dmPosition.x;
      v22[10] = a4->dmPosition.y;
      if ( v9 >= 0 )
      {
        do
        {
          if ( v15 >= v18 )
            break;
          v16 = RtlWriteRegistryValue(0x40000000u, a3, off_1C0172AD0[v15], 4u, &v22[v15], 4u);
          ++v15;
          v9 = v16;
        }
        while ( v16 >= 0 );
        if ( v9 >= 0 )
        {
          dmDriverExtra = v20->dmDriverExtra;
          if ( dmDriverExtra )
          {
            return (unsigned int)RtlWriteRegistryValue(
                                   0x40000000u,
                                   a3,
                                   L"DefaultSettings.DriverExtra",
                                   3u,
                                   (char *)v20 + v20->dmSize,
                                   dmDriverExtra);
          }
          else if ( v10 )
          {
            RtlDeleteRegistryValue(0x40000000u, a3, L"DefaultSettings.DriverExtra");
          }
        }
      }
      return (unsigned int)v9;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
