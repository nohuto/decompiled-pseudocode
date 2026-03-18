/*
 * XREFs of ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0
 * Callers:
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800B139C (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180163AE0 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800B104C (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B1EEC (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18012D59C (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 */

__int64 __fastcall CFlipChain::CacheSharedHandle(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int a5)
{
  CDisplaySet *v5; // r15
  char v6; // r12
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // r9d
  __int64 v15; // r10
  __int64 v16; // r12
  int CurrentDisplaySet; // eax
  int DisplayIdFromMonitor; // eax
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // ecx
  int v22; // edx
  __int64 v23; // rcx
  int SharedHandleBitmap; // eax
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-60h]
  unsigned int v28; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v29[12]; // [rsp+64h] [rbp-1Ch] BYREF
  int v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+74h] [rbp-Ch]
  struct CBitmapOfDeviceBitmaps *v32; // [rsp+78h] [rbp-8h] BYREF

  v5 = 0LL;
  v28 = 0;
  v6 = a4;
  *(_QWORD *)&v29[4] = 0LL;
  v10 = CFlipChain::SurfaceIndexFromDisplayIds(this, a2, a3, a4, &v28);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F0F90, 4u, v10, 0x356u);
    goto LABEL_6;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v26 = CBitmapOfDeviceBitmaps::Create(
            *((_DWORD *)this + 18),
            *((_DWORD *)this + 19),
            (CFlipChain *)((char *)this + 284),
            &v32);
    v11 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1D1u);
    if ( v11 < 0 )
    {
      v27 = 860;
      v13 = v11;
      goto LABEL_5;
    }
    v12 = CFlipChain::AddBuffer(this, &v32);
    v11 = v12;
    if ( v12 < 0 )
    {
      v27 = 863;
      v13 = v12;
LABEL_5:
      MilInstrumentationCheckHR(0x14u, &dword_1801F0F90, 4u, v13, v27);
      goto LABEL_6;
    }
  }
  v15 = a5;
  v16 = a5 + 11LL * v28;
  v32 = *(struct CBitmapOfDeviceBitmaps **)(*((_QWORD *)this + 28) + 8 * v16 + 24);
  if ( v32 )
    goto LABEL_22;
  *(_DWORD *)v29 = 0;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(0LL, (const struct CDisplaySet **)&v29[4]);
    v11 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F0F90, 4u, CurrentDisplaySet, 0x373u);
      v5 = *(CDisplaySet **)&v29[4];
      goto LABEL_22;
    }
    v5 = *(CDisplaySet **)&v29[4];
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(*(CDisplaySet **)&v29[4], a3, (struct DisplayId *)v29);
    v11 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F0F90, 4u, DisplayIdFromMonitor, 0x376u);
      goto LABEL_22;
    }
    v19 = *(_DWORD *)v29;
    v15 = a5;
  }
  else
  {
    v19 = DisplayId::None;
  }
  v20 = *((_DWORD *)this + 19);
  v21 = *((_DWORD *)this + 71);
  v22 = *((_DWORD *)this + 18);
  *(_DWORD *)&v29[8] = 0;
  *(_QWORD *)v29 = v21;
  v23 = *((_QWORD *)this + 4);
  v31 = v20;
  v30 = v22;
  SharedHandleBitmap = CD3DDeviceManager::CreateSharedHandleBitmap(
                         (int)&qword_18023E820,
                         *(_QWORD *)(*((_QWORD *)this + 17) + 16 * v15),
                         v28,
                         (int)&v29[4],
                         (__int64)v29,
                         1,
                         1,
                         (struct _GUID *)(v23 + 324),
                         a2,
                         v19,
                         (__int64)&v32);
  v11 = SharedHandleBitmap;
  if ( SharedHandleBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F0F90, 4u, SharedHandleBitmap, 0x39Cu);
LABEL_22:
    v6 = a4;
    goto LABEL_6;
  }
  *(_DWORD *)(88LL * v28 + *((_QWORD *)this + 28) + 20) = *(_DWORD *)v29;
  *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v16 + 24) = v32;
  v6 = a4;
  if ( a4 && !*((_BYTE *)this + 282) )
  {
    v25 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 282) = 1;
    ++*(_DWORD *)(v25 + 280);
  }
LABEL_6:
  if ( v11 == -2003304294 )
    *((_BYTE *)this + 280) |= 1u;
  if ( v6 && v11 == -2147024809 && a3 == *((HMONITOR *)this + 33) )
    *((_BYTE *)this + 280) |= 2u;
  if ( v5 )
    CDisplaySet::Release(v5);
  return (unsigned int)v11;
}
