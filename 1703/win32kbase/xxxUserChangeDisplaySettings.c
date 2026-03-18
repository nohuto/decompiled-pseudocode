/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0055910
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0057D70 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        int a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  unsigned int v11; // r13d
  _DWORD *v12; // rax
  __int64 v13; // rbx
  CTouchProcessor *v14; // rcx
  USHORT Length; // r8
  void *v16; // r9
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  unsigned __int64 v20; // rdx
  WCHAR *v21; // rax
  __int64 v22; // r8
  PWSTR Buffer; // r9
  __int64 v24; // rdx
  int v25; // r10d
  __int64 v26; // rcx
  WORD dmSize; // cx
  char *v28; // rdx
  unsigned int v29; // r9d
  const GUID *v30; // r9
  LPCGUID v32; // r9
  int v33; // [rsp+30h] [rbp-2C8h]
  char v34; // [rsp+40h] [rbp-2B8h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-2B4h]
  struct _UNICODE_STRING v36; // [rsp+50h] [rbp-2A8h]
  int v37; // [rsp+60h] [rbp-298h]
  BOOL v38; // [rsp+64h] [rbp-294h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-290h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-28Ch] BYREF
  int v41; // [rsp+70h] [rbp-288h] BYREF
  int v42; // [rsp+74h] [rbp-284h] BYREF
  int v43; // [rsp+78h] [rbp-280h] BYREF
  int v44; // [rsp+7Ch] [rbp-27Ch] BYREF
  int v45; // [rsp+80h] [rbp-278h] BYREF
  int v46; // [rsp+84h] [rbp-274h] BYREF
  int v47; // [rsp+88h] [rbp-270h] BYREF
  int v48; // [rsp+8Ch] [rbp-26Ch] BYREF
  int v49; // [rsp+90h] [rbp-268h] BYREF
  int v50; // [rsp+94h] [rbp-264h] BYREF
  _DWORD *v51; // [rsp+98h] [rbp-260h]
  struct _devicemodeW *v52; // [rsp+A0h] [rbp-258h]
  __int64 v53; // [rsp+A8h] [rbp-250h] BYREF
  WCHAR *v54; // [rsp+B0h] [rbp-248h]
  __int64 v55; // [rsp+B8h] [rbp-240h]
  __int64 v56; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-230h]
  void *v58; // [rsp+D0h] [rbp-228h]
  struct _UNICODE_STRING *v59; // [rsp+D8h] [rbp-220h]
  void *v60; // [rsp+E0h] [rbp-218h]
  struct _devicemodeW *v61; // [rsp+E8h] [rbp-210h]
  PWSTR v62; // [rsp+F0h] [rbp-208h]
  __int64 v63; // [rsp+F8h] [rbp-200h]
  __int64 v64; // [rsp+100h] [rbp-1F8h]
  __int64 v65; // [rsp+108h] [rbp-1F0h]
  int v66; // [rsp+110h] [rbp-1E8h]
  struct _UNICODE_STRING v67; // [rsp+120h] [rbp-1D8h]
  GUID ActivityId; // [rsp+130h] [rbp-1C8h] BYREF
  EVENT_DATA_DESCRIPTOR v69; // [rsp+140h] [rbp-1B8h] BYREF
  int *v70; // [rsp+160h] [rbp-198h]
  __int64 v71; // [rsp+168h] [rbp-190h]
  int *v72; // [rsp+170h] [rbp-188h]
  __int64 v73; // [rsp+178h] [rbp-180h]
  int *v74; // [rsp+180h] [rbp-178h]
  __int64 v75; // [rsp+188h] [rbp-170h]
  int *v76; // [rsp+190h] [rbp-168h]
  __int64 v77; // [rsp+198h] [rbp-160h]
  int *v78; // [rsp+1A0h] [rbp-158h]
  __int64 v79; // [rsp+1A8h] [rbp-150h]
  int *v80; // [rsp+1B0h] [rbp-148h]
  __int64 v81; // [rsp+1B8h] [rbp-140h]
  int *v82; // [rsp+1C0h] [rbp-138h]
  __int64 v83; // [rsp+1C8h] [rbp-130h]
  int *v84; // [rsp+1D0h] [rbp-128h]
  __int64 v85; // [rsp+1D8h] [rbp-120h]
  int *v86; // [rsp+1E0h] [rbp-118h]
  __int64 v87; // [rsp+1E8h] [rbp-110h]
  int *v88; // [rsp+1F0h] [rbp-108h]
  __int64 v89; // [rsp+1F8h] [rbp-100h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+230h] [rbp-C8h] BYREF
  BOOL *v92; // [rsp+240h] [rbp-B8h]
  __int64 v93; // [rsp+248h] [rbp-B0h]
  unsigned int *v94; // [rsp+250h] [rbp-A8h]
  __int64 v95; // [rsp+258h] [rbp-A0h]
  int *v96; // [rsp+260h] [rbp-98h]
  __int64 v97; // [rsp+268h] [rbp-90h]
  __int64 *v98; // [rsp+270h] [rbp-88h]
  __int64 v99; // [rsp+278h] [rbp-80h]
  __int64 *v100; // [rsp+280h] [rbp-78h]
  __int64 v101; // [rsp+288h] [rbp-70h]
  char *v102; // [rsp+290h] [rbp-68h]
  __int64 v103; // [rsp+298h] [rbp-60h]

  v59 = a1;
  v52 = a2;
  v61 = a2;
  v58 = a5;
  v60 = a5;
  v56 = 0LL;
  v36 = (struct _UNICODE_STRING)0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v57 = MEMORY[0xFFFFF78000000320];
  v53 = v57 * KeQueryTimeIncrement();
  v11 = xxxUserChangeDisplaySettingsInternal(a1, a2, a3, a4, a5, a6, v33, a8);
  v35 = v11;
  v12 = Win32AllocPoolZInit(0x90uLL, 1682142037LL);
  v13 = (__int64)v12;
  v51 = v12;
  if ( v12 )
  {
    *v12 = 4;
    v12[1] = 144;
    v12[10] = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    if ( a1 )
    {
      if ( a6 == UserMode )
      {
        v14 = (CTouchProcessor *)a1;
        if ( &a1[1] < a1 || &a1[1] > (struct _UNICODE_STRING *)W32UserProbeAddress )
          v14 = W32UserProbeAddress;
        v67 = *(struct _UNICODE_STRING *)v14;
        v36 = v67;
      }
      else
      {
        v36 = *a1;
      }
    }
    Length = v36.Length;
    v16 = v58;
    *((_QWORD *)v12 + 7) = v53;
    v17 = v12[35] & 0xFFFFFFFE | (v61 != 0LL);
    v12[35] = v17;
    if ( !a1 || !Length || (v18 = 2, !v36.Buffer) )
      v18 = 0;
    v19 = (v16 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v18 & 0xFFFFFFF3 | v17 & 0xFFFFFFF1;
    *(_DWORD *)(v13 + 140) = v19;
    *(_DWORD *)(v13 + 48) = a4;
    *(_DWORD *)(v13 + 52) = v11;
    if ( (v19 & 2) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( Length )
        {
          v20 = (unsigned __int64)v36.Buffer + Length;
          if ( v20 > (unsigned __int64)W32UserProbeAddress || (PWSTR)v20 < v36.Buffer )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      v21 = (WCHAR *)(v13 + 108);
      v37 = 0;
      v22 = 2147483646LL;
      v64 = 2147483646LL;
      Buffer = v36.Buffer;
      v62 = v36.Buffer;
      v24 = 16LL;
      v63 = 16LL;
      v54 = (WCHAR *)(v13 + 108);
      v25 = 0;
      v26 = 0LL;
      v55 = 0LL;
      while ( v24 )
      {
        if ( !v22 || !*Buffer )
          goto LABEL_22;
        *v21++ = *Buffer;
        v54 = v21;
        v62 = ++Buffer;
        v63 = --v24;
        v64 = --v22;
        v55 = ++v26;
      }
      v54 = --v21;
      v55 = v26 - 1;
      v25 = -2147483643;
LABEL_22:
      *v21 = 0;
      v37 = v25;
      v66 = v25;
      if ( v25 < 0 )
        *(_WORD *)(v13 + 108) = 0;
    }
    if ( (*(_DWORD *)(v13 + 140) & 1) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        dmSize = a2->dmSize;
        if ( dmSize )
        {
          v28 = (char *)a2 + dmSize;
          if ( v28 > (char *)W32UserProbeAddress || v28 < (char *)a2 )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      else
      {
        dmSize = a2->dmSize;
      }
      if ( dmSize >= 0xB4u )
      {
        *(_DWORD *)(v13 + 64) = a2->dmFields;
        *(_QWORD *)(v13 + 68) = *(_QWORD *)&a2->dmOrientation;
        *(_DWORD *)(v13 + 76) = a2->dmBitsPerPel;
        *(_DWORD *)(v13 + 80) = a2->dmPelsWidth;
        *(_DWORD *)(v13 + 84) = a2->dmPelsHeight;
        *(_DWORD *)(v13 + 88) = a2->dmDisplayFrequency;
        *(_DWORD *)(v13 + 92) = a2->dmDriverExtra;
        *(_DWORD *)(v13 + 96) = a2->dmDisplayOrientation;
        *(_DWORD *)(v13 + 100) = a2->dmDisplayFixedOutput;
        *(_DWORD *)(v13 + 104) = a2->dmDisplayFlags;
      }
    }
    DrvDxgkWriteDiagEntry(v13);
    v65 = MEMORY[0xFFFFF78000000320];
    v56 = v65 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v29 = hProvider;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000004uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)(v13 + 108));
      v38 = a2 == 0LL;
      v92 = &v38;
      v93 = 4LL;
      v39 = a4;
      v94 = &v39;
      v95 = 4LL;
      v40 = v11;
      v96 = (int *)&v40;
      v97 = 4LL;
      v98 = &v53;
      v99 = 8LL;
      v100 = &v56;
      v101 = 8LL;
      v34 = a6;
      v102 = &v34;
      v103 = 1LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0169FEE, &ActivityId, v32, 9u, &pData);
      v29 = hProvider;
    }
    if ( (*(_DWORD *)(v13 + 140) & 1) != 0
      && v29 > 5
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000004uLL) )
    {
      v41 = *(_DWORD *)(v13 + 64);
      v70 = &v41;
      v71 = 4LL;
      v42 = *(_DWORD *)(v13 + 68);
      v72 = &v42;
      v73 = 4LL;
      v43 = *(_DWORD *)(v13 + 72);
      v74 = &v43;
      v75 = 4LL;
      v44 = *(_DWORD *)(v13 + 80);
      v76 = &v44;
      v77 = 4LL;
      v45 = *(_DWORD *)(v13 + 84);
      v78 = &v45;
      v79 = 4LL;
      v46 = *(_DWORD *)(v13 + 88);
      v80 = &v46;
      v81 = 4LL;
      v47 = *(_DWORD *)(v13 + 92);
      v82 = &v47;
      v83 = 4LL;
      v48 = *(_DWORD *)(v13 + 96);
      v84 = &v48;
      v85 = 4LL;
      v49 = *(_DWORD *)(v13 + 100);
      v86 = &v49;
      v87 = 4LL;
      v50 = *(_DWORD *)(v13 + 104);
      v88 = &v50;
      v89 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0169F61, &ActivityId, v30, 0xCu, &v69);
    }
    Win32FreePool(v13);
  }
  return v11;
}
