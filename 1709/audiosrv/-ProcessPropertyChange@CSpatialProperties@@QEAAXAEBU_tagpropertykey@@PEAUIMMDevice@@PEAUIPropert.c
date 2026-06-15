/*
 * XREFs of ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800CA1E8
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180031688 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     IsSpatialOnlyFormat @ 0x1800C9610 (IsSpatialOnlyFormat.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB280 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMAT.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CB9CC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     WPP_SF_SDDDDD_guid_ @ 0x1800CD364 (WPP_SF_SDDDDD_guid_.c)
 *     WPP_SF_SDDDDD_guid_DDDDD_guid_ @ 0x1800CD450 (WPP_SF_SDDDDD_guid_DDDDD_guid_.c)
 *     WPP_SF_SDDD_guid_DD @ 0x1800CD5CC (WPP_SF_SDDD_guid_DD.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSpatialProperties::ProcessPropertyChange(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2,
        __int64 a3,
        void *a4,
        struct IPolicyConfig *a5,
        __int64 a6,
        LPCRITICAL_SECTION a7,
        int *a8)
{
  LPCRITICAL_SECTION v11; // r14
  unsigned int v12; // r15d
  int v13; // eax
  const WCHAR *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // edx
  CSpatialProperties *v18; // rcx
  const WCHAR *v19; // r14
  struct IMMDevice *v20; // rdx
  unsigned __int16 v21; // cx
  DWORD v22; // edx
  const WCHAR *v23; // rdx
  LPCGUID v24; // r9
  __int64 v25; // rax
  int v26; // edx
  unsigned __int16 v27; // r10
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // r12
  GUID v30; // xmm0
  int v31; // ebx
  const WCHAR *v32; // rdx
  unsigned __int16 v33; // r10
  unsigned int v34; // r11d
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  __int64 v37; // rax
  __int64 v38; // rbx
  int v39; // r12d
  int v40; // ebx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  int v43; // eax
  LPCGUID v44; // r8
  LPCGUID v45; // r9
  UINT32 v46; // r10d
  int v47; // eax
  __int64 v48; // rdx
  void *v49; // rcx
  const GUID *v50; // r9
  _WORD *v51; // r10
  unsigned __int16 v52; // r14
  GUID *v53; // rax
  int v54; // ebx
  unsigned __int16 v55; // ax
  LPCGUID v56; // r8
  LPCGUID v57; // r9
  int v58; // r10d
  LPCGUID v59; // r8
  LPCGUID v60; // r9
  __int64 v61; // rax
  LPCGUID v62; // r8
  LPCGUID v63; // r9
  BYTE *v64; // rbx
  unsigned __int16 v65; // r13
  int v66; // r10d
  unsigned __int16 v67; // r11
  unsigned __int16 v68; // di
  const wchar_t *v69; // r14
  const WCHAR *v70; // rdx
  int v71; // r10d
  unsigned __int16 v72; // r11
  LPCGUID v73; // r8
  LPCGUID v74; // r9
  __int64 v75; // rdx
  LPCRITICAL_SECTION OwningThread; // rcx
  int cData; // [rsp+28h] [rbp-E0h]
  unsigned __int16 v78; // [rsp+88h] [rbp-80h] BYREF
  LPCWSTR pwsz; // [rsp+90h] [rbp-78h] BYREF
  DWORD dwChannelMask; // [rsp+98h] [rbp-70h] BYREF
  int SpinCount_high; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v82; // [rsp+A0h] [rbp-68h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-58h]
  LPCRITICAL_SECTION v85; // [rsp+B8h] [rbp-50h]
  int OwningThread_high; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID v87; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v88; // [rsp+D0h] [rbp-38h] BYREF
  DWORD wValidBitsPerSample; // [rsp+D8h] [rbp-30h] BYREF
  int wBitsPerSample; // [rsp+DCh] [rbp-2Ch] BYREF
  DWORD nSamplesPerSec; // [rsp+E0h] [rbp-28h] BYREF
  int *v92; // [rsp+E8h] [rbp-20h] BYREF
  int v93; // [rsp+F0h] [rbp-18h] BYREF
  int v94; // [rsp+F4h] [rbp-14h] BYREF
  int v95[2]; // [rsp+F8h] [rbp-10h]
  __int64 v96; // [rsp+100h] [rbp-8h]
  LPCRITICAL_SECTION v97; // [rsp+108h] [rbp+0h]
  LPVOID v98[2]; // [rsp+110h] [rbp+8h] BYREF
  GUID v99; // [rsp+120h] [rbp+18h] BYREF
  GUID v100; // [rsp+130h] [rbp+28h] BYREF
  struct WAVEFORMATEXTENSIBLE v101; // [rsp+140h] [rbp+38h] BYREF
  struct tagPROPVARIANT v102; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+188h] [rbp+80h] BYREF
  DWORD *v104; // [rsp+198h] [rbp+90h]
  __int64 v105; // [rsp+1A0h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+1C8h] [rbp+C0h] BYREF
  LPVOID *p_OwningThread_high; // [rsp+1D8h] [rbp+D0h]
  __int64 v109; // [rsp+1E0h] [rbp+D8h]
  DWORD *p_nSamplesPerSec; // [rsp+1E8h] [rbp+E0h]
  __int64 v111; // [rsp+1F0h] [rbp+E8h]
  GUID *p_wBitsPerSample; // [rsp+1F8h] [rbp+F0h]
  __int64 v113; // [rsp+200h] [rbp+F8h]
  DWORD *p_wValidBitsPerSample; // [rsp+208h] [rbp+100h]
  __int64 v115; // [rsp+210h] [rbp+108h]
  GUID *p_dwChannelMask; // [rsp+218h] [rbp+110h]
  __int64 v117; // [rsp+220h] [rbp+118h]
  GUID *p_SubFormat; // [rsp+228h] [rbp+120h]
  __int64 v119; // [rsp+230h] [rbp+128h]
  LPVOID *v120; // [rsp+238h] [rbp+130h]
  __int64 v121; // [rsp+240h] [rbp+138h]
  GUID *v122; // [rsp+248h] [rbp+140h]
  __int64 v123; // [rsp+250h] [rbp+148h]
  int **v124; // [rsp+258h] [rbp+150h]
  __int64 v125; // [rsp+260h] [rbp+158h]
  LPVOID *p_pv; // [rsp+268h] [rbp+160h]
  __int64 v127; // [rsp+270h] [rbp+168h]
  int *p_SpinCount_high; // [rsp+278h] [rbp+170h]
  __int64 v129; // [rsp+280h] [rbp+178h]
  struct tagPROPVARIANT *v130; // [rsp+288h] [rbp+180h]
  __int64 v131; // [rsp+290h] [rbp+188h]

  v96 = -2LL;
  v87 = a4;
  *(_QWORD *)v95 = a3;
  v11 = a7;
  v85 = a7;
  v84 = a6;
  v97 = a7;
  v92 = a8;
  v12 = 0;
  v94 = 0;
  pwsz = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 40LL))(a3, &pwsz);
  v14 = pwsz;
  if ( v13 < 0 )
    v14 = 0LL;
  pwsz = v14;
  *a8 = 0;
  if ( a4 && a5 )
  {
    if ( *(PRTL_CRITICAL_SECTION_DEBUG *)a2 == lpCriticalSection[2].DebugInfo
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)&lpCriticalSection[2].LockCount
      && *(_DWORD *)(a2 + 16) == LODWORD(lpCriticalSection[2].OwningThread) )
    {
      memset(&v101, 0, sizeof(v101));
      v93 = 0;
      v100 = GUID_00000000_0000_0000_0000_000000000000;
      if ( !lpCriticalSection[1].DebugInfo
        || (*(int (__fastcall **)(struct IPolicyConfig *, int *))(*(_QWORD *)a5 + 192LL))(a5, &v93) < 0
        || (*(int (__fastcall **)(HANDLE))(*(_QWORD *)lpCriticalSection[1].OwningThread + 24LL))(lpCriticalSection[1].OwningThread) < 0
        || (*(int (__fastcall **)(HANDLE, int *))(*(_QWORD *)lpCriticalSection[1].OwningThread + 32LL))(
             lpCriticalSection[1].OwningThread,
             &v94) < 0
        || (*(int (__fastcall **)(HANDLE, GUID *))(*(_QWORD *)lpCriticalSection[1].OwningThread + 48LL))(
             lpCriticalSection[1].OwningThread,
             &v100) < 0 )
      {
        goto LABEL_153;
      }
      EnterCriticalSection(lpCriticalSection);
      if ( HIDWORD(lpCriticalSection[171].LockSemaphore) )
      {
        if ( (unsigned int)hProvider > 4 )
        {
          TlgCreateWsz(&pDesc, pwsz);
          LOWORD(dwChannelMask) = WORD2(lpCriticalSection[171].LockSemaphore);
          v104 = &dwChannelMask;
          v105 = 2LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111A0D, v62, v63, 4u, (EVENT_DATA_DESCRIPTOR *)&v102);
        }
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x11u,
            (__int64)&WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids,
            pwsz + 17);
        }
        if ( HIDWORD(lpCriticalSection[171].LockSemaphore) == 1 )
          HIDWORD(lpCriticalSection[171].LockSemaphore) = 2;
LABEL_131:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_153;
      }
      HIDWORD(lpCriticalSection[171].LockSemaphore) = 1;
      *(_OWORD *)v98 = *(_OWORD *)&lpCriticalSection[2].SpinCount;
      OwningThread_high = HIDWORD(lpCriticalSection[2].OwningThread);
      SpinCount_high = HIDWORD(lpCriticalSection[1].SpinCount);
      BYTE2(lpCriticalSection[1].SpinCount) = v93 != 0;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v15 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)&v102,
              (__int64)a7);
      v16 = v84;
      LOBYTE(v17) = 1;
      CSpatialProperties::SetSpatialAudioSettingsInternal(
        (int)lpCriticalSection,
        v17,
        v95[0],
        (int)a4,
        pwsz,
        v84,
        v15,
        (__int64)&v101);
      v19 = L"n/a";
      if ( LODWORD(lpCriticalSection[171].SpinCount) == 1 )
      {
        pv = 0LL;
        if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
               a5,
               pwsz,
               0LL,
               &pv) >= 0 )
          v16 = (__int64)pv;
        if ( CSpatialProperties::SetDesiredFormat(
               0LL,
               v20,
               a5,
               (unsigned __int16 *)pwsz,
               (const struct WAVEFORMATEXTENSIBLE *)((char *)&lpCriticalSection[171].SpinCount + 4)) )
        {
          if ( !v101.Format.wFormatTag )
          {
            v21 = 0;
            v78 = 0;
            v99 = GUID_00000000_0000_0000_0000_000000000000;
            v22 = 0;
            dwChannelMask = 0;
            if ( *(_WORD *)v16 == 0xFFFE )
            {
              v21 = *(_WORD *)(v16 + 18);
              v78 = v21;
              v99 = *(GUID *)(v16 + 24);
              v22 = *(_DWORD *)(v16 + 20);
              dwChannelMask = v22;
            }
            LODWORD(lpCriticalSection[171].SpinCount) = 3;
            if ( (unsigned int)hProvider > 4 )
            {
              v82 = *(unsigned __int16 *)(v16 + 2);
              v107.Ptr = (ULONGLONG)&v82;
              *(_QWORD *)&v107.Size = 4LL;
              wValidBitsPerSample = v22;
              p_OwningThread_high = (LPVOID *)&wValidBitsPerSample;
              v109 = 4LL;
              wBitsPerSample = *(_DWORD *)(v16 + 4);
              p_nSamplesPerSec = (DWORD *)&wBitsPerSample;
              v111 = 4LL;
              p_wBitsPerSample = &v99;
              v113 = 16LL;
              nSamplesPerSec = *(unsigned __int16 *)(v16 + 14);
              p_wValidBitsPerSample = &nSamplesPerSec;
              v115 = 4LL;
              LODWORD(v88) = v21;
              p_dwChannelMask = (GUID *)&v88;
              v117 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18011199D, (LPCGUID)3, 0LL, 8u, &pData);
            }
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_SDDD_guid_DD(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                18,
                *(unsigned __int16 *)(v16 + 14),
                (_DWORD)pwsz + 34,
                *(_WORD *)(v16 + 2),
                dwChannelMask,
                *(_DWORD *)(v16 + 4),
                (__int64)&v99,
                *(_WORD *)(v16 + 14),
                v78);
            }
            (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR, __int64, _QWORD))(*(_QWORD *)a5 + 48LL))(
              a5,
              pwsz,
              v16,
              0LL);
          }
          v16 = v84;
        }
        else
        {
          if ( (unsigned int)hProvider > 2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            v23 = L"n/a";
            if ( pwsz )
              v23 = pwsz;
            TlgCreateWsz(&pDesc, v23);
            TlgWrite(
              (TraceLoggingHProvider)&hProvider,
              &unk_18011185F,
              (LPCGUID)3,
              v24,
              3u,
              (EVENT_DATA_DESCRIPTOR *)&v102);
          }
          LODWORD(lpCriticalSection[171].SpinCount) = 2;
          v25 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                  (__int64)&v102,
                  (__int64)v85);
          v16 = v84;
          LOBYTE(v26) = 1;
          CSpatialProperties::SetSpatialAudioSettingsInternal(
            (int)lpCriticalSection,
            v26,
            v95[0],
            (int)v87,
            pwsz,
            v84,
            v25,
            (__int64)&v101);
        }
        v18 = (CSpatialProperties *)pv;
        if ( pv )
          CoTaskMemFree(pv);
      }
      if ( v101.Format.wFormatTag )
      {
        if ( !CSpatialProperties::SetDesiredFormat(v18, (struct IMMDevice *)5, a5, (unsigned __int16 *)pwsz, &v101)
          && v16 )
        {
          v27 = *(_WORD *)(v16 + 2);
          LOWORD(v82) = v27;
          OwningThread_high = *(_DWORD *)(v16 + 4);
          v28 = *(_WORD *)(v16 + 14);
          v78 = v28;
          if ( *(_WORD *)v16 == 0xFFFE )
          {
            v29 = *(_WORD *)(v16 + 18);
            v30 = *(GUID *)(v16 + 24);
            v31 = *(_DWORD *)(v16 + 20);
          }
          else
          {
            v29 = 0;
            v30 = GUID_00000000_0000_0000_0000_000000000000;
            v31 = 0;
          }
          *(GUID *)&v102.vt = v30;
          if ( (unsigned int)hProvider > 2 )
          {
            v32 = L"n/a";
            if ( pwsz )
              v32 = pwsz;
            TlgCreateWsz(&v107, v32);
            LODWORD(v88) = v101.Format.nChannels;
            p_OwningThread_high = &v88;
            v109 = 4LL;
            nSamplesPerSec = v101.Format.nSamplesPerSec;
            p_nSamplesPerSec = &nSamplesPerSec;
            v111 = 4LL;
            wBitsPerSample = v101.Format.wBitsPerSample;
            p_wBitsPerSample = (GUID *)&wBitsPerSample;
            v113 = 4LL;
            wValidBitsPerSample = v101.Samples.wValidBitsPerSample;
            p_wValidBitsPerSample = &wValidBitsPerSample;
            v115 = 4LL;
            dwChannelMask = v101.dwChannelMask;
            p_dwChannelMask = (GUID *)&dwChannelMask;
            v117 = 4LL;
            p_SubFormat = &v101.SubFormat;
            v119 = 16LL;
            LODWORD(v98[0]) = v33;
            v120 = v98;
            v121 = 4LL;
            v99.Data1 = v34;
            v122 = &v99;
            v123 = 4LL;
            LODWORD(v92) = v78;
            v124 = &v92;
            v125 = 4LL;
            LODWORD(pv) = v29;
            p_pv = &pv;
            v127 = 4LL;
            SpinCount_high = v31;
            p_SpinCount_high = &SpinCount_high;
            v129 = 4LL;
            v130 = &v102;
            v131 = 16LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801118C9, v35, v36, 0xFu, &pData);
            v27 = v82;
            v28 = v78;
          }
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            if ( pwsz )
              LODWORD(v19) = (_DWORD)pwsz + 34;
            WPP_SF_SDDDDD_guid_DDDDD_guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              v28,
              v27,
              (_DWORD)v19,
              v101.Format.nChannels,
              v101.Format.nSamplesPerSec,
              v101.Format.wBitsPerSample,
              v101.Samples.wValidBitsPerSample,
              v101.dwChannelMask,
              (__int64)&v101.SubFormat,
              v27,
              OwningThread_high,
              v28,
              v29,
              v31,
              (__int64)&v102);
          }
          v11 = v85;
          v37 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                  (__int64)&pData,
                  (__int64)v85);
          v38 = v84;
          v39 = (int)v87;
          CSpatialProperties::SetSpatialAudioSettingsInternal(
            (int)lpCriticalSection,
            0,
            v95[0],
            (int)v87,
            pwsz,
            v84,
            v37,
            (__int64)&v101);
LABEL_101:
          v55 = 0;
          v78 = 0;
          v85 = lpCriticalSection;
          while ( 1 )
          {
            v87 = 0LL;
            if ( v55 == 3 && (unsigned int)hProvider > 2 )
            {
              TlgCreateWsz(&pDesc, pwsz);
              LOWORD(v82) = WORD2(lpCriticalSection[171].LockSemaphore);
              v104 = (DWORD *)&v82;
              v105 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801116C2, v56, v57, 4u, (EVENT_DATA_DESCRIPTOR *)&v102);
            }
            EnterCriticalSection(lpCriticalSection);
            if ( HIDWORD(lpCriticalSection[171].LockSemaphore) < 2 )
              break;
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&v107, pwsz);
              p_OwningThread_high = (LPVOID *)&v78;
              v109 = 2LL;
              LOWORD(dwChannelMask) = WORD2(lpCriticalSection[171].LockSemaphore);
              p_nSamplesPerSec = &dwChannelMask;
              v111 = 2LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801117FF, v59, v60, v58 + 5, &pData);
            }
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              cData = HIDWORD(lpCriticalSection[171].LockSemaphore);
              WPP_SF_Sd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x15u,
                (__int64)&WPP_c60d31e5227a3b60c341af8111bf1f82_Traceguids,
                pwsz + 17);
            }
            if ( HIDWORD(lpCriticalSection[171].LockSemaphore) != 3 )
            {
              HIDWORD(lpCriticalSection[171].LockSemaphore) = 0;
              (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)lpCriticalSection[1].DebugInfo + 32LL))(lpCriticalSection[1].DebugInfo);
              goto LABEL_131;
            }
            HIDWORD(lpCriticalSection[171].LockSemaphore) = 1;
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _QWORD, LPVOID *, int))(*(_QWORD *)a5 + 32LL))(
                   a5,
                   pwsz,
                   0LL,
                   &v87,
                   cData) >= 0 )
              v38 = (__int64)v87;
            v61 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                    (__int64)&pData,
                    (__int64)v11);
            CSpatialProperties::SetSpatialAudioSettingsInternal(
              (int)lpCriticalSection,
              0,
              v95[0],
              v39,
              pwsz,
              v38,
              v61,
              (__int64)&v101);
            if ( v87 )
              CoTaskMemFree(v87);
            v55 = v78 + 1;
            v78 = v55;
            v38 = v84;
            if ( v55 >= 5u )
              goto LABEL_153;
          }
          HIDWORD(lpCriticalSection[171].LockSemaphore) = 0;
          goto LABEL_131;
        }
      }
      else
      {
        *(_OWORD *)&v102.vt = *(_OWORD *)&lpCriticalSection[2].SpinCount;
        v40 = HIDWORD(lpCriticalSection[2].OwningThread);
        if ( v40 != OwningThread_high || HIDWORD(lpCriticalSection[1].SpinCount) != SpinCount_high )
          goto LABEL_65;
        if ( v40 )
        {
          v41 = *(_QWORD *)&v102.vt - (unsigned __int64)v98[0];
          if ( *(LPVOID *)&v102.vt == v98[0] )
            v41 = v102.hVal.QuadPart - (unsigned __int64)v98[1];
          if ( v41 )
            goto LABEL_65;
        }
        v42 = *(_QWORD *)&v100.Data1 - *(_QWORD *)&lpCriticalSection[171].RecursionCount;
        if ( *(_QWORD *)&v100.Data1 == *(_QWORD *)&lpCriticalSection[171].RecursionCount )
          v42 = *(_QWORD *)v100.Data4 - *(unsigned __int64 *)((char *)&lpCriticalSection[171].OwningThread + 4);
        v43 = 0;
        if ( v42 )
LABEL_65:
          v43 = 1;
        *v92 = v43;
        if ( v43 && (unsigned int)hProvider > 5 )
        {
          if ( pwsz )
            v19 = pwsz;
          TlgCreateWsz(&pDesc, v19);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18011189D, v44, v45, v46, (EVENT_DATA_DESCRIPTOR *)&v102);
        }
        v88 = 0LL;
        v47 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
                a5,
                pwsz,
                0LL,
                &v88);
        v48 = v84;
        v49 = v88;
        if ( v47 >= 0 )
          v48 = (__int64)v88;
        if ( pwsz && !v40 && !v94 && v48 && *(_WORD *)v48 == 0xFFFE )
        {
          if ( IsSpatialOnlyFormat((_QWORD *)(v48 + 24)) )
          {
            v98[0] = 0LL;
            if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, __int64, LPVOID *))(*(_QWORD *)a5 + 32LL))(
                   a5,
                   pwsz,
                   1LL,
                   v98) >= 0 )
            {
              v51 = v98[0];
              if ( *(_WORD *)v98[0] == 0xFFFE )
                v52 = *((_WORD *)v98[0] + 9);
              else
                v52 = 0;
              v53 = (GUID *)((char *)v98[0] + 24);
              if ( *(_WORD *)v98[0] != 0xFFFE )
                v53 = &GUID_00000000_0000_0000_0000_000000000000;
              *(GUID *)&v102.vt = *v53;
              if ( *(_WORD *)v98[0] == 0xFFFE )
                v54 = *((_DWORD *)v98[0] + 5);
              else
                v54 = 0;
              if ( (unsigned int)hProvider > 4 )
              {
                OwningThread_high = *((unsigned __int16 *)v98[0] + 1);
                v107.Ptr = (ULONGLONG)&OwningThread_high;
                *(_QWORD *)&v107.Size = 4LL;
                SpinCount_high = v54;
                p_OwningThread_high = (LPVOID *)&SpinCount_high;
                v109 = 4LL;
                LODWORD(pv) = *((_DWORD *)v98[0] + 1);
                p_nSamplesPerSec = (DWORD *)&pv;
                v111 = 4LL;
                p_wBitsPerSample = (GUID *)&v102;
                v113 = 16LL;
                LODWORD(v92) = *((unsigned __int16 *)v98[0] + 7);
                p_wValidBitsPerSample = (DWORD *)&v92;
                v115 = 4LL;
                v99.Data1 = v52;
                p_dwChannelMask = &v99;
                v117 = 4LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180111715, 0LL, v50, 8u, &pData);
                v51 = v98[0];
              }
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_SDDD_guid_DD(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  20,
                  (unsigned __int16)v51[1],
                  (_DWORD)pwsz + 34,
                  v51[1],
                  v54,
                  *((_DWORD *)v51 + 1),
                  (__int64)&v102,
                  v51[7],
                  v52);
                v51 = v98[0];
              }
              (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _WORD *, _QWORD))(*(_QWORD *)a5 + 48LL))(
                a5,
                pwsz,
                v51,
                0LL);
            }
            if ( v98[0] )
              CoTaskMemFree(v98[0]);
          }
          v49 = v88;
        }
        if ( v49 )
        {
          CoTaskMemFree(v49);
          v38 = v84;
          v11 = v85;
          v39 = (int)v87;
          goto LABEL_101;
        }
      }
      v39 = (int)v87;
      v11 = v85;
      v38 = v84;
      goto LABEL_101;
    }
    memset(&v102, 0, sizeof(v102));
    if ( *(_QWORD *)a2 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4
      && !*(_DWORD *)(a2 + 16)
      && (*(int (__fastcall **)(void *, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)a4 + 40LL))(
           a4,
           &PKEY_AudioEngine_DeviceFormat,
           &v102) >= 0
      && IsValidWfxBlob(&v102) )
    {
      v64 = v102.bstrblobVal.pData;
      if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v102.bstrblobVal.pData) >= 0 )
      {
        v65 = *((_WORD *)v64 + 1);
        v66 = *((_DWORD *)v64 + 1);
        LODWORD(v98[0]) = v66;
        v67 = *((_WORD *)v64 + 7);
        LOWORD(dwChannelMask) = v67;
        v68 = 0;
        v100 = GUID_00000000_0000_0000_0000_000000000000;
        if ( *(_WORD *)v64 == 0xFFFE )
        {
          v68 = *((_WORD *)v64 + 9);
          v12 = *((_DWORD *)v64 + 5);
          v100 = *(GUID *)(v64 + 24);
        }
        v69 = L"n/a";
        if ( (unsigned int)hProvider > 4 )
        {
          v70 = L"n/a";
          if ( pwsz )
            v70 = pwsz;
          TlgCreateWsz(&v107, v70);
          OwningThread_high = v65;
          p_OwningThread_high = (LPVOID *)&OwningThread_high;
          v109 = 4LL;
          SpinCount_high = v71;
          p_nSamplesPerSec = (DWORD *)&SpinCount_high;
          v111 = 4LL;
          LODWORD(pv) = v72;
          p_wBitsPerSample = (GUID *)&pv;
          v113 = 4LL;
          LODWORD(v92) = v68;
          p_wValidBitsPerSample = (DWORD *)&v92;
          v115 = 4LL;
          v99.Data1 = v12;
          p_dwChannelMask = &v99;
          v117 = 4LL;
          p_SubFormat = &v100;
          v119 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18011177C, v73, v74, 9u, &pData);
          LOBYTE(v66) = v98[0];
          v67 = dwChannelMask;
        }
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x1000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          if ( pwsz )
            LODWORD(v69) = (_DWORD)pwsz + 34;
          WPP_SF_SDDDDD_guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            22,
            v67,
            (_DWORD)v69,
            v65,
            v66,
            v67,
            v68,
            v12,
            (__int64)&v100);
        }
        v11 = v85;
      }
    }
    PropVariantClear((PROPVARIANT *)&v102);
  }
LABEL_153:
  CoTaskMemFree((LPVOID)pwsz);
  OwningThread = (LPCRITICAL_SECTION)v11[1].OwningThread;
  if ( OwningThread )
  {
    LOBYTE(v75) = OwningThread != v11;
    (*(void (__fastcall **)(LPCRITICAL_SECTION, __int64))&OwningThread->DebugInfo->EntryCount)(OwningThread, v75);
    v11[1].OwningThread = 0LL;
  }
}
