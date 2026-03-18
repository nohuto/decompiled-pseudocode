/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800C5B18
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180048E64 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, int *a2)
{
  int v2; // r9d
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // ebx
  bool v7; // zf

  v2 = 2;
  v3 = 0;
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
    v5 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x31Au);
    return v5;
  }
  if ( a1 > 21 )
  {
    if ( a1 > 23 && (a1 <= 24 || a1 > 26) )
      goto LABEL_12;
LABEL_27:
    v7 = a1 == 16;
    goto LABEL_25;
  }
  if ( a1 >= 17 || a1 <= 0 )
    goto LABEL_12;
  if ( a1 <= 4 )
    goto LABEL_27;
  if ( a1 <= 14 )
  {
LABEL_12:
    a2[1] = 3;
    goto LABEL_13;
  }
  v7 = a1 == 16;
LABEL_25:
  if ( v7 || a1 == 23 || a1 == 26 )
    a2[1] = 1;
  else
    a2[1] = 2;
LABEL_13:
  v5 = 0;
  if ( a1 > 23 )
  {
    if ( a1 <= 27 )
      goto LABEL_18;
    if ( (unsigned int)(a1 - 68) > 1 )
      goto LABEL_48;
  }
  else if ( a1 < 20 )
  {
    if ( a1 > 0 )
    {
      if ( a1 > 16 )
        goto LABEL_18;
      goto LABEL_17;
    }
LABEL_48:
    v5 = -2003292344;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292344, 0x32Eu);
    return v5;
  }
LABEL_17:
  v2 = 1;
LABEL_18:
  if ( v2 == 2 )
    v3 = 1;
  a2[2] = v3;
  return v5;
}
