/*
 * XREFs of ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8
 * Callers:
 *     ?EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ @ 0x18015BCE0 (-EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B6AB0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDisplayDeviceInterop@@@?$ComPtr@UIDisplayDevice@DirectDisplay@Graphics@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDisplayDeviceInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015B4BC (--$As@UIDisplayDeviceInterop@@@-$ComPtr@UIDisplayDevice@DirectDisplay@Graphics@Windows@@@WRL@Mic.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIDisplayPrimaryDescriptionFactory@DirectDisplay@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDisplayPrimaryDescriptionFactory@DirectDisplay@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18015B4F8 (--$GetActivationFactory@V-$ComPtr@UIDisplayPrimaryDescriptionFactory@DirectDisplay@Graphics@Wind.c)
 *     ?EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJPEBVCDisplay@@@Z @ 0x18015BBE8 (-EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJPEBVCDisplay@@@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DE5E0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::CreateOverlayableRenderTargetBitmap(
        struct _LUID *this,
        struct IRenderTargetBitmap **a2)
{
  int CurrentDisplaySet; // eax
  unsigned int v5; // ebx
  int PrimaryDisplay; // eax
  struct CDisplay *v7; // r15
  struct CDisplay *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // xmm1_8
  int v11; // eax
  HRESULT v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  struct _LUID v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int *DisplayId; // rax
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-49h] BYREF
  __int64 v24; // [rsp+58h] [rbp-41h] BYREF
  __int64 v25; // [rsp+60h] [rbp-39h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp-31h] BYREF
  CDisplaySet *v27; // [rsp+70h] [rbp-29h] BYREF
  struct CDisplay *v28; // [rsp+78h] [rbp-21h] BYREF
  __int64 v29; // [rsp+80h] [rbp-19h] BYREF
  __int64 v30; // [rsp+88h] [rbp-11h] BYREF
  int v31[2]; // [rsp+90h] [rbp-9h]
  HSTRING string; // [rsp+98h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_QWORD *)v31 = 1LL;
  v24 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v23 = 0LL;
  hObject = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)this, &v27);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0xF2u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v27, &v28);
    v5 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PrimaryDisplay, 0xF3u);
    }
    else
    {
      v7 = v28;
      v8 = v28;
      v9 = *((_QWORD *)v28 + 13);
      v10 = _mm_srli_si128(*(__m128i *)((char *)v28 + 104), 8).m128i_u64[0];
      *(float *)&this[56].HighPart = (float)(int)v9;
      *(float *)&this[57].LowPart = (float)SHIDWORD(v9);
      *(float *)&this[57].HighPart = (float)(int)v10;
      *(float *)&this[58].LowPart = (float)SHIDWORD(v10);
      v11 = CPlaneCaptureRenderTargetEngine::EnsureDDisplayResources((CPlaneCaptureRenderTargetEngine *)this, v8);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xFAu);
      }
      else
      {
        v12 = WindowsCreateStringReference(
                L"Windows.Graphics.DirectDisplay.DisplayPrimaryDescription",
                0x38u,
                &hstringHeader,
                &string);
        v5 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x102,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\planecapturerendertarget.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_24;
        }
        v13 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Graphics::DirectDisplay::IDisplayPrimaryDescriptionFactory>>(
                (__int64)string,
                &v29);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x104u);
        }
        else
        {
          v14 = v29;
          v25 = 1LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _BYTE, __int64, __int64 *))(*(_QWORD *)v14 + 48LL))(
                  v14,
                  this[45].LowPart,
                  (unsigned int)this[45].HighPart,
                  this[46].LowPart,
                  0,
                  0,
                  v25,
                  &v23);
          v5 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x10Du);
          }
          else
          {
            v16 = this[59];
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
            v17 = (*(__int64 (__fastcall **)(struct _LUID, _QWORD, __int64, __int64 *))(**(_QWORD **)&v16 + 56LL))(
                    v16,
                    *(_QWORD *)&this[60],
                    v23,
                    &v24);
            v5 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x10Fu);
            }
            else
            {
              v18 = Microsoft::WRL::ComPtr<Windows::Graphics::DirectDisplay::IDisplayDevice>::As<IDisplayDeviceInterop>(
                      &this[59],
                      &v30);
              v5 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x111u);
              }
              else
              {
                v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v30 + 48LL))(
                        v30,
                        v24,
                        0LL,
                        0x10000000LL,
                        0LL,
                        &hObject);
                v5 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x117u);
                }
                else
                {
                  DisplayId = CDisplay::GetDisplayId((__int64)v7, &v25);
                  v21 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
                          (int)&qword_1802D6730,
                          v31[0],
                          0,
                          (int)this + 368,
                          this[50],
                          *DisplayId,
                          (__int64)hObject,
                          1,
                          (__int64)a2);
                  v5 = v21;
                  if ( v21 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x121u);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( hObject )
    CloseHandle(hObject);
  ReleaseInterface<CDisplaySet const>(&v27);
  ReleaseInterface<CDisplay const>(&v28);
LABEL_24:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  return v5;
}
