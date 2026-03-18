/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C000F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CBaseClipMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C0152A70 (-SetFloatProperty@CBaseClipMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  char v4; // di
  float v8; // xmm0_4
  __int64 v9; // rcx
  int v10; // eax
  float *v11; // r9
  unsigned int v12; // edx
  float v13; // xmm1_4
  bool v14; // cl

  v4 = *((_BYTE *)this + 129);
  v8 = 0.0;
  if ( a2 > 0xA )
  {
    switch ( a2 )
    {
      case 0xBu:
        v9 = 108LL;
        goto LABEL_40;
      case 0xCu:
        v9 = 112LL;
        goto LABEL_40;
      case 0xDu:
        v9 = 116LL;
        goto LABEL_40;
      case 0xEu:
        v9 = 120LL;
        goto LABEL_40;
      case 0xFu:
        v9 = 124LL;
        goto LABEL_40;
    }
    return (unsigned int)DirectComposition::CBaseClipMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0xAu:
      v9 = 104LL;
      goto LABEL_40;
    case 4u:
      v8 = FLOAT_N2097152_0;
      v9 = 80LL;
      v10 = -4097;
      goto LABEL_8;
    case 5u:
      v8 = FLOAT_N2097152_0;
      v9 = 84LL;
      v10 = -8193;
      goto LABEL_8;
  }
  if ( a2 != 6 )
  {
    switch ( a2 )
    {
      case 7u:
        v8 = FLOAT_N2097152_0;
        v9 = 92LL;
        v10 = -32769;
        goto LABEL_8;
      case 8u:
        v9 = 96LL;
        goto LABEL_40;
      case 9u:
        v9 = 100LL;
LABEL_40:
        v10 = -2049;
        goto LABEL_8;
    }
    return (unsigned int)DirectComposition::CBaseClipMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v8 = FLOAT_N2097152_0;
  v9 = 88LL;
  v10 = -16385;
LABEL_8:
  v11 = (float *)((char *)this + v9);
  v12 = v4 != 0 ? 0xC000000D : 0;
  if ( (DirectComposition::CRectangleClipMarshaler *)((char *)this + v9) && !v4 )
  {
    v13 = FLOAT_2097152_0;
    if ( a3 <= 2097152.0 )
      v13 = fmaxf(a3, v8);
    if ( *v11 == v13 )
    {
      v14 = 0;
    }
    else
    {
      *v11 = v13;
      v14 = 1;
    }
    *a4 = v14;
    if ( a2 >= 4 && a2 <= 7 )
    {
      *a4 = 1;
      v14 = 1;
    }
    if ( v14 )
      *((_DWORD *)this + 4) &= v10;
  }
  return v12;
}
