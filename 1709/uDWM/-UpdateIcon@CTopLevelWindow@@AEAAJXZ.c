/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180019FD0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001373C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035AD8 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  struct CBitmapSource *v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  char v6; // r14
  HICON v7; // rcx
  char v8; // bp
  int v9; // eax
  int v10; // eax
  struct CBitmapSource *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = *((_QWORD *)this + 65);
  if ( !v4 )
    return v3;
  v6 = *(_DWORD *)(v4 + 272) == 0;
  if ( (*((_DWORD *)this + 146) & 0x10000) == 0 || (v7 = *(HICON *)(*((_QWORD *)this + 90) + 136LL)) == 0LL )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(*((CImage **)this + 65), v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1291u);
    }
    else if ( v8 != v6 )
    {
      CVisual::SetDirtyFlags(this, 4096);
    }
    goto LABEL_11;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(v7, *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v1 = v11;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x128Eu);
  v1 = v11;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
