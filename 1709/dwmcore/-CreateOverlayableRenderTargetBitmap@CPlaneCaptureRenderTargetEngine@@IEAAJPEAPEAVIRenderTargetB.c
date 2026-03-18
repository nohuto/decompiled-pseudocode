/*
 * XREFs of ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18013901C
 * Callers:
 *     ?EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ @ 0x180139910 (-EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920 (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJI@Z @ 0x180139464 (-EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJI@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801A5AC0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::CreateOverlayableRenderTargetBitmap(
        CPlaneCaptureRenderTargetEngine *this,
        struct IRenderTargetBitmap **a2)
{
  CDisplayManager *v4; // rcx
  signed int CurrentDisplaySet; // eax
  unsigned int v6; // ebx
  signed int PrimaryDisplay; // eax
  struct CDisplay *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // xmm1_8
  signed int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  signed int v14; // eax
  signed int v15; // eax
  int *DisplayId; // rax
  signed int v17; // eax
  __int64 v19; // [rsp+50h] [rbp-79h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-71h] BYREF
  CDisplaySet *v21; // [rsp+60h] [rbp-69h] BYREF
  struct CDisplay *v22; // [rsp+68h] [rbp-61h] BYREF
  int v23[2]; // [rsp+70h] [rbp-59h]
  int v24; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v25[4]; // [rsp+80h] [rbp-49h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+B0h] [rbp-19h]
  __int128 v28; // [rsp+E0h] [rbp+17h]

  v19 = 0LL;
  hObject = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset_0(v25, 0, 0x20uLL);
  v23[1] = 0;
  v23[0] = 1;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v4, &v21);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0xF1u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v21, &v22);
    v6 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PrimaryDisplay, 0xF2u);
    }
    else
    {
      v8 = v22;
      v9 = *((_QWORD *)v22 + 10);
      v10 = _mm_srli_si128(*((__m128i *)v22 + 5), 8).m128i_u64[0];
      *((float *)this + 99) = (float)(int)v9;
      *((float *)this + 100) = (float)SHIDWORD(v9);
      *((float *)this + 101) = (float)(int)v10;
      *((float *)this + 102) = (float)SHIDWORD(v10);
      v11 = CPlaneCaptureRenderTargetEngine::EnsureDDisplayResources(this, *((_DWORD *)v8 + 59));
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xF9u);
      }
      else
      {
        v12 = *((_DWORD *)this + 76);
        v27 = 0;
        v13 = *((_QWORD *)this + 53);
        v25[0] = v12;
        v25[1] = *((_DWORD *)this + 77);
        v25[2] = *((_DWORD *)this + 80);
        LODWORD(v28) = *((_DWORD *)this + 78);
        *((_QWORD *)&v28 + 1) = 1LL;
        v26 = v28;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *))(*(_QWORD *)v13 + 64LL))(
                v13,
                *((_QWORD *)this + 54),
                v25,
                &v19);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x105u);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, HANDLE *))(**((_QWORD **)this + 53) + 104LL))(
                  *((_QWORD *)this + 53),
                  v19,
                  0x10000000LL,
                  0LL,
                  &hObject);
          v6 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x10Au);
          }
          else
          {
            DisplayId = CDisplay::GetDisplayId((__int64)v8, &v24);
            v17 = CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
                    (int)&qword_18026EEF0,
                    v23[0],
                    0,
                    (int)this + 312,
                    *(struct _LUID *)((char *)this + 344),
                    *DisplayId,
                    (__int64)hObject,
                    1,
                    (__int64)a2);
            v6 = v17;
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x114u);
          }
        }
      }
    }
  }
  if ( hObject )
    CloseHandle(hObject);
  ReleaseInterface<CDisplaySet const>(&v21);
  ReleaseInterface<CDisplay const>(&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return v6;
}
