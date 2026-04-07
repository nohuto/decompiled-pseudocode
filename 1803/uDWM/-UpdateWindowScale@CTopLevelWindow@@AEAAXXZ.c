/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019D60
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180025A44 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180025A8C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180025B08 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x18004B34E (fmodf_0.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  CVisual *v5; // rcx

  *((_DWORD *)this + 170) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 67);
  if ( !v2 )
    goto LABEL_6;
  CVisual::SetScale(v2, *(float *)(*((_QWORD *)this + 90) + 172LL), *(float *)(*((_QWORD *)this + 90) + 176LL));
  v3 = *((_QWORD *)this + 90);
  if ( fmodf_0(*(float *)(v3 + 172), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 176), 1.0) == 0.0 )
  {
    v4 = 0LL;
LABEL_5:
    CVisual::SetInterpolationMode(*((_QWORD *)this + 67), v4);
    goto LABEL_6;
  }
  if ( *(float *)(v3 + 172) < 1.0 || *(float *)(v3 + 176) < 1.0 )
  {
    v4 = 6LL;
    goto LABEL_5;
  }
  CVisual::ClearInterpolationMode(*((CVisual **)this + 67));
LABEL_6:
  v5 = (CVisual *)*((_QWORD *)this + 36);
  if ( v5 )
    CVisual::SetScale(v5, *(float *)(*((_QWORD *)this + 90) + 172LL), *(float *)(*((_QWORD *)this + 90) + 176LL));
}
