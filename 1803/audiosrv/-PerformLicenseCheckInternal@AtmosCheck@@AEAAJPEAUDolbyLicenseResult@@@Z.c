/*
 * XREFs of ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180026870
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___::Run @ 0x1800154F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2841a3f6d236310ca0a7ae73226eca51___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800266F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F800 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18004F844 (-IsMatEncoderEnabled@AtmosCheck@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x18010E1AC (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010E2D4 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIInsp.c)
 *     ?IsDolbyDigitalPlusDecoderEnabled@AtmosCheck@@QEAAJXZ @ 0x18011108C (-IsDolbyDigitalPlusDecoderEnabled@AtmosCheck@@QEAAJXZ.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x1801110C8 (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z @ 0x180111224 (-IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheckInternal(AtmosCheck *this, struct DolbyLicenseResult *a2)
{
  unsigned int v2; // r14d
  int v5; // eax
  char v6; // r13
  HRESULT ActivationFactory; // edi
  unsigned int v8; // r12d
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int i; // ebx
  __int64 v17; // rdx
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
  UINT32 v29; // ebx
  const WCHAR *v30; // rax
  int v31; // eax
  int v32; // edx
  AtmosCheck *v33; // rcx
  UINT32 v34; // ebx
  const WCHAR *v35; // rax
  int v36; // eax
  int v37; // edx
  AtmosCheck *v38; // rcx
  UINT32 v39; // ebx
  const WCHAR *v40; // rax
  int v41; // eax
  int v42; // edx
  AtmosCheck *v43; // rcx
  __int64 v44; // rbx
  _QWORD *v45; // rax
  int v46; // eax
  HSTRING v47; // rcx
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  int IsDolbyDigitalPlusDecoderEnabled; // eax
  int IsLicenseValidForPackage; // edx
  AtmosCheck *v52; // rcx
  UINT32 v53; // ebx
  const WCHAR *v54; // rax
  int IsMatEncoderEnabled; // eax
  int v56; // edx
  AtmosCheck *v57; // rcx
  UINT32 v58; // ebx
  const WCHAR *v59; // rax
  int IsHeadphonesEncoderEnabled; // eax
  int v61; // edx
  AtmosCheck *v62; // rcx
  unsigned int v63; // eax
  unsigned int j; // ebx
  __int64 v65; // rdx
  __int64 v66; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+38h] [rbp-C8h] BYREF
  int (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v72; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-98h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall ***v77)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-78h] BYREF
  HSTRING v78; // [rsp+90h] [rbp-70h] BYREF
  HSTRING v79; // [rsp+98h] [rbp-68h] BYREF
  HSTRING v80; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h] BYREF
  int v84; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v85; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v86; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING v87; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v88[4]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v89[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-10h]
  HSTRING_HEADER v91; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING string; // [rsp+110h] [rbp+10h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+118h] [rbp+18h] BYREF
  HSTRING v94; // [rsp+130h] [rbp+30h] BYREF
  HSTRING_HEADER v95; // [rsp+138h] [rbp+38h] BYREF
  HSTRING v96; // [rsp+150h] [rbp+50h] BYREF
  HSTRING v97; // [rsp+170h] [rbp+70h] BYREF
  HSTRING v98; // [rsp+190h] [rbp+90h] BYREF
  void *v99; // [rsp+1B0h] [rbp+B0h] BYREF
  int v100; // [rsp+1B8h] [rbp+B8h]
  int v101; // [rsp+1BCh] [rbp+BCh]
  void *v102; // [rsp+1C0h] [rbp+C0h]
  int v103; // [rsp+1C8h] [rbp+C8h]
  int v104; // [rsp+1CCh] [rbp+CCh]
  const char *v105; // [rsp+1D0h] [rbp+D0h]
  __int64 v106; // [rsp+1D8h] [rbp+D8h]

  v2 = 0;
  memset(&v91, 0, sizeof(v91));
  *(_DWORD *)a2 = -2147023728;
  *((_DWORD *)a2 + 1) = -2147023728;
  *((_DWORD *)a2 + 2) = -2147023728;
  v5 = *((_DWORD *)this + 38);
  v87 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  pv = 0LL;
  v80 = 0LL;
  v72 = 0;
  if ( v5 == 5 || (v6 = 0, (unsigned int)(v5 - 11) <= 1) )
    v6 = 1;
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_78662bbb_1464_4279_b5ff_ffccb2bc6529, &v83);
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v91, &v87);
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v83 + 144LL))(
                            v83,
                            v87,
                            &v82);
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v82 + 56LL))(v82, &v85);
        if ( ActivationFactory >= 0 )
        {
          v88[2] = 0;
          if ( (unsigned int)dword_1801883F0 > 5 )
          {
            v106 = 25LL;
            v105 = "Retrieved media app list";
            v89[1] = 5;
            v99 = off_1801883F8;
            v89[0] = ((unsigned int)&unk_180149AFD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v90 = 0LL;
            v100 = *(unsigned __int16 *)off_1801883F8;
            v102 = &unk_180149B08;
            v101 = 2;
            v103 = 23;
            v104 = 1;
            EtwEventWriteTransfer(qword_180188410, v89, 0LL, 0LL, 3, &v99, v66);
          }
          v8 = 0;
          if ( v85 )
          {
            while ( 1 )
            {
              v14 = pv;
              v70 = 0LL;
              v71 = 0LL;
              v69 = 0LL;
              v68 = 0LL;
              v67 = 0LL;
              v66 = 0LL;
              v84 = 0;
              if ( pv )
              {
                v15 = v72;
                for ( i = 0; i < v15; ++i )
                {
                  v17 = v14[i];
                  if ( v17 )
                  {
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(v14[i]);
                    *((_QWORD *)pv + i) = 0LL;
                    v14 = pv;
                    v15 = v72;
                  }
                }
                CoTaskMemFree(v14);
                pv = 0LL;
              }
              v18 = v82;
              v72 = 0;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 48LL))(
                                    v18,
                                    v8,
                                    &v70);
              if ( ActivationFactory < 0 )
                break;
              v19 = v70;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 96LL))(v19, &v71);
              if ( ActivationFactory < 0 )
                break;
              v20 = v71;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v69);
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 96LL))(v20, &v69);
              if ( ActivationFactory < 0 )
                break;
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v69 + 208LL))(v69, &v80);
              if ( ActivationFactory < 0 )
                break;
              ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v69 + 448LL))(v69, &v84);
              if ( ActivationFactory < 0 )
                break;
              if ( v84 == 3 || v6 )
              {
                v77 = 0LL;
                v76 = 0LL;
                v75 = 0LL;
                v74 = 0LL;
                v73 = 0LL;
                AtmosCheck::Trace(v21, "Checking capabilities", 0);
                v22 = v70;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v77);
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v22 + 440LL))(
                                      v22,
                                      &v77);
                if ( ActivationFactory < 0 )
                  goto LABEL_99;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
                ActivationFactory = (**v77)(v77, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v76);
                if ( ActivationFactory < 0 )
                  goto LABEL_99;
                v23 = v76;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
                if ( WindowsCreateStringReference(L"MediaPlayback", 0xDu, &v95, &v94) < 0 )
                  RaiseException(0xC000000D, 1u, 0, 0LL);
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v23 + 48LL))(
                                      v23,
                                      v94,
                                      &v75);
                if ( ActivationFactory < 0 )
                  goto LABEL_99;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v74);
                ActivationFactory = (**v75)(v75, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v74);
                if ( ActivationFactory < 0 )
                  goto LABEL_99;
                v24 = v74;
                Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v68);
                v25 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v96, L"Codec");
                ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v24 + 48LL))(
                                      v24,
                                      *v25,
                                      &v68);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v73);
                if ( ActivationFactory < 0 )
                  goto LABEL_100;
                if ( (**v68)(v68, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v73) < 0 )
                {
                  v79 = 0LL;
                  ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                                        &v68,
                                        &v67);
                  if ( ActivationFactory < 0
                    || (v44 = v67,
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66),
                        v45 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v98, L"@Name"),
                        ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v44 + 48LL))(
                                              v44,
                                              *v45,
                                              &v66),
                        ActivationFactory < 0) )
                  {
                    v47 = v79;
LABEL_97:
                    if ( v47 )
                      WindowsDeleteString(v47);
LABEL_99:
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v73);
LABEL_100:
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v74);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v77);
                    break;
                  }
                  v46 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 152LL))(v66, &v79);
                  v47 = v79;
                  ActivationFactory = v46;
                  if ( v46 < 0 )
                    goto LABEL_97;
                  StringLen = WindowsGetStringLen(v79);
                  StringRawBuffer = WindowsGetStringRawBuffer(v79, 0LL);
                  if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
                  {
                    IsDolbyDigitalPlusDecoderEnabled = AtmosCheck::IsDolbyDigitalPlusDecoderEnabled(this);
                    if ( AtmosCheck::IsPerformLicenseCheck(this, IsDolbyDigitalPlusDecoderEnabled) )
                      IsLicenseValidForPackage = AtmosCheck::IsLicenseValidForPackage(v52, v80);
                    *(_DWORD *)a2 = IsLicenseValidForPackage;
                  }
                  else
                  {
                    v53 = WindowsGetStringLen(v79);
                    v54 = WindowsGetStringRawBuffer(v79, 0LL);
                    if ( CompareStringOrdinal(v54, v53, L"atmosMatEncoder", -1, 1) == 2 )
                    {
                      IsMatEncoderEnabled = AtmosCheck::IsMatEncoderEnabled(this);
                      if ( AtmosCheck::IsPerformLicenseCheck(this, IsMatEncoderEnabled) )
                        v56 = AtmosCheck::IsLicenseValidForPackage(v57, v80);
                      *((_DWORD *)a2 + 1) = v56;
                    }
                    else
                    {
                      v58 = WindowsGetStringLen(v79);
                      v59 = WindowsGetStringRawBuffer(v79, 0LL);
                      if ( CompareStringOrdinal(v59, v58, L"atmosHeadphonesEncoder", -1, 1) == 2 )
                      {
                        IsHeadphonesEncoderEnabled = AtmosCheck::IsHeadphonesEncoderEnabled(this);
                        if ( AtmosCheck::IsPerformLicenseCheck(this, IsHeadphonesEncoderEnabled) )
                          *((_DWORD *)a2 + 2) = AtmosCheck::IsLicenseValidForPackage(v62, v80);
                        else
                          *((_DWORD *)a2 + 2) = v61;
                      }
                    }
                  }
                  if ( v79 )
                    WindowsDeleteString(v79);
                }
                else
                {
                  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v73 + 48LL))(v73, v88);
                  if ( ActivationFactory < 0 )
                    goto LABEL_99;
                  if ( v88[0] == 1037 )
                  {
                    ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v73 + 304LL))(
                                          v73,
                                          &v72,
                                          &pv);
                    if ( ActivationFactory < 0 )
                      goto LABEL_99;
                    if ( v72 )
                    {
                      while ( 1 )
                      {
                        v78 = 0LL;
                        v26 = *((_QWORD *)pv + v2);
                        v86 = v26;
                        if ( v26 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v67);
                        ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                                              &v86,
                                              &v67);
                        if ( ActivationFactory < 0 )
                          break;
                        v27 = v67;
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
                        v28 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v97, L"@Name");
                        ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48LL))(
                                              v27,
                                              *v28,
                                              &v66);
                        if ( ActivationFactory < 0 )
                          break;
                        ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 152LL))(
                                              v66,
                                              &v78);
                        if ( ActivationFactory < 0 )
                          break;
                        v29 = WindowsGetStringLen(v78);
                        v30 = WindowsGetStringRawBuffer(v78, 0LL);
                        if ( CompareStringOrdinal(v30, v29, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
                        {
                          v31 = AtmosCheck::IsDolbyDigitalPlusDecoderEnabled(this);
                          if ( AtmosCheck::IsPerformLicenseCheck(this, v31) )
                            v32 = AtmosCheck::IsLicenseValidForPackage(v33, v80);
                          *(_DWORD *)a2 = v32;
                        }
                        else
                        {
                          v34 = WindowsGetStringLen(v78);
                          v35 = WindowsGetStringRawBuffer(v78, 0LL);
                          if ( CompareStringOrdinal(v35, v34, L"atmosMatEncoder", -1, 1) == 2 )
                          {
                            v36 = AtmosCheck::IsMatEncoderEnabled(this);
                            if ( AtmosCheck::IsPerformLicenseCheck(this, v36) )
                              v37 = AtmosCheck::IsLicenseValidForPackage(v38, v80);
                            *((_DWORD *)a2 + 1) = v37;
                          }
                          else
                          {
                            v39 = WindowsGetStringLen(v78);
                            v40 = WindowsGetStringRawBuffer(v78, 0LL);
                            if ( CompareStringOrdinal(v40, v39, L"atmosHeadphonesEncoder", -1, 1) == 2 )
                            {
                              v41 = AtmosCheck::IsHeadphonesEncoderEnabled(this);
                              if ( AtmosCheck::IsPerformLicenseCheck(this, v41) )
                                *((_DWORD *)a2 + 2) = AtmosCheck::IsLicenseValidForPackage(v43, v80);
                              else
                                *((_DWORD *)a2 + 2) = v42;
                            }
                          }
                        }
                        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v86);
                        if ( v78 )
                          WindowsDeleteString(v78);
                        if ( ++v2 >= v72 )
                          goto LABEL_71;
                      }
                      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v86);
                      v47 = v78;
                      goto LABEL_97;
                    }
LABEL_71:
                    v2 = 0;
                  }
                }
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v73);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v74);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v77);
              }
              WindowsDeleteString(v80);
              v80 = 0LL;
              if ( *(int *)a2 >= 0 && *((int *)a2 + 1) >= 0 && *((int *)a2 + 2) >= 0 )
                break;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v67);
              Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v68);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v69);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
              if ( ++v8 >= v85 )
                goto LABEL_12;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v67);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v68);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v69);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
          }
        }
      }
    }
  }
LABEL_12:
  v9 = *((_DWORD *)a2 + 1);
  if ( v9 < 0 && *((int *)a2 + 2) >= 0 )
    *((_DWORD *)a2 + 2) = v9;
  if ( v87 )
  {
    WindowsDeleteString(v87);
    v87 = 0LL;
  }
  if ( v80 )
  {
    WindowsDeleteString(v80);
    v80 = 0LL;
  }
  v10 = pv;
  if ( pv )
  {
    v63 = v72;
    for ( j = 0; j < v63; ++j )
    {
      v65 = v10[j];
      if ( v65 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v65 + 16LL))(v10[j]);
        *((_QWORD *)pv + j) = 0LL;
        v10 = pv;
        v63 = v72;
      }
    }
    CoTaskMemFree(v10);
  }
  AtmosCheck::Trace((AtmosCheck *)v10, "License validation result", ActivationFactory);
  v11 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)ActivationFactory;
}
