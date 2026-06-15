/*
 * XREFs of ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180001D50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run @ 0x180005F80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005A218 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x1800E101C (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E1098 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIInsp.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E410C (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheckInternal(AtmosCheck *this, struct DolbyLicenseResult *a2)
{
  unsigned int v2; // r13d
  char v3; // r12
  int v5; // eax
  HRESULT ActivationFactory; // ebx
  unsigned int v7; // r15d
  int v8; // eax
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v13; // rcx
  unsigned int v14; // edx
  unsigned int i; // ebx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  AtmosCheck *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  UINT32 v29; // edi
  const WCHAR *v30; // rax
  AtmosCheck *v31; // rcx
  UINT32 v32; // edi
  const WCHAR *v33; // rax
  AtmosCheck *v34; // rcx
  UINT32 v35; // edi
  const WCHAR *v36; // rax
  AtmosCheck *v37; // rcx
  bool v38; // sf
  __int64 v39; // rbx
  _QWORD *v40; // rax
  int v41; // eax
  HSTRING v42; // rcx
  UINT32 StringLen; // edi
  const WCHAR *StringRawBuffer; // rax
  AtmosCheck *v45; // rcx
  UINT32 v46; // edi
  const WCHAR *v47; // rax
  AtmosCheck *v48; // rcx
  UINT32 v49; // edi
  const WCHAR *v50; // rax
  AtmosCheck *v51; // rcx
  HSTRING v52; // rcx
  unsigned int v53; // edx
  unsigned int j; // edi
  __int64 v55; // rsi
  __int64 v56; // r8
  LPCGUID v57; // r8
  LPCGUID v58; // r9
  __int64 v59; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+38h] [rbp-C8h] BYREF
  int (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall ***v70)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-78h] BYREF
  HSTRING v71; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v72; // [rsp+98h] [rbp-68h] BYREF
  HSTRING v73; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-48h] BYREF
  int v77; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v78; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v79; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING v80; // [rsp+D0h] [rbp-30h] BYREF
  int v81; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v82[4]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v83[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v84; // [rsp+F8h] [rbp-8h]
  _DWORD v85[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v86; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v87; // [rsp+110h] [rbp+10h] BYREF
  HSTRING string; // [rsp+128h] [rbp+28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+130h] [rbp+30h] BYREF
  HSTRING v90; // [rsp+148h] [rbp+48h] BYREF
  HSTRING_HEADER v91; // [rsp+150h] [rbp+50h] BYREF
  HSTRING v92; // [rsp+168h] [rbp+68h] BYREF
  HSTRING v93; // [rsp+188h] [rbp+88h] BYREF
  HSTRING v94; // [rsp+1A8h] [rbp+A8h] BYREF
  void *v95; // [rsp+1C8h] [rbp+C8h] BYREF
  int v96; // [rsp+1D0h] [rbp+D0h]
  int v97; // [rsp+1D4h] [rbp+D4h]
  void *v98; // [rsp+1D8h] [rbp+D8h]
  int v99; // [rsp+1E0h] [rbp+E0h]
  int v100; // [rsp+1E4h] [rbp+E4h]
  const char *v101; // [rsp+1E8h] [rbp+E8h]
  __int64 v102; // [rsp+1F0h] [rbp+F0h]
  void *v103; // [rsp+1F8h] [rbp+F8h] BYREF
  int v104; // [rsp+200h] [rbp+100h]
  int v105; // [rsp+204h] [rbp+104h]
  void *v106; // [rsp+208h] [rbp+108h]
  int v107; // [rsp+210h] [rbp+110h]
  int v108; // [rsp+214h] [rbp+114h]
  const CHAR *v109; // [rsp+218h] [rbp+118h]
  __int64 v110; // [rsp+220h] [rbp+120h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+250h] [rbp+150h] BYREF
  _DWORD *v113; // [rsp+260h] [rbp+160h]
  __int64 v114; // [rsp+268h] [rbp+168h]

  v2 = 0;
  *(_DWORD *)a2 = -2147023728;
  *((_DWORD *)a2 + 1) = -2147023728;
  memset(&v87, 0, sizeof(v87));
  v3 = 0;
  *((_DWORD *)a2 + 2) = -2147023728;
  v5 = *((_DWORD *)this + 32);
  v80 = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  pv = 0LL;
  v72 = 0LL;
  v66 = 0;
  if ( v5 == 5 || (unsigned int)(v5 - 11) <= 1 )
    v3 = 1;
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_78662bbb_1464_4279_b5ff_ffccb2bc6529, &v76);
  if ( ActivationFactory < 0 )
    goto LABEL_12;
  ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v87, &v80);
  if ( ActivationFactory < 0 )
    goto LABEL_12;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v76 + 144LL))(v76, v80, &v75);
  if ( ActivationFactory < 0 )
    goto LABEL_12;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v75 + 56LL))(v75, &v78);
  if ( ActivationFactory < 0 )
    goto LABEL_12;
  v82[2] = 0;
  if ( (unsigned int)dword_18014A470 > 5 )
  {
    v102 = 25LL;
    v101 = "Retrieved media app list";
    v83[1] = 5;
    v83[0] = ((unsigned int)&unk_180112891 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v95 = off_18014A478;
    v84 = 0LL;
    v96 = *(unsigned __int16 *)off_18014A478;
    v97 = 2;
    v98 = &unk_18011289C;
    v99 = 23;
    v100 = 1;
    EtwEventWriteTransfer(qword_18014A490, v83, 0LL, 0LL, 3, &v95, v59, v60);
  }
  v7 = 0;
  if ( !v78 )
    goto LABEL_12;
  while ( 1 )
  {
    v13 = (char *)pv;
    v63 = 0LL;
    v64 = 0LL;
    v62 = 0LL;
    v61 = 0LL;
    v60 = 0LL;
    v59 = 0LL;
    v77 = 0;
    if ( pv )
    {
      v14 = v66;
      for ( i = 0; i < v14; ++i )
      {
        v16 = 8LL * i;
        v17 = *(_QWORD *)&v13[v16];
        if ( v17 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(*(_QWORD *)&v13[v16]);
          *(_QWORD *)((char *)pv + v16) = 0LL;
          v13 = (char *)pv;
          v14 = v66;
        }
      }
      CoTaskMemFree(v13);
      pv = 0LL;
    }
    v18 = v75;
    v66 = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, v7, &v63);
    if ( ActivationFactory < 0 )
      goto LABEL_94;
    v19 = v63;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 96LL))(v19, &v64);
    if ( ActivationFactory < 0 )
      goto LABEL_94;
    v20 = v64;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 96LL))(v20, &v62);
    if ( ActivationFactory < 0 )
      goto LABEL_94;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v62 + 208LL))(v62, &v72);
    if ( ActivationFactory < 0 )
      goto LABEL_94;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v62 + 448LL))(v62, &v77);
    if ( ActivationFactory < 0 )
      goto LABEL_94;
    if ( v77 == 3 || v3 )
      break;
LABEL_70:
    WindowsDeleteString(v72);
    v38 = *(int *)a2 < 0;
    v72 = 0LL;
    if ( !v38 && *((int *)a2 + 1) >= 0 && *((int *)a2 + 2) >= 0 )
      goto LABEL_94;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v61);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
    if ( ++v7 >= v78 )
      goto LABEL_12;
  }
  v70 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  AtmosCheck::Trace(v21, "Checking capabilities", 0);
  v22 = v63;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v22 + 424LL))(
                        v22,
                        &v70);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
  ActivationFactory = (**v70)(v70, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v69);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  v23 = v69;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v68);
  if ( WindowsCreateStringReference(L"MediaPlayback", 0xDu, &v91, &v90) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v23 + 48LL))(v23, v90, &v68);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
  ActivationFactory = (**v68)(v68, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v67);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  v24 = v67;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v61);
  v25 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v92, L"Codec");
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 48LL))(v24, *v25, &v61);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
  if ( (**v61)(v61, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v65) < 0 )
  {
    v71 = 0LL;
    ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                          &v61,
                          &v60);
    if ( ActivationFactory < 0
      || (v39 = v60,
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59),
          v40 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v94, L"@Name"),
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 48LL))(
                                v39,
                                *v40,
                                &v59),
          ActivationFactory < 0) )
    {
      v42 = v71;
      if ( !v71 )
        goto LABEL_93;
    }
    else
    {
      v41 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v59 + 152LL))(v59, &v71);
      v42 = v71;
      ActivationFactory = v41;
      if ( v41 >= 0 )
      {
        StringLen = WindowsGetStringLen(v71);
        StringRawBuffer = WindowsGetStringRawBuffer(v71, 0LL);
        if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
        {
          *(_DWORD *)a2 = AtmosCheck::IsLicenseValidForPackage(v45, v72);
        }
        else
        {
          v46 = WindowsGetStringLen(v71);
          v47 = WindowsGetStringRawBuffer(v71, 0LL);
          if ( CompareStringOrdinal(v47, v46, L"atmosMatEncoder", -1, 1) == 2 )
          {
            *((_DWORD *)a2 + 1) = AtmosCheck::IsLicenseValidForPackage(v48, v72);
          }
          else
          {
            v49 = WindowsGetStringLen(v71);
            v50 = WindowsGetStringRawBuffer(v71, 0LL);
            if ( CompareStringOrdinal(v50, v49, L"atmosHeadphonesEncoder", -1, 1) == 2 )
              *((_DWORD *)a2 + 2) = AtmosCheck::IsLicenseValidForPackage(v51, v72);
          }
        }
        if ( v71 )
          WindowsDeleteString(v71);
        goto LABEL_69;
      }
      if ( !v71 )
      {
LABEL_93:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v68);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
LABEL_94:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v61);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
        goto LABEL_12;
      }
    }
    WindowsDeleteString(v42);
    goto LABEL_93;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v65 + 48LL))(v65, &v81);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  if ( v81 != 1037 )
    goto LABEL_69;
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v65 + 304LL))(
                        v65,
                        &v66,
                        &pv);
  if ( ActivationFactory < 0 )
    goto LABEL_93;
  if ( !v66 )
  {
LABEL_68:
    v2 = 0;
LABEL_69:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v68);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
    goto LABEL_70;
  }
  while ( 1 )
  {
    v73 = 0LL;
    v26 = *((_QWORD *)pv + v2);
    v79 = v26;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
    ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                          &v79,
                          &v60);
    if ( ActivationFactory < 0 )
      break;
    v27 = v60;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
    v28 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v93, L"@Name");
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, *v28, &v59);
    if ( ActivationFactory < 0 )
      break;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v59 + 152LL))(v59, &v73);
    if ( ActivationFactory < 0 )
    {
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v79);
      v52 = v73;
      if ( !v73 )
        goto LABEL_88;
      goto LABEL_87;
    }
    v29 = WindowsGetStringLen(v73);
    v30 = WindowsGetStringRawBuffer(v73, 0LL);
    if ( CompareStringOrdinal(v30, v29, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
    {
      *(_DWORD *)a2 = AtmosCheck::IsLicenseValidForPackage(v31, v72);
    }
    else
    {
      v32 = WindowsGetStringLen(v73);
      v33 = WindowsGetStringRawBuffer(v73, 0LL);
      if ( CompareStringOrdinal(v33, v32, L"atmosMatEncoder", -1, 1) == 2 )
      {
        *((_DWORD *)a2 + 1) = AtmosCheck::IsLicenseValidForPackage(v34, v72);
      }
      else
      {
        v35 = WindowsGetStringLen(v73);
        v36 = WindowsGetStringRawBuffer(v73, 0LL);
        if ( CompareStringOrdinal(v36, v35, L"atmosHeadphonesEncoder", -1, 1) == 2 )
          *((_DWORD *)a2 + 2) = AtmosCheck::IsLicenseValidForPackage(v37, v72);
      }
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v79);
    if ( v73 )
      WindowsDeleteString(v73);
    if ( ++v2 >= v66 )
      goto LABEL_68;
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v79);
  v52 = v73;
  if ( v73 )
LABEL_87:
    WindowsDeleteString(v52);
LABEL_88:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v67);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v68);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v69);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v70);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v59);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v60);
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v61);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v62);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v63);
LABEL_12:
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 0 && *((int *)a2 + 2) >= 0 )
    *((_DWORD *)a2 + 2) = v8;
  if ( v80 )
  {
    WindowsDeleteString(v80);
    v80 = 0LL;
  }
  if ( v72 )
  {
    WindowsDeleteString(v72);
    v72 = 0LL;
  }
  v9 = (char *)pv;
  if ( pv )
  {
    v53 = v66;
    for ( j = 0; j < v53; ++j )
    {
      v55 = 8LL * j;
      v56 = *(_QWORD *)&v9[v55];
      if ( v56 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v56 + 16LL))(*(_QWORD *)&v9[v55]);
        *(_QWORD *)((char *)pv + v55) = 0LL;
        v9 = (char *)pv;
        v53 = v66;
      }
    }
    CoTaskMemFree(v9);
  }
  v82[0] = ActivationFactory;
  if ( ActivationFactory )
  {
    if ( (unsigned int)dword_18014A470 > 2 )
    {
      TlgCreateSz(&pDesc, "License validation result");
      v114 = 4LL;
      v113 = v82;
      TlgWrite((TraceLoggingHProvider)&dword_18014A470, &unk_180112861, v57, v58, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_18014A470 > 5 )
  {
    v110 = 26LL;
    v109 = "License validation result";
    v85[1] = 5;
    v103 = off_18014A478;
    v85[0] = ((unsigned int)&unk_180112891 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v86 = 0LL;
    v104 = *(unsigned __int16 *)off_18014A478;
    v105 = 2;
    v106 = &unk_18011289C;
    v107 = 23;
    v108 = 1;
    EtwEventWriteTransfer(qword_18014A490, v85, 0LL, 0LL, 3, &v103, v59, v60);
  }
  v10 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v76;
  if ( v76 )
  {
    v76 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)ActivationFactory;
}
