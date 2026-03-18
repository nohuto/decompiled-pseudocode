/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z @ 0x1C008E9C4
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C008DAAC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C008F420 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, unsigned __int16 *a2)
{
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v4; // rcx
  float v5; // xmm0_4
  unsigned __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 96;
  if ( a2 )
  {
    ScaledLogPixels = *a2;
  }
  else
  {
    if ( !(unsigned int)UserIsGDIScalingApplicable(*((_QWORD *)this + 5)) )
      goto LABEL_3;
    v4 = *((_QWORD *)this + 5);
    if ( !v4 )
      return;
    if ( (unsigned int)UserGetHwndDpi(v4, &v6) )
      ScaledLogPixels = GreGetScaledLogPixels(v6);
    else
LABEL_3:
      ScaledLogPixels = v6;
  }
  if ( ScaledLogPixels == 96 )
  {
    if ( (*((_DWORD *)this + 50) & 0x20) != 0 )
    {
      *((_DWORD *)this + 46) = 0;
      *((_DWORD *)this + 47) = 0;
      *((_DWORD *)this + 50) &= ~0x20u;
    }
  }
  else
  {
    v5 = (float)ScaledLogPixels / 96.0;
    *((float *)this + 46) = v5;
    *((float *)this + 47) = v5;
    *((_DWORD *)this + 50) |= 0x20u;
  }
}
