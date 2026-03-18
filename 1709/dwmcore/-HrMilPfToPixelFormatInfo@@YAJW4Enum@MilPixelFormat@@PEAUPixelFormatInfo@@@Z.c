/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800872BC
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180086F90 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, int *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // edx
  bool v7; // zf

  v2 = 0;
  if ( a1 > 20 )
  {
    if ( a1 > 27 )
    {
      v4 = 28;
      if ( a1 == 69 )
        goto LABEL_6;
    }
    else if ( a1 != 27 && a1 != 21 && a1 != 22 )
    {
      if ( a1 == 23 )
      {
        v4 = 11;
        goto LABEL_6;
      }
      if ( a1 == 26 )
      {
        v4 = 2;
        goto LABEL_6;
      }
    }
  }
  else
  {
    if ( a1 == 20 )
    {
      v4 = 24;
      goto LABEL_6;
    }
    if ( a1 <= 13 )
    {
      if ( a1 < 12 && a1 >= 8 )
      {
        if ( a1 == 8 )
        {
          v4 = 61;
          goto LABEL_6;
        }
        if ( a1 != 9 && a1 != 10 )
        {
          v4 = 49;
          goto LABEL_6;
        }
      }
    }
    else
    {
      if ( a1 == 14 )
      {
        v4 = 88;
        goto LABEL_6;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        v4 = 87;
        goto LABEL_6;
      }
    }
  }
  v4 = 0;
LABEL_6:
  *a2 = v4;
  if ( !v4 )
  {
    v2 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F80, 0x33Du);
    return v2;
  }
  v5 = 1;
  if ( a1 > 21 )
  {
    if ( a1 > 23 && (a1 <= 24 || a1 > 26) )
      goto LABEL_12;
LABEL_24:
    v7 = a1 == 16;
    goto LABEL_22;
  }
  if ( a1 >= 17 || a1 <= 0 )
    goto LABEL_12;
  if ( a1 <= 4 )
    goto LABEL_24;
  if ( a1 <= 14 )
  {
LABEL_12:
    a2[1] = 3;
    goto LABEL_13;
  }
  v7 = a1 == 16;
LABEL_22:
  if ( v7 || a1 == 23 || a1 == 26 )
    a2[1] = 1;
  else
    a2[1] = 2;
LABEL_13:
  if ( a1 > 23 )
  {
    if ( a1 <= 27 )
      goto LABEL_53;
    if ( (unsigned int)(a1 - 68) <= 1 )
      goto LABEL_17;
    goto LABEL_45;
  }
  if ( a1 < 20 )
  {
    if ( a1 > 0 )
    {
      if ( a1 <= 16 )
        goto LABEL_17;
LABEL_53:
      v5 = 2;
      goto LABEL_17;
    }
LABEL_45:
    v2 = -2003292344;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F48, 0x351u);
    return v2;
  }
LABEL_17:
  a2[2] = v5 == 2;
  return v2;
}
