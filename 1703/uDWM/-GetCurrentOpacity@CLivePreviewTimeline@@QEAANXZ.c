/*
 * XREFs of ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180077808
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180075250 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x180080874 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

double __fastcall CLivePreviewTimeline::GetCurrentOpacity(CLivePreviewTimeline *this)
{
  double result; // xmm0_8
  int v2; // edx
  int v3; // edx

  result = DOUBLE_1_0;
  v2 = *((_DWORD *)this + 20);
  if ( *((_BYTE *)this + 72) )
  {
    if ( v2 == 3 )
      return 0.0;
  }
  else
  {
    v3 = v2 - 3;
    if ( v3 )
    {
      if ( v3 == 1 )
        return (1.0 - *((double *)this + 11)) * *((double *)this + 6) + *((double *)this + 11);
    }
    else
    {
      return (1.0 - *((double *)this + 6)) * *((double *)this + 11);
    }
  }
  return result;
}
