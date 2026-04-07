/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019F00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BF28 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180019468 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800194E4 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x18004674E (fmodf_0.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  int v4; // edx
  CVisual *v5; // rcx

  *((_DWORD *)this + 170) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 67);
  if ( !v2 )
    goto LABEL_6;
  CVisual::SetScale(v2, *(float *)(*((_QWORD *)this + 90) + 180LL), *(float *)(*((_QWORD *)this + 90) + 184LL));
  v3 = *((_QWORD *)this + 90);
  if ( fmodf_0(*(float *)(v3 + 180), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 184), 1.0) == 0.0 )
  {
    v4 = 0;
LABEL_5:
    CVisual::SetInterpolationMode(*((CVisual **)this + 67), v4);
    goto LABEL_6;
  }
  if ( *(float *)(v3 + 180) < 1.0 || *(float *)(v3 + 184) < 1.0 )
  {
    v4 = 6;
    goto LABEL_5;
  }
  CVisual::ClearInterpolationMode(*((CVisual **)this + 67));
LABEL_6:
  v5 = (CVisual *)*((_QWORD *)this + 36);
  if ( v5 )
    CVisual::SetScale(v5, *(float *)(*((_QWORD *)this + 90) + 180LL), *(float *)(*((_QWORD *)this + 90) + 184LL));
}
