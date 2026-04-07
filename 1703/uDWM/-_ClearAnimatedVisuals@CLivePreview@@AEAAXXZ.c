/*
 * XREFs of ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18007585C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180075250 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CLivePreview::_ClearAnimatedVisuals(CLivePreview *this)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rbx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CTopLevelWindow *v7; // rcx

  v2 = *((_DWORD *)this + 82) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *(CBaseObject **)(*((_QWORD *)this + 38) + v4 + 8);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *(_QWORD *)(*((_QWORD *)this + 38) + v4 + 8) = 0LL;
      }
      v6 = *(CBaseObject **)(*((_QWORD *)this + 38) + v4 + 16);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(*((_QWORD *)this + 38) + v4 + 16) = 0LL;
      }
      v7 = *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 38) + v4) + 400LL);
      if ( v7 )
        CTopLevelWindow::StopLivePreviewAnimation(v7);
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 304, 0x28u);
}
