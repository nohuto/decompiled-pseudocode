/*
 * XREFs of ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180164CB4
 * Callers:
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180164F84 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1801659C0 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18007DBD8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x180164B00 (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180165E24 (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18018EB98 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801A5460 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 */

__int64 __fastcall CFlipChain::CacheSharedHandle(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        bool a4,
        unsigned int a5)
{
  CDisplaySet *v5; // r15
  bool v6; // r12
  signed int v10; // eax
  int v11; // edi
  signed int v12; // eax
  int v13; // eax
  DWORD v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r12
  signed int CurrentDisplaySet; // eax
  signed int DisplayIdFromMonitor; // eax
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // r9d
  __int64 v24; // rdx
  signed int SharedHandleBitmap; // eax
  __int64 v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-50h]
  int v28; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v29[12]; // [rsp+54h] [rbp-1Ch] BYREF
  int v30; // [rsp+60h] [rbp-10h]
  int v31; // [rsp+64h] [rbp-Ch]
  struct CBitmapOfDeviceBitmaps *v32; // [rsp+68h] [rbp-8h] BYREF

  v5 = 0LL;
  v28 = 0;
  v6 = a4;
  *(_QWORD *)&v29[4] = 0LL;
  v10 = CFlipChain::SurfaceIndexFromDisplayIds(this, a2, a3, a4, (unsigned int *)&v28);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AA08, 4u, v10, 0x356u);
    goto LABEL_17;
  }
  if ( !*((_DWORD *)this + 42) )
  {
    v12 = CBitmapOfDeviceBitmaps::Create(
            *((_DWORD *)this + 18),
            *((_DWORD *)this + 19),
            (CFlipChain *)((char *)this + 292),
            &v32);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1D1u);
    if ( v11 < 0 )
    {
      v27 = 860;
      v14 = v11;
      goto LABEL_9;
    }
    v13 = CFlipChain::AddBuffer(this, &v32);
    v11 = v13;
    if ( v13 < 0 )
    {
      v27 = 863;
      v14 = v13;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AA08, 4u, v14, v27);
      goto LABEL_17;
    }
  }
  v15 = a5;
  v16 = a5 + 11LL * (unsigned int)v28;
  v32 = *(struct CBitmapOfDeviceBitmaps **)(*((_QWORD *)this + 29) + 8 * v16 + 24);
  if ( v32 )
  {
LABEL_16:
    v6 = a4;
    goto LABEL_17;
  }
  *(_DWORD *)v29 = 0;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(0LL, (const struct CDisplaySet **)&v29[4]);
    v11 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AA08, 4u, CurrentDisplaySet, 0x373u);
      v5 = *(CDisplaySet **)&v29[4];
      goto LABEL_16;
    }
    v5 = *(CDisplaySet **)&v29[4];
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(*(CDisplaySet **)&v29[4], a3, (struct DisplayId *)v29);
    v11 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AA08, 4u, DisplayIdFromMonitor, 0x376u);
      goto LABEL_16;
    }
    v20 = *(_DWORD *)v29;
    v15 = a5;
  }
  else
  {
    v20 = DisplayId::None;
  }
  v21 = *((_DWORD *)this + 73);
  v22 = *((_DWORD *)this + 18);
  v23 = *((_DWORD *)this + 19);
  *(_DWORD *)&v29[8] = 0;
  *(_QWORD *)v29 = v21;
  v30 = v22;
  v24 = *((_QWORD *)this + 18);
  v31 = v23;
  SharedHandleBitmap = CD3DDeviceManager::CreateSharedHandleBitmap(
                         (int)&qword_18026EEF0,
                         *(_QWORD *)(v24 + 16 * v15),
                         v28,
                         (int)&v29[4],
                         (__int64)v29,
                         1,
                         1,
                         a2,
                         v20,
                         (__int64)&v32);
  v11 = SharedHandleBitmap;
  if ( SharedHandleBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AA08, 4u, SharedHandleBitmap, 0x39Bu);
    goto LABEL_16;
  }
  *(_DWORD *)(88LL * (unsigned int)v28 + *((_QWORD *)this + 29) + 20) = *(_DWORD *)v29;
  *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v16 + 24) = v32;
  v6 = a4;
  if ( a4 && !*((_BYTE *)this + 290) )
  {
    v26 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 290) = 1;
    ++*(_DWORD *)(v26 + 256);
  }
LABEL_17:
  if ( v11 == -2003304294 )
    *((_BYTE *)this + 288) |= 1u;
  if ( v6 && a3 == *((HMONITOR *)this + 34) && v11 == -2147024809 )
    *((_BYTE *)this + 288) |= 2u;
  if ( v5 )
    CDisplaySet::Release(v5);
  return (unsigned int)v11;
}
