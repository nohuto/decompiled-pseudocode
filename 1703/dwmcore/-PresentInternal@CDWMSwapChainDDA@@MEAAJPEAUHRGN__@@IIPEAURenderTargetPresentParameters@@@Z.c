/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18019DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18003EF70 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x1801308B8 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x18019CE38 (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 */

__int64 __fastcall CDWMSwapChainDDA::PresentInternal(CDWMSwapChainDDA *this, HRGN a2, unsigned int a3, unsigned int a4)
{
  struct _RGNDATA *v4; // rsi
  unsigned int v5; // eax
  char *v6; // r15
  DWORD nCount; // r12d
  int v8; // r14d
  int *v11; // rdx
  __int64 v12; // r8
  int v13; // ecx
  int v14; // eax
  int Buffer; // eax
  unsigned int *v16; // r8
  unsigned int v17; // ebx
  int v18; // eax
  HRGN v19; // rcx
  int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // r14d
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  struct ID3D11Texture2D *v28; // [rsp+58h] [rbp-39h] BYREF
  struct _RGNDATA *v29; // [rsp+60h] [rbp-31h] BYREF
  struct DXGI_SCROLL_RECT *v30[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v31; // [rsp+78h] [rbp-19h]
  unsigned int v32; // [rsp+80h] [rbp-11h]
  unsigned int v33; // [rsp+88h] [rbp-9h] BYREF
  __int64 v34; // [rsp+90h] [rbp-1h] BYREF
  __int128 v35; // [rsp+98h] [rbp+7h]

  v28 = 0LL;
  v4 = 0LL;
  v5 = *((_DWORD *)this + 64);
  v6 = 0LL;
  nCount = 0;
  v8 = 0;
  v29 = 0LL;
  if ( v5 )
  {
    v11 = (int *)*((_QWORD *)this + 29);
    v12 = v5;
    do
    {
      v13 = *v11;
      v14 = v8 + 1;
      v11 += 12;
      if ( v13 != 1 )
        v14 = v8;
      v8 = v14;
      --v12;
    }
    while ( v12 );
  }
  Buffer = CDWMSwapChain::GetBuffer(this, 0LL, &v33, &v28);
  v17 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0xB0u);
    goto LABEL_32;
  }
  if ( g_LockAndReadDDATarget )
    CD3DDeviceLevel1::ReadTexture(*((CD3DDeviceLevel1 **)this + 77), v28);
  if ( !*((_QWORD *)this + 38) )
  {
    v18 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 128LL),
            0LL,
            a3,
            a4,
            0,
            0LL,
            0,
            0LL,
            0LL,
            0);
    v17 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC1u);
LABEL_28:
    if ( v17 == 142213121 )
      v17 = 0;
    goto LABEL_32;
  }
  v19 = (HRGN)*((_QWORD *)this + 27);
  if ( v19 )
  {
    HrgnToRgnData(v19, &v29, v16);
    v4 = v29;
    if ( v29 )
    {
      if ( v29->rdh.nCount )
      {
        nCount = v29->rdh.nCount;
        v6 = v29->Buffer;
      }
    }
  }
  if ( !v8 )
  {
    v20 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 128LL),
            *((struct IDXGISwapChainDWM1 **)this + 38),
            a3,
            a4,
            nCount,
            (const struct tagRECT *)v6,
            0,
            0LL,
            0LL,
            0);
    v17 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xE6u);
    goto LABEL_28;
  }
  v31 = 0LL;
  v21 = 0;
  v32 = 0;
  v22 = 0;
  *(_OWORD *)v30 = 0LL;
  if ( !*((_DWORD *)this + 64) )
  {
LABEL_25:
    v25 = CD2DContext::D2DPresentDWM(
            *(CD2DContext **)(*((_QWORD *)this + 2) + 128LL),
            *((struct IDXGISwapChainDWM1 **)this + 38),
            a3,
            a4,
            nCount,
            (const struct tagRECT *)v6,
            v21,
            v30[0],
            0LL,
            0);
    v17 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xFEu);
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)v30);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v23 = *((_QWORD *)this + 29);
    if ( *(_DWORD *)(v23 + 48LL * v22) == 1 )
    {
      v34 = *(_QWORD *)(v23 + 48LL * v22 + 32);
      v35 = *(_OWORD *)(v23 + 48LL * v22 + 16);
      v24 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
              (__int64)v30,
              (__int64)&v34,
              (unsigned int)v16);
      v17 = v24;
      if ( v24 < 0 )
        break;
    }
    if ( ++v22 >= *((_DWORD *)this + 64) )
    {
      v21 = v32;
      goto LABEL_25;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xF2u);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)v30);
LABEL_32:
  if ( v4 )
    WPF::ProcessHeapImpl::Free(v4);
  ReleaseInterface<IBitmapLock>((__int64 *)&v28);
  return v17;
}
