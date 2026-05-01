/*
 * XREFs of ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1800ECECC
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E709C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1800E782C (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1800ED0B8 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DDAScreenCapture::CreateInstance(struct DDAScreenCapture **a1, HMONITOR a2)
{
  _QWORD *v4; // rsi
  ID3D11Device **ppDevice; // rbp
  ID3D11DeviceContext **ppImmediateContext; // r15
  DDAScreenCapture *v7; // rbx
  D3D_DRIVER_TYPE *v8; // r14
  ID3D11DeviceContext *v9; // rcx
  ID3D11Device *v10; // rcx
  HRESULT Device; // edi
  int v12; // eax
  D3D_FEATURE_LEVEL pFeatureLevel[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+58h] [rbp-60h]
  _QWORD *v16; // [rsp+60h] [rbp-58h]
  _DWORD v17[3]; // [rsp+68h] [rbp-50h] BYREF
  char v18; // [rsp+74h] [rbp-44h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v15 = -2LL;
  v4 = operator new(0x88uLL);
  *(_QWORD *)pFeatureLevel = v4;
  *v4 = 0LL;
  ppDevice = (ID3D11Device **)(v4 + 13);
  v4[13] = 0LL;
  ppImmediateContext = (ID3D11DeviceContext **)(v4 + 14);
  v4[14] = 0LL;
  v4[15] = 0LL;
  v4[16] = a2;
  memset(v4 + 1, 0, 0x60uLL);
  v7 = (DDAScreenCapture *)v4;
  v16 = v4;
  v17[0] = 1;
  v17[1] = 5;
  v17[2] = 2;
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&_xmm);
  v8 = (D3D_DRIVER_TYPE *)v17;
  while ( 1 )
  {
    v9 = *ppImmediateContext;
    if ( *ppImmediateContext )
    {
      *ppImmediateContext = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v9->lpVtbl->Release)(v9);
    }
    v10 = *ppDevice;
    if ( *ppDevice )
    {
      *ppDevice = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v10->lpVtbl->Release)(v10);
    }
    Device = D3D11CreateDevice(0LL, *v8, 0LL, 0, pFeatureLevels, 4u, 7u, ppDevice, pFeatureLevel, ppImmediateContext);
    if ( Device >= 0 )
      break;
    if ( ++v8 == (D3D_DRIVER_TYPE *)&v18 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x48,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)Device);
      goto LABEL_11;
    }
  }
  v12 = DDAScreenCapture::InitializeDuplication((DDAScreenCapture *)v4);
  Device = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v12);
LABEL_11:
  if ( Device >= 0 )
  {
    v7 = 0LL;
    *a1 = (struct DDAScreenCapture *)v4;
    Device = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)Device);
  }
  if ( v7 )
    DDAScreenCapture::`scalar deleting destructor'(v7);
  return (unsigned int)Device;
}
