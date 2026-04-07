/*
 * XREFs of ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180037850
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800373C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180037CFC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180037F4C (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007D45C (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001373C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035AD8 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowIconic::LoadCentralImage(CWindowIconic *this)
{
  unsigned int v1; // edi
  char v3; // r14
  int v4; // ecx
  __int64 v5; // rcx
  HICON v6; // rax
  int v7; // eax
  struct CBitmapSource *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v12; // ecx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // eax
  struct CBitmapSource *v15; // [rsp+50h] [rbp+20h] BYREF
  HICON hIcon; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  hIcon = 0LL;
  v3 = 0;
  v15 = 0LL;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v12 = v4 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return v1;
      v13 = (volatile signed __int32 *)*((_QWORD *)this + 3);
    }
    else
    {
      v14 = *((_DWORD *)this + 14) - 1;
      if ( v14 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
        v14 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
      v13 = *(volatile signed __int32 **)(*((_QWORD *)this + 4) + 8LL * v14);
    }
    v15 = (struct CBitmapSource *)v13;
    if ( !v13 )
      goto LABEL_12;
    _InterlockedIncrement(v13 + 2);
  }
  else
  {
    v5 = *((_QWORD *)this + 10);
    v6 = *(HICON *)(v5 + 144);
    if ( v6 || (v6 = *(HICON *)(v5 + 136)) != 0LL )
    {
      hIcon = v6;
    }
    else
    {
      LoadIconWithScaleDown(0LL, (PCWSTR)0x7F00, 32, 32, &hIcon);
      v3 = 1;
    }
    if ( !hIcon )
      goto LABEL_12;
    v7 = CBitmapSource::Create(hIcon, *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v15);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xCDu);
      v8 = v15;
LABEL_10:
      if ( v8 )
        CBaseObject::Release(v8);
      goto LABEL_12;
    }
  }
  v8 = v15;
  if ( v15 )
  {
    v9 = CVisual::SetSize(*((struct tagSIZE **)this + 12), (const struct tagSIZE *)v15 + 3);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xE5u);
    }
    else
    {
      v10 = CImage::SetBitmapSource(*((CImage **)this + 12), v8);
      v1 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xE6u);
    }
    goto LABEL_10;
  }
LABEL_12:
  if ( v3 )
    DestroyIcon(hIcon);
  return v1;
}
