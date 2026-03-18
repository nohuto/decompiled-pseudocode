/*
 * XREFs of ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B2310
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18011B660 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGI_SCROLL_RECT@@$0A@@@QEAAJPEFBUDXGI_SCROLL_RECT@@I@Z @ 0x1801AFBB0 (-AddMultipleAndSet@-$DynArray@UDXGI_SCROLL_RECT@@$0A@@@QEAAJPEFBUDXGI_SCROLL_RECT@@I@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1801B05C0 (-GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CDWMSwapChainDDA::PresentInternal(
        CDWMSwapChainDDA *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // esi
  unsigned int v8; // eax
  int *v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  signed int Buffer; // eax
  unsigned int v14; // ebx
  signed int appended; // eax
  unsigned int v16; // r8d
  signed int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // esi
  __int64 v20; // rdx
  signed int v21; // eax
  signed int v22; // eax
  struct ID3D11Texture2D *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGI_SCROLL_RECT *v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  unsigned int v27; // [rsp+70h] [rbp-90h]
  unsigned int v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h]
  struct tagRECT *v31[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  unsigned int v33[2]; // [rsp+B4h] [rbp-4Ch]
  _BYTE v34[256]; // [rsp+C0h] [rbp-40h] BYREF

  v31[0] = (struct tagRECT *)v34;
  v24 = 0LL;
  v31[1] = (struct tagRECT *)v34;
  v32 = 16;
  v7 = 0;
  *(_QWORD *)v33 = 16LL;
  v8 = *((_DWORD *)this + 92);
  if ( v8 )
  {
    v9 = (int *)*((_QWORD *)this + 43);
    v10 = v8;
    do
    {
      v11 = *v9;
      v12 = v7 + 1;
      v9 += 12;
      if ( v11 != 1 )
        v12 = v7;
      v7 = v12;
      --v10;
    }
    while ( v10 );
  }
  Buffer = CDWMSwapChain::GetBuffer(this, 0LL, &v28, &v24);
  v14 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Buffer, 0x5Au);
  }
  else
  {
    if ( g_LockAndReadDDATarget )
      DebugInspectTexture(v24, 0);
    v33[1] = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(
                 (CDWMSwapChainDDA *)((char *)this + 272),
                 (__int64)v31);
    v14 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x69u);
    }
    else if ( v7 )
    {
      v18 = 0;
      v19 = 0;
      v27 = 0;
      *(_OWORD *)v25 = 0LL;
      v26 = 0LL;
      if ( *((_DWORD *)this + 92) )
      {
        while ( 1 )
        {
          v20 = *((_QWORD *)this + 43);
          if ( *(_DWORD *)(v20 + 48LL * v19) == 1 )
          {
            v29 = *(_QWORD *)(v20 + 48LL * v19 + 32);
            v30 = *(_OWORD *)(v20 + 48LL * v19 + 16);
            v21 = DynArray<DXGI_SCROLL_RECT,0>::AddMultipleAndSet((__int64)v25, (__int64)&v29, v16);
            v14 = v21;
            if ( v21 < 0 )
              break;
          }
          if ( ++v19 >= *((_DWORD *)this + 92) )
          {
            v18 = v27;
            goto LABEL_18;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x83u);
      }
      else
      {
LABEL_18:
        v22 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                *((struct IDXGISwapChainDWM1 **)this + 52),
                a3,
                a4,
                v33[1],
                v31[0],
                v18,
                v25[0],
                0LL,
                0);
        v14 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x8Fu);
      }
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)v25);
    }
    else
    {
      v17 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
              *((struct IDXGISwapChainDWM1 **)this + 52),
              a3,
              a4,
              v33[1],
              v31[0],
              0,
              0LL,
              0LL,
              0);
      v14 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x75u);
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v24);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)v31);
  return v14;
}
