/*
 * XREFs of ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z @ 0x180026290
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9888ee29221e6d6bd53d80d31d373ecc___::Run @ 0x180057D10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9888ee29221e6d6bd53d80d31d373ecc___--Run.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x1800D38EC (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D3A24 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIInsp.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x1800D684C (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheckInternal(AtmosCheck *this, bool *a2, bool *a3, bool *a4)
{
  unsigned int v4; // r13d
  char v5; // di
  int v9; // eax
  HRESULT ActivationFactory; // ebx
  char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v15; // rcx
  unsigned int v16; // edx
  __int64 i; // rbx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbx
  AtmosCheck *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  UINT32 v31; // edi
  const WCHAR *v32; // rax
  AtmosCheck *v33; // rcx
  UINT32 v34; // edi
  const WCHAR *v35; // rax
  AtmosCheck *v36; // rcx
  UINT32 v37; // edi
  const WCHAR *v38; // rax
  AtmosCheck *v39; // rcx
  __int64 v40; // rbx
  _QWORD *v41; // rax
  int v42; // eax
  HSTRING v43; // rcx
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  AtmosCheck *v46; // rcx
  UINT32 v47; // edi
  const WCHAR *v48; // rax
  AtmosCheck *v49; // rcx
  UINT32 v50; // edi
  const WCHAR *v51; // rax
  AtmosCheck *v52; // rcx
  bool v53; // zf
  unsigned int v54; // edx
  unsigned int j; // edi
  __int64 v56; // r14
  __int64 v57; // r8
  LPCGUID v58; // r8
  LPCGUID v59; // r9
  char v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-C0h] BYREF
  int (__fastcall ***v63)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v68; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall ***v70)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall ***v72)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-70h] BYREF
  HSTRING v73; // [rsp+98h] [rbp-68h] BYREF
  HSTRING v74; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING v75; // [rsp+A8h] [rbp-58h] BYREF
  HRESULT v76; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-30h] BYREF
  int v81; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v82; // [rsp+DCh] [rbp-24h] BYREF
  HSTRING v83; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v84[4]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v85[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v86; // [rsp+100h] [rbp+0h]
  _DWORD v87[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v88; // [rsp+110h] [rbp+10h]
  HSTRING_HEADER v89; // [rsp+118h] [rbp+18h] BYREF
  HSTRING string; // [rsp+130h] [rbp+30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+138h] [rbp+38h] BYREF
  HSTRING v92; // [rsp+150h] [rbp+50h] BYREF
  HSTRING_HEADER v93; // [rsp+158h] [rbp+58h] BYREF
  HSTRING v94; // [rsp+170h] [rbp+70h] BYREF
  HSTRING v95; // [rsp+190h] [rbp+90h] BYREF
  HSTRING v96[5]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v97; // [rsp+1D8h] [rbp+D8h]
  int v98; // [rsp+1DCh] [rbp+DCh]
  void *v99; // [rsp+1E0h] [rbp+E0h]
  int v100; // [rsp+1E8h] [rbp+E8h]
  int v101; // [rsp+1ECh] [rbp+ECh]
  const char *v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  void *v104; // [rsp+208h] [rbp+108h]
  int v105; // [rsp+210h] [rbp+110h]
  int v106; // [rsp+214h] [rbp+114h]
  void *v107; // [rsp+218h] [rbp+118h]
  int v108; // [rsp+220h] [rbp+120h]
  int v109; // [rsp+224h] [rbp+124h]
  const CHAR *v110; // [rsp+228h] [rbp+128h]
  __int64 v111; // [rsp+230h] [rbp+130h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+240h] [rbp+140h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+260h] [rbp+160h] BYREF
  HRESULT *v114; // [rsp+270h] [rbp+170h]
  __int64 v115; // [rsp+278h] [rbp+178h]

  v4 = 0;
  *a2 = 0;
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  memset(&v89, 0, sizeof(v89));
  v9 = *((_DWORD *)this + 30);
  v83 = 0LL;
  v80 = 0LL;
  v78 = 0LL;
  pv = 0LL;
  v74 = 0LL;
  v60 = 0;
  v68 = 0;
  if ( v9 == 5 || (unsigned int)(v9 - 11) <= 1 )
  {
    v5 = 1;
    v60 = 1;
  }
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_af9817b4_2d09_4467_9b31_4899b2aea6e0, &v80);
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v89, &v83);
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v80 + 144LL))(
                            v80,
                            v83,
                            &v78);
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v78 + 56LL))(v78, &v82);
        if ( ActivationFactory >= 0 )
        {
          v84[2] = 0;
          if ( (unsigned int)dword_18012A2E0 > 4 )
          {
            v103 = 25LL;
            v102 = "Retrieved media app list";
            v85[1] = 4;
            v96[4] = (HSTRING)off_18012A2E8;
            v85[0] = ((unsigned int)&unk_1800FBFDD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v86 = 0LL;
            v97 = *(unsigned __int16 *)off_18012A2E8;
            v99 = &unk_1800FBFE8;
            v98 = 2;
            v100 = 23;
            v101 = 1;
            EtwEventWriteTransfer(qword_18012A300, v85, 0LL, 0LL);
          }
          if ( v82 )
          {
            while ( 1 )
            {
              v15 = pv;
              v65 = 0LL;
              v66 = 0LL;
              v64 = 0LL;
              v63 = 0LL;
              v62 = 0LL;
              v61 = 0LL;
              v81 = 0;
              if ( pv )
              {
                v16 = v68;
                for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
                {
                  v18 = v15[i];
                  v79 = 8 * i;
                  if ( v18 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                    *(_QWORD *)((char *)pv + v79) = 0LL;
                    v15 = pv;
                    v16 = v68;
                  }
                }
                CoTaskMemFree(v15);
                pv = 0LL;
              }
              v19 = v78;
              v68 = 0;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL))(
                                    v19,
                                    v4,
                                    &v65);
              if ( ActivationFactory < 0 )
                break;
              v20 = v65;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v66);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 96LL))(v20, &v66);
              if ( ActivationFactory < 0 )
                break;
              v21 = v66;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 96LL))(v21, &v64);
              if ( ActivationFactory < 0 )
                break;
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v64 + 208LL))(v64, &v74);
              if ( ActivationFactory < 0 )
                break;
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v64 + 448LL))(v64, &v81);
              if ( ActivationFactory < 0 )
                break;
              if ( v81 == 3 || v5 )
              {
                v72 = 0LL;
                v71 = 0LL;
                v70 = 0LL;
                v69 = 0LL;
                v67 = 0LL;
                AtmosCheck::Trace(v22, "Checking capabilities", 0);
                v23 = v65;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v23 + 424LL))(
                                      v23,
                                      &v72);
                if ( ActivationFactory < 0 )
                  goto LABEL_97;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
                ActivationFactory = (**v72)(v72, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v71);
                if ( ActivationFactory < 0 )
                  goto LABEL_97;
                v24 = v71;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
                if ( WindowsCreateStringReference(L"MediaPlayback", 0xDu, &v93, &v92) < 0 )
                  RaiseException(0xC000000D, 1u, 0, 0LL);
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v24 + 48LL))(
                                      v24,
                                      v92,
                                      &v70);
                if ( ActivationFactory < 0 )
                  goto LABEL_97;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
                ActivationFactory = (**v70)(v70, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v69);
                if ( ActivationFactory < 0 )
                  goto LABEL_97;
                v25 = v69;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
                v26 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v94, L"Codec");
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 48LL))(
                                      v25,
                                      *v26,
                                      &v63);
                if ( ActivationFactory < 0 )
                  goto LABEL_97;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
                if ( (**v63)(v63, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v67) < 0 )
                {
                  v73 = 0LL;
                  ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                                        &v63,
                                        &v62);
                  if ( ActivationFactory < 0
                    || (v40 = v62,
                        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61),
                        v41 = (_QWORD *)Windows::Internal::StringReference::StringReference(v96, L"@Name"),
                        ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v40 + 48LL))(
                                              v40,
                                              *v41,
                                              &v61),
                        ActivationFactory < 0) )
                  {
                    v43 = v73;
                    if ( v73 )
                      goto LABEL_96;
                    goto LABEL_97;
                  }
                  v42 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v61 + 152LL))(v61, &v73);
                  v43 = v73;
                  ActivationFactory = v42;
                  if ( v42 < 0 )
                  {
LABEL_93:
                    if ( v43 )
                      goto LABEL_96;
                    goto LABEL_97;
                  }
                  StringLen = WindowsGetStringLen(v73);
                  StringRawBuffer = WindowsGetStringRawBuffer(v73, 0LL);
                  if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2
                    && AtmosCheck::IsLicenseValidForPackage(v46, v74) >= 0 )
                  {
                    *a2 = 1;
                  }
                  else
                  {
                    v47 = WindowsGetStringLen(v73);
                    v48 = WindowsGetStringRawBuffer(v73, 0LL);
                    if ( CompareStringOrdinal(v48, v47, L"atmosMatEncoder", -1, 1) == 2
                      && AtmosCheck::IsLicenseValidForPackage(v49, v74) >= 0 )
                    {
                      *a3 = 1;
                    }
                    else
                    {
                      v50 = WindowsGetStringLen(v73);
                      v51 = WindowsGetStringRawBuffer(v73, 0LL);
                      if ( CompareStringOrdinal(v51, v50, L"atmosHeadphonesEncoder", -1, 1) == 2
                        && AtmosCheck::IsLicenseValidForPackage(v52, v74) >= 0 )
                      {
                        *a4 = 1;
                      }
                    }
                  }
                  if ( v73 )
                    WindowsDeleteString(v73);
LABEL_85:
                  v5 = v60;
                }
                else
                {
                  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v67 + 48LL))(v67, v84);
                  if ( ActivationFactory < 0 )
                    goto LABEL_97;
                  if ( v84[0] == 1037 )
                  {
                    ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v67 + 304LL))(
                                          v67,
                                          &v68,
                                          &pv);
                    if ( ActivationFactory < 0 )
                      goto LABEL_97;
                    v27 = 0LL;
                    v76 = 0;
                    if ( v68 )
                    {
                      while ( 1 )
                      {
                        v75 = 0LL;
                        v28 = *((_QWORD *)pv + v27);
                        v79 = v28;
                        if ( v28 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
                        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
                        ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                                              &v79,
                                              &v62);
                        if ( ActivationFactory < 0 )
                          break;
                        v29 = v62;
                        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
                        v30 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v95, L"@Name");
                        ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 48LL))(
                                              v29,
                                              *v30,
                                              &v61);
                        if ( ActivationFactory < 0
                          || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v61 + 152LL))(
                                                    v61,
                                                    &v75),
                              ActivationFactory < 0) )
                        {
                          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
                          v43 = v75;
                          goto LABEL_93;
                        }
                        v31 = WindowsGetStringLen(v75);
                        v32 = WindowsGetStringRawBuffer(v75, 0LL);
                        if ( CompareStringOrdinal(v32, v31, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2
                          && AtmosCheck::IsLicenseValidForPackage(v33, v74) >= 0 )
                        {
                          *a2 = 1;
                        }
                        else
                        {
                          v34 = WindowsGetStringLen(v75);
                          v35 = WindowsGetStringRawBuffer(v75, 0LL);
                          if ( CompareStringOrdinal(v35, v34, L"atmosMatEncoder", -1, 1) == 2
                            && AtmosCheck::IsLicenseValidForPackage(v36, v74) >= 0 )
                          {
                            *a3 = 1;
                          }
                          else
                          {
                            v37 = WindowsGetStringLen(v75);
                            v38 = WindowsGetStringRawBuffer(v75, 0LL);
                            if ( CompareStringOrdinal(v38, v37, L"atmosHeadphonesEncoder", -1, 1) == 2
                              && AtmosCheck::IsLicenseValidForPackage(v39, v74) >= 0 )
                            {
                              *a4 = 1;
                            }
                          }
                        }
                        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
                        if ( v75 )
                          WindowsDeleteString(v75);
                        v27 = (unsigned int)(v76 + 1);
                        v76 = v27;
                        if ( (unsigned int)v27 >= v68 )
                          goto LABEL_85;
                      }
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
                      v43 = v75;
                      if ( v75 )
LABEL_96:
                        WindowsDeleteString(v43);
LABEL_97:
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
                      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
                      break;
                    }
                  }
                }
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
              }
              WindowsDeleteString(v74);
              v53 = !*a2;
              v74 = 0LL;
              if ( !v53 && *a3 && *a4 )
                break;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v66);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
              if ( ++v4 >= v82 )
                goto LABEL_12;
            }
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v61);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v66);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
          }
        }
      }
    }
  }
LABEL_12:
  if ( !*a3 )
    *a4 = 0;
  if ( v83 )
  {
    WindowsDeleteString(v83);
    v83 = 0LL;
  }
  if ( v74 )
  {
    WindowsDeleteString(v74);
    v74 = 0LL;
  }
  v11 = (char *)pv;
  if ( pv )
  {
    v54 = v68;
    for ( j = 0; j < v54; ++j )
    {
      v56 = 8LL * j;
      v57 = *(_QWORD *)&v11[v56];
      if ( v57 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v57 + 16LL))(*(_QWORD *)&v11[v56]);
        *(_QWORD *)((char *)pv + v56) = 0LL;
        v11 = (char *)pv;
        v54 = v68;
      }
    }
    CoTaskMemFree(v11);
  }
  v76 = ActivationFactory;
  if ( ActivationFactory )
  {
    if ( (unsigned int)dword_18012A2E0 > 2 )
    {
      TlgCreateSz(&pDesc, "License validation result");
      v115 = 4LL;
      v114 = &v76;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2E0, &unk_1800FBFAD, v58, v59, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_18012A2E0 > 4 )
  {
    v111 = 26LL;
    v110 = "License validation result";
    v87[1] = 4;
    v104 = off_18012A2E8;
    v87[0] = ((unsigned int)&unk_1800FBFDD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v88 = 0LL;
    v105 = *(unsigned __int16 *)off_18012A2E8;
    v107 = &unk_1800FBFE8;
    v106 = 2;
    v108 = 23;
    v109 = 1;
    EtwEventWriteTransfer(qword_18012A300, v87, 0LL, 0LL);
  }
  v12 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)ActivationFactory;
}
