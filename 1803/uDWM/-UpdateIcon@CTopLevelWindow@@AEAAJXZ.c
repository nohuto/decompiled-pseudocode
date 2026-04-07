/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180019E30
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000D72C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037F30 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  struct CBitmapSource *v1; // rbx
  unsigned int v3; // edi
  CImage *v4; // rcx
  char v6; // r14
  HICON v7; // r9
  char v8; // bp
  int v9; // eax
  int v10; // eax
  struct CBitmapSource *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = (CImage *)*((_QWORD *)this + 65);
  if ( !v4 )
    return v3;
  v6 = *((_DWORD *)v4 + 68) == 0;
  if ( (*((_DWORD *)this + 146) & 0x10000) == 0 || (v7 = *(HICON *)(*((_QWORD *)this + 90) + 136LL)) == 0LL )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(v4, v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x12E0u);
    }
    else if ( v8 != v6 )
    {
      CVisual::SetDirtyFlags(this, 0x1000u);
    }
    goto LABEL_11;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(v7, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v4 = (CImage *)*((_QWORD *)this + 65);
    v1 = v11;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x12DDu);
  v1 = v11;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
