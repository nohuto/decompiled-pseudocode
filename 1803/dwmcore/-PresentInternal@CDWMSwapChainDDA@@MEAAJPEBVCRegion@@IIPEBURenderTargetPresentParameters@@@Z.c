/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1801EAF10
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18007D500 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18007D9BC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18013E134 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CDWMSwapChainDDA::PresentInternal(
        CDWMSwapChainDDA *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // edi
  unsigned int v8; // eax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf
  int v12; // eax
  int Buffer; // eax
  int v14; // ebx
  int appended; // eax
  int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  struct DXGI_SCROLL_RECT *v24; // rax
  int v25; // eax
  int v26; // eax
  unsigned int v29; // [rsp+54h] [rbp-ACh] BYREF
  struct ID3D11Texture2D *v30; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGI_SCROLL_RECT *v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  unsigned int v33; // [rsp+78h] [rbp-88h]
  _BYTE v34[24]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v35[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+B0h] [rbp-50h]
  unsigned int v37[2]; // [rsp+B4h] [rbp-4Ch]
  _BYTE v38[256]; // [rsp+C0h] [rbp-40h] BYREF

  v30 = 0LL;
  v35[0] = (struct tagRECT *)v38;
  v35[1] = (struct tagRECT *)v38;
  v7 = 0;
  v36 = 16;
  *(_QWORD *)v37 = 16LL;
  v8 = *((_DWORD *)this + 92);
  if ( v8 )
  {
    v9 = (_DWORD *)*((_QWORD *)this + 43);
    v10 = v8;
    do
    {
      v11 = *v9 == 1;
      v12 = v7 + 1;
      v9 += 12;
      if ( !v11 )
        v12 = v7;
      v7 = v12;
      --v10;
    }
    while ( v10 );
  }
  Buffer = CDWMSwapChain::GetBuffer(this, 0LL, &v29, &v30);
  v14 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Buffer, 0x5Au);
  }
  else
  {
    if ( g_LockAndReadDDATarget )
      DebugInspectTexture(v30, 0);
    v37[1] = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(
                 (CDWMSwapChainDDA *)((char *)this + 272),
                 (__int64)v35);
    v14 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x69u);
    }
    else if ( v7 )
    {
      v32 = 0LL;
      v17 = 0;
      v33 = 0;
      v18 = 0;
      *(_OWORD *)v31 = 0LL;
      if ( *((_DWORD *)this + 92) )
      {
        v19 = v29;
        while ( 1 )
        {
          v20 = *((_QWORD *)this + 43);
          if ( *(_DWORD *)(v20 + 48LL * v18) == 1 )
          {
            *(_QWORD *)v34 = *(_QWORD *)(v20 + 48LL * v18 + 32);
            v21 = v17 + 1;
            if ( v17 + 1 >= v17 )
              v19 = v17 + 1;
            v14 = v21 < v17 ? 0x80070216 : 0;
            *(_OWORD *)&v34[8] = *(_OWORD *)(v20 + 48LL * v18 + 16);
            if ( v21 < v17 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
            }
            else if ( v19 > HIDWORD(v32) )
            {
              v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v31, 0x18u, 1, v34);
              v14 = v25;
              if ( v25 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
              v17 = v33;
            }
            else
            {
              v22 = v17;
              v17 = v19;
              v33 = v19;
              v23 = 3 * v22;
              v24 = v31[0];
              *(_OWORD *)((char *)v31[0] + 8 * v23) = *(_OWORD *)v34;
              *((_QWORD *)v24 + v23 + 2) = *(_QWORD *)&v34[16];
            }
            if ( v14 < 0 )
              break;
          }
          if ( ++v18 >= *((_DWORD *)this + 92) )
            goto LABEL_27;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x83u);
      }
      else
      {
LABEL_27:
        v26 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                *((struct IDXGISwapChainDWM1 **)this + 53),
                a3,
                a4,
                v37[1],
                v35[0],
                v17,
                v31[0],
                0LL,
                0);
        v14 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x8Fu);
      }
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v31);
    }
    else
    {
      v16 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
              *((struct IDXGISwapChainDWM1 **)this + 53),
              a3,
              a4,
              v37[1],
              v35[0],
              0,
              0LL,
              0LL,
              0);
      v14 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x75u);
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v30);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v35);
  return (unsigned int)v14;
}
