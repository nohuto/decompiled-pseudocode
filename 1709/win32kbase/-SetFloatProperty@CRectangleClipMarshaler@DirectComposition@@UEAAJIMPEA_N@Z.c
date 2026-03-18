/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0056C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  float v7; // xmm0_4
  __int64 v8; // rcx
  int v9; // eax
  float v10; // xmm1_4
  bool v11; // dl

  v4 = 0;
  v7 = 0.0;
  if ( a2 > 7 )
  {
    switch ( a2 )
    {
      case 8u:
        v8 = 92LL;
        goto LABEL_37;
      case 9u:
        v8 = 96LL;
        goto LABEL_37;
      case 0xAu:
        v8 = 100LL;
        goto LABEL_37;
      case 0xBu:
        v8 = 104LL;
        goto LABEL_37;
      case 0xCu:
        v8 = 108LL;
        goto LABEL_37;
    }
    return (unsigned int)-1073741811;
  }
  switch ( a2 )
  {
    case 7u:
      v8 = 88LL;
      goto LABEL_37;
    case 1u:
      v7 = FLOAT_N2097152_0;
      v8 = 64LL;
      v9 = -513;
      goto LABEL_8;
    case 2u:
      v7 = FLOAT_N2097152_0;
      v8 = 68LL;
      v9 = -1025;
      goto LABEL_8;
    case 3u:
      v7 = FLOAT_N2097152_0;
      v8 = 72LL;
      v9 = -2049;
      goto LABEL_8;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 5 )
    {
      v8 = 80LL;
      goto LABEL_37;
    }
    if ( a2 == 6 )
    {
      v8 = 84LL;
LABEL_37:
      v9 = -257;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  v7 = FLOAT_N2097152_0;
  v8 = 76LL;
  v9 = -4097;
LABEL_8:
  v10 = FLOAT_2097152_0;
  if ( a3 <= 2097152.0 )
    v10 = fmaxf(a3, v7);
  if ( *(float *)((char *)this + v8) == v10 )
  {
    v11 = 0;
  }
  else
  {
    *(float *)((char *)this + v8) = v10;
    v11 = 1;
  }
  if ( a2 - 1 <= 3 )
    v11 = 1;
  *a4 = v11;
  if ( v11 )
    *((_DWORD *)this + 4) &= v9;
  return v4;
}
