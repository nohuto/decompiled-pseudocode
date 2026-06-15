/*
 * XREFs of ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18005FB98 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005FC78 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800EC9AC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x1800FDD24 (IsSpatialOnlyFormat.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800FEB34 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMAT.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSpatialProperties::ProcessPropertyChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IPolicyConfig *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        int *a8)
{
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  struct tWAVEFORMATEX *v16; // rbx
  CSpatialProperties *v17; // rcx
  struct IMMDevice *v18; // rdx
  CSpatialProperties *v19; // rcx
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  __int64 v22; // rbx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  __int64 v25; // rax
  struct tWAVEFORMATEX *v26; // rbx
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  __int64 v29; // rax
  int v30; // ebx
  char *v31; // rax
  __int64 v32; // rax
  bool v33; // zf
  int v34; // eax
  const WCHAR *v35; // rdx
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  UINT32 cData; // r11d
  int v39; // eax
  _QWORD *p_wFormatTag; // rdx
  void *v41; // rcx
  LPCGUID v42; // r8
  LPCGUID v43; // r9
  unsigned __int16 v44; // ax
  LPCGUID v45; // r8
  LPCGUID v46; // r9
  unsigned int v47; // eax
  LPCGUID v48; // r8
  LPCGUID v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rcx
  void (__fastcall *v52)(_QWORD *, char); // rax
  LPCGUID v53; // r8
  LPCGUID v54; // r9
  __int64 v55; // rax
  LPCGUID v56; // r8
  LPCGUID v57; // r9
  LPCWSTR pwsz; // [rsp+48h] [rbp-C0h] BYREF
  DWORD Ptr_high; // [rsp+50h] [rbp-B8h] BYREF
  int Ptr_low; // [rsp+54h] [rbp-B4h] BYREF
  struct tWAVEFORMATEX *v61; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+60h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  struct tWAVEFORMATEX *v64; // [rsp+70h] [rbp-98h]
  LPVOID v65; // [rsp+78h] [rbp-90h] BYREF
  struct tWAVEFORMATEX *v66; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  int *v68; // [rsp+90h] [rbp-78h] BYREF
  int Size_high; // [rsp+98h] [rbp-70h] BYREF
  int v70; // [rsp+A0h] [rbp-68h] BYREF
  int v71; // [rsp+A4h] [rbp-64h] BYREF
  int v72[2]; // [rsp+A8h] [rbp-60h]
  int v73[2]; // [rsp+B0h] [rbp-58h]
  __int64 v74; // [rsp+B8h] [rbp-50h]
  __int64 v75; // [rsp+C0h] [rbp-48h]
  LPVOID pv[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+D8h] [rbp-30h] BYREF
  struct WAVEFORMATEXTENSIBLE v78; // [rsp+F0h] [rbp-18h] BYREF
  GUID v79; // [rsp+118h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v80; // [rsp+128h] [rbp+20h] BYREF
  int v81; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v83; // [rsp+158h] [rbp+50h]
  __int64 v84; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+188h] [rbp+80h] BYREF
  struct tWAVEFORMATEX **p_Ptr_low; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  __int64 *v89; // [rsp+1A8h] [rbp+A0h]
  __int64 v90; // [rsp+1B0h] [rbp+A8h]
  LPVOID *p_Ptr_high; // [rsp+1B8h] [rbp+B0h]
  __int64 v92; // [rsp+1C0h] [rbp+B8h]
  int **v93; // [rsp+1C8h] [rbp+C0h]
  __int64 v94; // [rsp+1D0h] [rbp+C8h]
  LPVOID *v95; // [rsp+1D8h] [rbp+D0h]
  __int64 v96; // [rsp+1E0h] [rbp+D8h]
  struct tWAVEFORMATEX **p_Reserved; // [rsp+1E8h] [rbp+E0h]
  __int64 v98; // [rsp+1F0h] [rbp+E8h]
  int *v99; // [rsp+1F8h] [rbp+F0h]
  __int64 v100; // [rsp+200h] [rbp+F8h]
  int **v101; // [rsp+208h] [rbp+100h]
  __int64 v102; // [rsp+210h] [rbp+108h]
  LPVOID *v103; // [rsp+218h] [rbp+110h]
  __int64 v104; // [rsp+220h] [rbp+118h]
  __int64 *v105; // [rsp+228h] [rbp+120h]
  __int64 v106; // [rsp+230h] [rbp+128h]
  struct tWAVEFORMATEX **v107; // [rsp+238h] [rbp+130h]
  __int64 v108; // [rsp+240h] [rbp+138h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v109; // [rsp+248h] [rbp+140h]
  __int64 v110; // [rsp+250h] [rbp+148h]

  v74 = -2LL;
  *(_QWORD *)v73 = a4;
  *(_QWORD *)v72 = a3;
  v11 = a7;
  v62 = a7;
  v64 = a6;
  v75 = a7;
  v68 = a8;
  v71 = 0;
  pwsz = 0LL;
  if ( (*(int (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 40LL))(a3, &pwsz) < 0 )
    goto LABEL_87;
  *a8 = 0;
  if ( !a4 || !a5 )
    goto LABEL_87;
  v13 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)a2 == *(_QWORD *)(a1 + 80) )
    v13 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(a1 + 88);
  if ( v13 || *(_DWORD *)(a2 + 16) != *(_DWORD *)(a1 + 96) )
  {
    memset(&pvar, 0, sizeof(pvar));
    v55 = *(_QWORD *)a2 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
      v55 = *(_QWORD *)(a2 + 8) - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
    if ( !v55
      && !*(_DWORD *)(a2 + 16)
      && (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)a4 + 40LL))(
           a4,
           &PKEY_AudioEngine_DeviceFormat,
           &pvar) >= 0
      && IsValidWfxBlob(&pvar)
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
    {
      AudioFormatForLogging::AudioFormatForLogging(
        (AudioFormatForLogging *)&v80,
        (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
      if ( (unsigned int)hProvider > 4 )
      {
        TlgCreateWsz(&pDesc, pwsz);
        LODWORD(v61) = LOWORD(v80.Ptr);
        p_Ptr_low = &v61;
        v88 = 4LL;
        LODWORD(v67) = HIDWORD(v80.Ptr);
        v89 = &v67;
        v90 = 4LL;
        LODWORD(pv[0]) = LOWORD(v80.Size);
        p_Ptr_high = pv;
        v92 = 4LL;
        LODWORD(v68) = HIWORD(v80.Size);
        v93 = &v68;
        v94 = 4LL;
        Size_high = v81;
        v95 = (LPVOID *)&Size_high;
        v96 = 4LL;
        p_Reserved = (struct tWAVEFORMATEX **)&v80.Reserved;
        v98 = 16LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148597, v56, v57, 9u, &pData);
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_87;
  }
  memset_0(&v78, 0, sizeof(v78));
  v70 = 0;
  v79 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !*(_QWORD *)(a1 + 40)
    || (*(int (__fastcall **)(struct IPolicyConfig *, int *))(*(_QWORD *)a5 + 192LL))(a5, &v70) < 0
    || (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56)) < 0
    || (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56), &v71) < 0
    || (*(int (__fastcall **)(_QWORD, GUID *))(**(_QWORD **)(a1 + 56) + 48LL))(*(_QWORD *)(a1 + 56), &v79) < 0 )
  {
    goto LABEL_87;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v14 = *(_DWORD *)(a1 + 6868);
  if ( !v14 )
  {
    *(_DWORD *)(a1 + 6868) = 1;
    *(_OWORD *)&pvar.vt = *(_OWORD *)(a1 + 112);
    LODWORD(v61) = *(_DWORD *)(a1 + 100);
    LODWORD(v67) = *(_DWORD *)(a1 + 76);
    *(_BYTE *)(a1 + 74) = v70 != 0;
    if ( a1 )
      LeaveCriticalSection((LPCRITICAL_SECTION)a1);
    v15 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
            (__int64)&v80,
            a7);
    v16 = v64;
    CSpatialProperties::SetSpatialAudioSettingsInternal(a1, 1u, *(struct IMMDevice **)v72, a4, pwsz, v64, v15, &v78);
    if ( *(_DWORD *)(a1 + 6872) == 1 )
    {
      pv[0] = 0LL;
      if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
             a5,
             pwsz,
             0LL,
             pv) >= 0 )
        v16 = (struct tWAVEFORMATEX *)pv[0];
      if ( CSpatialProperties::SetDesiredFormat(
             v19,
             v18,
             a5,
             (unsigned __int16 *)pwsz,
             (const struct WAVEFORMATEXTENSIBLE *)(a1 + 6876)) )
      {
        if ( !v78.Format.wFormatTag )
        {
          AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v80, v16);
          *(_DWORD *)(a1 + 6872) = 3;
          if ( (unsigned int)hProvider > 4 )
          {
            TlgCreateWsz(&pDesc, pwsz);
            Ptr_low = LOWORD(v80.Ptr);
            p_Ptr_low = (struct tWAVEFORMATEX **)&Ptr_low;
            v88 = 4LL;
            LODWORD(v63) = v81;
            v89 = &v63;
            v90 = 4LL;
            Ptr_high = HIDWORD(v80.Ptr);
            p_Ptr_high = (LPVOID *)&Ptr_high;
            v92 = 4LL;
            v93 = (int **)&v80.Reserved;
            v94 = 16LL;
            LODWORD(v65) = LOWORD(v80.Size);
            v95 = &v65;
            v96 = 4LL;
            LODWORD(v66) = HIWORD(v80.Size);
            p_Reserved = &v66;
            v98 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801487E0, v20, v21, 9u, &pData);
          }
          (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR, struct tWAVEFORMATEX *, _QWORD))(*(_QWORD *)a5 + 48LL))(
            a5,
            pwsz,
            v16,
            0LL);
        }
        v22 = v62;
      }
      else
      {
        if ( (unsigned int)hProvider > 2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          TlgCreateWsz(&v82, pwsz);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014885C, v27, v28, 3u, &v80);
        }
        *(_DWORD *)(a1 + 6872) = 2;
        v22 = v62;
        v29 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
                (__int64)&v80,
                v62);
        CSpatialProperties::SetSpatialAudioSettingsInternal(
          a1,
          1u,
          *(struct IMMDevice **)v72,
          *(__int64 *)v73,
          pwsz,
          v64,
          v29,
          &v78);
      }
      v17 = (CSpatialProperties *)pv[0];
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
    }
    else
    {
      v22 = v62;
    }
    if ( v78.Format.wFormatTag )
    {
      if ( !CSpatialProperties::SetDesiredFormat(v17, (struct IMMDevice *)5, a5, (unsigned __int16 *)pwsz, &v78) && v64 )
      {
        AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v80, v64);
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateWsz(&pDesc, pwsz);
          LODWORD(v66) = v78.Format.nChannels;
          p_Ptr_low = &v66;
          v88 = 4LL;
          LODWORD(v65) = v78.Format.nSamplesPerSec;
          v89 = (__int64 *)&v65;
          v90 = 4LL;
          Ptr_low = v78.Format.wBitsPerSample;
          p_Ptr_high = (LPVOID *)&Ptr_low;
          v92 = 4LL;
          LODWORD(v63) = v78.Samples.wValidBitsPerSample;
          v93 = (int **)&v63;
          v94 = 4LL;
          Ptr_high = v78.dwChannelMask;
          v95 = (LPVOID *)&Ptr_high;
          v96 = 4LL;
          p_Reserved = (struct tWAVEFORMATEX **)&v78.SubFormat;
          v98 = 16LL;
          Size_high = LOWORD(v80.Ptr);
          v99 = &Size_high;
          v100 = 4LL;
          LODWORD(v68) = HIDWORD(v80.Ptr);
          v101 = &v68;
          v102 = 4LL;
          LODWORD(pv[0]) = LOWORD(v80.Size);
          v103 = pv;
          v104 = 4LL;
          LODWORD(v67) = HIWORD(v80.Size);
          v105 = &v67;
          v106 = 4LL;
          LODWORD(v61) = v81;
          v107 = &v61;
          v108 = 4LL;
          v109 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v80.Reserved;
          v110 = 16LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801486E0, v23, v24, 0xFu, &pData);
        }
        v25 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
                (__int64)&pData,
                v22);
        v26 = v64;
        CSpatialProperties::SetSpatialAudioSettingsInternal(
          a1,
          0,
          *(struct IMMDevice **)v72,
          *(__int64 *)v73,
          pwsz,
          v64,
          v25,
          &v78);
LABEL_71:
        LOWORD(Ptr_high) = 0;
        v44 = 0;
        v67 = a1;
        while ( 1 )
        {
          v61 = 0LL;
          if ( v44 == 3 && (unsigned int)hProvider > 2 )
          {
            TlgCreateWsz(&v82, pwsz);
            LOWORD(v63) = *(_WORD *)(a1 + 6868);
            v83 = &v63;
            v84 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014868D, v45, v46, 4u, &v80);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)a1);
          v47 = *(_DWORD *)(a1 + 6868);
          if ( v47 <= 1 )
            break;
          if ( (unsigned int)hProvider > 4 )
          {
            TlgCreateWsz(&pDesc, pwsz);
            p_Ptr_low = (struct tWAVEFORMATEX **)&Ptr_high;
            v88 = 2LL;
            LOWORD(Ptr_low) = *(_WORD *)(a1 + 6868);
            v89 = (__int64 *)&Ptr_low;
            v90 = 2LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180148537, v48, v49, 5u, &pData);
            v47 = *(_DWORD *)(a1 + 6868);
          }
          if ( v47 != 3 )
          {
            *(_DWORD *)(a1 + 6868) = 0;
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40));
            goto LABEL_93;
          }
          *(_DWORD *)(a1 + 6868) = 1;
          if ( a1 )
            LeaveCriticalSection((LPCRITICAL_SECTION)a1);
          if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)a5 + 32LL))(
                 a5,
                 pwsz,
                 0LL,
                 &v61) >= 0 )
            v26 = v61;
          v50 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
                  (__int64)&pData,
                  v62);
          CSpatialProperties::SetSpatialAudioSettingsInternal(
            a1,
            0,
            *(struct IMMDevice **)v72,
            *(__int64 *)v73,
            pwsz,
            v26,
            v50,
            &v78);
          if ( v61 )
            CoTaskMemFree(v61);
          v44 = Ptr_high + 1;
          LOWORD(Ptr_high) = v44;
          v26 = v64;
          if ( v44 >= 5u )
            goto LABEL_86;
        }
        *(_DWORD *)(a1 + 6868) = 0;
        goto LABEL_93;
      }
    }
    else
    {
      *(_OWORD *)pv = *(_OWORD *)(a1 + 112);
      v30 = *(_DWORD *)(a1 + 100);
      if ( v30 != (_DWORD)v61 || *(_DWORD *)(a1 + 76) != (_DWORD)v67 )
        goto LABEL_47;
      if ( v30 )
      {
        v31 = (char *)pv[0] - *(_QWORD *)&pvar.vt;
        if ( pv[0] == *(LPVOID *)&pvar.vt )
          v31 = (char *)pv[1] - pvar.hVal.QuadPart;
        if ( v31 )
          goto LABEL_47;
      }
      v32 = *(_QWORD *)&v79.Data1 - *(_QWORD *)(a1 + 6852);
      if ( *(_QWORD *)&v79.Data1 == *(_QWORD *)(a1 + 6852) )
        v32 = *(_QWORD *)v79.Data4 - *(_QWORD *)(a1 + 6860);
      v33 = v32 == 0;
      v34 = 0;
      if ( !v33 )
LABEL_47:
        v34 = 1;
      *v68 = v34;
      if ( v34 && (unsigned int)hProvider > 5 )
      {
        v35 = L"n/a";
        if ( pwsz )
          v35 = pwsz;
        TlgCreateWsz(&v82, v35);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801487B4, v36, v37, cData, &v80);
      }
      v65 = 0LL;
      v39 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, LPCWSTR, _QWORD, LPVOID *))(*(_QWORD *)a5 + 32LL))(
              a5,
              pwsz,
              0LL,
              &v65);
      p_wFormatTag = &v64->wFormatTag;
      v41 = v65;
      if ( v39 >= 0 )
        p_wFormatTag = v65;
      if ( pwsz && !v30 && !v71 && p_wFormatTag && *(_WORD *)p_wFormatTag == 0xFFFE )
      {
        if ( IsSpatialOnlyFormat(p_wFormatTag + 3) )
        {
          v66 = 0LL;
          if ( (*(int (__fastcall **)(struct IPolicyConfig *, LPCWSTR, __int64, struct tWAVEFORMATEX **))(*(_QWORD *)a5 + 32LL))(
                 a5,
                 pwsz,
                 1LL,
                 &v66) >= 0 )
          {
            AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)&v80, v66);
            if ( (unsigned int)hProvider > 4 )
            {
              TlgCreateWsz(&pDesc, pwsz);
              LODWORD(v61) = LOWORD(v80.Ptr);
              p_Ptr_low = &v61;
              v88 = 4LL;
              LODWORD(v67) = v81;
              v89 = &v67;
              v90 = 4LL;
              LODWORD(pv[0]) = HIDWORD(v80.Ptr);
              p_Ptr_high = pv;
              v92 = 4LL;
              v93 = (int **)&v80.Reserved;
              v94 = 16LL;
              LODWORD(v68) = LOWORD(v80.Size);
              v95 = (LPVOID *)&v68;
              v96 = 4LL;
              Size_high = HIWORD(v80.Size);
              p_Reserved = (struct tWAVEFORMATEX **)&Size_high;
              v98 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014861A, v42, v43, 9u, &pData);
            }
            (*(void (__fastcall **)(struct IPolicyConfig *, LPCWSTR, struct tWAVEFORMATEX *, _QWORD))(*(_QWORD *)a5 + 48LL))(
              a5,
              pwsz,
              v66,
              0LL);
          }
          if ( v66 )
            CoTaskMemFree(v66);
        }
        v41 = v65;
      }
      if ( v41 )
      {
        CoTaskMemFree(v41);
        v26 = v64;
        goto LABEL_71;
      }
    }
    v26 = v64;
    goto LABEL_71;
  }
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&v82, pwsz);
    LOWORD(Ptr_low) = *(_WORD *)(a1 + 6868);
    v83 = (__int64 *)&Ptr_low;
    v84 = 2LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18014889A, v53, v54, 4u, &v80);
    v14 = *(_DWORD *)(a1 + 6868);
  }
  if ( v14 == 1 )
    *(_DWORD *)(a1 + 6868) = 2;
LABEL_93:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
LABEL_86:
  v11 = v62;
LABEL_87:
  if ( pwsz )
  {
    CoTaskMemFree((LPVOID)pwsz);
    pwsz = 0LL;
  }
  v51 = *(_QWORD **)(v11 + 56);
  if ( v51 )
  {
    LOBYTE(v12) = v51 != (_QWORD *)v11;
    v52 = *(void (__fastcall **)(_QWORD *, char))(*v51 + 32LL);
    if ( v52 == std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v51,
        v12);
    else
      v52(v51, v12);
    *(_QWORD *)(v11 + 56) = 0LL;
  }
}
