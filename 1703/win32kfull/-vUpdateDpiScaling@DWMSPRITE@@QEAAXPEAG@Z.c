/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z @ 0x1C0026680
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, unsigned __int16 *a2)
{
  unsigned __int16 ScaledLogPixels; // ax
  float v4; // xmm0_4
  unsigned __int16 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 96;
  if ( a2 )
  {
    ScaledLogPixels = *a2;
  }
  else
  {
    if ( !*((_QWORD *)this + 5) )
      goto LABEL_6;
    if ( (unsigned int)UserIsGDIScalingApplicable() && (unsigned int)UserGetHwndDpi(*((_QWORD *)this + 5), &v5) )
      ScaledLogPixels = GreGetScaledLogPixels(v5);
    else
      ScaledLogPixels = v5;
  }
  if ( ScaledLogPixels != 96 )
  {
    v4 = (float)ScaledLogPixels / 96.0;
    *((float *)this + 46) = v4;
    *((float *)this + 47) = v4;
    *((_DWORD *)this + 50) |= 0x20u;
    return;
  }
LABEL_6:
  if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
  {
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 47) = 0;
    *((_DWORD *)this + 50) &= ~0x20u;
  }
}
