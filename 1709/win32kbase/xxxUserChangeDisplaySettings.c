/*
 * XREFs of xxxUserChangeDisplaySettings @ 0x1C0064CF0
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0064B40 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0067180 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  unsigned int v10; // r13d
  _DWORD *v11; // rax
  __int64 v12; // rbx
  struct _UNICODE_STRING *v13; // rdx
  USHORT Length; // r8
  void *v15; // r9
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  ULONG64 v19; // rdx
  WCHAR *v20; // rax
  __int64 v21; // r8
  PWSTR Buffer; // r9
  __int64 v23; // rdx
  int v24; // r10d
  __int64 v25; // rcx
  WORD dmSize; // cx
  char *v27; // rdx
  unsigned int v28; // r9d
  const GUID *v29; // r9
  LPCGUID v31; // r9
  char v32; // [rsp+40h] [rbp-298h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-294h]
  struct _UNICODE_STRING v34; // [rsp+50h] [rbp-288h]
  BOOL v35; // [rsp+60h] [rbp-278h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-274h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-270h] BYREF
  int v38; // [rsp+6Ch] [rbp-26Ch] BYREF
  int v39; // [rsp+70h] [rbp-268h] BYREF
  int v40; // [rsp+74h] [rbp-264h] BYREF
  int v41; // [rsp+78h] [rbp-260h] BYREF
  int v42; // [rsp+7Ch] [rbp-25Ch] BYREF
  int v43; // [rsp+80h] [rbp-258h] BYREF
  int v44; // [rsp+84h] [rbp-254h] BYREF
  int v45; // [rsp+88h] [rbp-250h] BYREF
  int v46; // [rsp+8Ch] [rbp-24Ch] BYREF
  int v47; // [rsp+90h] [rbp-248h] BYREF
  _DWORD *v48; // [rsp+98h] [rbp-240h]
  struct _devicemodeW *v49; // [rsp+A0h] [rbp-238h]
  __int64 v50; // [rsp+A8h] [rbp-230h] BYREF
  int v51; // [rsp+B0h] [rbp-228h]
  __int64 v52; // [rsp+B8h] [rbp-220h]
  __int64 v53; // [rsp+C0h] [rbp-218h] BYREF
  WCHAR *v54; // [rsp+C8h] [rbp-210h]
  __int64 v55; // [rsp+D0h] [rbp-208h]
  void *v56; // [rsp+D8h] [rbp-200h]
  struct _UNICODE_STRING *v57; // [rsp+E0h] [rbp-1F8h]
  void *v58; // [rsp+E8h] [rbp-1F0h]
  struct _devicemodeW *v59; // [rsp+F0h] [rbp-1E8h]
  PWSTR v60; // [rsp+F8h] [rbp-1E0h]
  __int64 v61; // [rsp+100h] [rbp-1D8h]
  __int64 v62; // [rsp+108h] [rbp-1D0h]
  __int64 v63; // [rsp+110h] [rbp-1C8h]
  struct _UNICODE_STRING v64; // [rsp+120h] [rbp-1B8h]
  GUID ActivityId; // [rsp+130h] [rbp-1A8h] BYREF
  EVENT_DATA_DESCRIPTOR v66; // [rsp+140h] [rbp-198h] BYREF
  int *v67; // [rsp+160h] [rbp-178h]
  __int64 v68; // [rsp+168h] [rbp-170h]
  int *v69; // [rsp+170h] [rbp-168h]
  __int64 v70; // [rsp+178h] [rbp-160h]
  int *v71; // [rsp+180h] [rbp-158h]
  __int64 v72; // [rsp+188h] [rbp-150h]
  int *v73; // [rsp+190h] [rbp-148h]
  __int64 v74; // [rsp+198h] [rbp-140h]
  int *v75; // [rsp+1A0h] [rbp-138h]
  __int64 v76; // [rsp+1A8h] [rbp-130h]
  int *v77; // [rsp+1B0h] [rbp-128h]
  __int64 v78; // [rsp+1B8h] [rbp-120h]
  int *v79; // [rsp+1C0h] [rbp-118h]
  __int64 v80; // [rsp+1C8h] [rbp-110h]
  int *v81; // [rsp+1D0h] [rbp-108h]
  __int64 v82; // [rsp+1D8h] [rbp-100h]
  int *v83; // [rsp+1E0h] [rbp-F8h]
  __int64 v84; // [rsp+1E8h] [rbp-F0h]
  int *v85; // [rsp+1F0h] [rbp-E8h]
  __int64 v86; // [rsp+1F8h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp-B8h] BYREF
  BOOL *v89; // [rsp+230h] [rbp-A8h]
  __int64 v90; // [rsp+238h] [rbp-A0h]
  unsigned int *v91; // [rsp+240h] [rbp-98h]
  __int64 v92; // [rsp+248h] [rbp-90h]
  int *v93; // [rsp+250h] [rbp-88h]
  __int64 v94; // [rsp+258h] [rbp-80h]
  __int64 *v95; // [rsp+260h] [rbp-78h]
  __int64 v96; // [rsp+268h] [rbp-70h]
  __int64 *v97; // [rsp+270h] [rbp-68h]
  __int64 v98; // [rsp+278h] [rbp-60h]
  char *v99; // [rsp+280h] [rbp-58h]
  __int64 v100; // [rsp+288h] [rbp-50h]

  v57 = a1;
  v49 = a2;
  v59 = a2;
  v56 = a5;
  v58 = a5;
  v53 = 0LL;
  v34 = (struct _UNICODE_STRING)0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v55 = MEMORY[0xFFFFF78000000320];
  v50 = v55 * KeQueryTimeIncrement();
  v10 = xxxUserChangeDisplaySettingsInternal(a1, a2, a3, a4, a5, a6, a7);
  v33 = v10;
  v11 = Win32AllocPoolZInit(0x90uLL, 1682142037LL);
  v12 = (__int64)v11;
  v48 = v11;
  if ( v11 )
  {
    *v11 = 4;
    v11[1] = 144;
    v11[10] = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    if ( a1 )
    {
      if ( a6 == UserMode )
      {
        v13 = a1;
        if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
          v13 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v64 = *v13;
        v34 = v64;
      }
      else
      {
        v34 = *a1;
      }
    }
    Length = v34.Length;
    v15 = v56;
    *((_QWORD *)v11 + 7) = v50;
    v16 = v11[35] & 0xFFFFFFFE | (v59 != 0LL);
    v11[35] = v16;
    if ( !a1 || !Length || (v17 = 2, !v34.Buffer) )
      v17 = 0;
    v18 = (v15 == 0LL ? 8 : 0) | (a6 == KernelMode ? 4 : 0) | v17 & 0xFFFFFFF3 | v16 & 0xFFFFFFF1;
    *(_DWORD *)(v12 + 140) = v18;
    *(_DWORD *)(v12 + 48) = a4;
    *(_DWORD *)(v12 + 52) = v10;
    if ( (v18 & 2) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( Length )
        {
          v19 = (ULONG64)v34.Buffer + Length;
          if ( v19 > MmUserProbeAddress || (PWSTR)v19 < v34.Buffer )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v20 = (WCHAR *)(v12 + 108);
      v51 = 0;
      v21 = 2147483646LL;
      v62 = 2147483646LL;
      Buffer = v34.Buffer;
      v60 = v34.Buffer;
      v23 = 16LL;
      v61 = 16LL;
      v54 = (WCHAR *)(v12 + 108);
      v24 = 0;
      v25 = 0LL;
      v52 = 0LL;
      while ( v23 )
      {
        if ( !v21 || !*Buffer )
          goto LABEL_22;
        *v20++ = *Buffer;
        v54 = v20;
        v60 = ++Buffer;
        v61 = --v23;
        v62 = --v21;
        v52 = ++v25;
      }
      v54 = --v20;
      v52 = v25 - 1;
      v24 = -2147483643;
LABEL_22:
      *v20 = 0;
      v51 = v24;
      if ( v24 < 0 )
        *(_WORD *)(v12 + 108) = 0;
    }
    if ( (*(_DWORD *)(v12 + 140) & 1) != 0 )
    {
      if ( a6 == UserMode )
      {
        if ( ((unsigned __int8)a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        dmSize = a2->dmSize;
        if ( dmSize )
        {
          v27 = (char *)a2 + dmSize;
          if ( (unsigned __int64)v27 > MmUserProbeAddress || v27 < (char *)a2 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else
      {
        dmSize = a2->dmSize;
      }
      if ( dmSize >= 0xB4u )
      {
        *(_DWORD *)(v12 + 64) = a2->dmFields;
        *(_QWORD *)(v12 + 68) = *(_QWORD *)&a2->dmOrientation;
        *(_DWORD *)(v12 + 76) = a2->dmBitsPerPel;
        *(_DWORD *)(v12 + 80) = a2->dmPelsWidth;
        *(_DWORD *)(v12 + 84) = a2->dmPelsHeight;
        *(_DWORD *)(v12 + 88) = a2->dmDisplayFrequency;
        *(_DWORD *)(v12 + 92) = a2->dmDriverExtra;
        *(_DWORD *)(v12 + 96) = a2->dmDisplayOrientation;
        *(_DWORD *)(v12 + 100) = a2->dmDisplayFixedOutput;
        *(_DWORD *)(v12 + 104) = a2->dmDisplayFlags;
      }
    }
    DrvDxgkWriteDiagEntry(v12);
    v63 = MEMORY[0xFFFFF78000000320];
    v53 = v63 * KeQueryTimeIncrement();
    EtwActivityIdControl(3u, &ActivityId);
    v28 = dword_1C01880D0;
    if ( dword_1C01880D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x200000000004uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)(v12 + 108));
      v35 = a2 == 0LL;
      v89 = &v35;
      v90 = 4LL;
      v36 = a4;
      v91 = &v36;
      v92 = 4LL;
      v37 = v10;
      v93 = (int *)&v37;
      v94 = 4LL;
      v95 = &v50;
      v96 = 8LL;
      v97 = &v53;
      v98 = 8LL;
      v32 = a6;
      v99 = &v32;
      v100 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A3A4, &ActivityId, v31, 9u, &pData);
      v28 = dword_1C01880D0;
    }
    if ( (*(_DWORD *)(v12 + 140) & 1) != 0
      && v28 > 5
      && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01880D0, 0x200000000004uLL) )
    {
      v38 = *(_DWORD *)(v12 + 64);
      v67 = &v38;
      v68 = 4LL;
      v39 = *(_DWORD *)(v12 + 68);
      v69 = &v39;
      v70 = 4LL;
      v40 = *(_DWORD *)(v12 + 72);
      v71 = &v40;
      v72 = 4LL;
      v41 = *(_DWORD *)(v12 + 80);
      v73 = &v41;
      v74 = 4LL;
      v42 = *(_DWORD *)(v12 + 84);
      v75 = &v42;
      v76 = 4LL;
      v43 = *(_DWORD *)(v12 + 88);
      v77 = &v43;
      v78 = 4LL;
      v44 = *(_DWORD *)(v12 + 92);
      v79 = &v44;
      v80 = 4LL;
      v45 = *(_DWORD *)(v12 + 96);
      v81 = &v45;
      v82 = 4LL;
      v46 = *(_DWORD *)(v12 + 100);
      v83 = &v46;
      v84 = 4LL;
      v47 = *(_DWORD *)(v12 + 104);
      v85 = &v47;
      v86 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01880D0, &unk_1C016A317, &ActivityId, v29, 0xCu, &v66);
    }
    Win32FreePool(v12);
  }
  return v10;
}
