/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C002C2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v7; // edx
  bool v8; // cl
  float v9; // xmm1_4
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // r10d

  result = 0LL;
  if ( a2 > 0x17 )
  {
    switch ( a2 )
    {
      case 0x1Du:
        v7 = 0x400000;
        if ( *((float *)this + 19) != a3 )
        {
          *((float *)this + 19) = a3;
          goto LABEL_10;
        }
        break;
      case 0x1Eu:
        v7 = 0x400000;
        if ( *((float *)this + 20) != a3 )
        {
          *((float *)this + 20) = a3;
          goto LABEL_10;
        }
        break;
      case 0x1Fu:
        v7 = 0x400000;
        if ( *((float *)this + 21) != a3 )
        {
          *((float *)this + 21) = a3;
          goto LABEL_10;
        }
        break;
      case 0x20u:
        v7 = 0x800000;
        if ( *((float *)this + 22) != a3 )
        {
          *((float *)this + 22) = a3;
          goto LABEL_10;
        }
        break;
      case 0x21u:
        v7 = 0x800000;
        if ( *((float *)this + 23) != a3 )
        {
          *((float *)this + 23) = a3;
          goto LABEL_10;
        }
        break;
      default:
        return 3221225485LL;
    }
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  switch ( a2 )
  {
    case 0x17u:
      v7 = 0x200000;
      v9 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *((float *)this + 24) != v9 )
      {
        *((float *)this + 24) = v9;
        goto LABEL_10;
      }
      goto LABEL_12;
    case 0u:
      v7 = 128;
      if ( *((float *)this + 14) != a3 )
      {
        *((float *)this + 14) = a3;
        goto LABEL_10;
      }
      goto LABEL_12;
    case 1u:
      v7 = 128;
      if ( *((float *)this + 15) != a3 )
      {
        *((float *)this + 15) = a3;
        goto LABEL_10;
      }
      goto LABEL_12;
    case 2u:
      v7 = 128;
      if ( *((float *)this + 16) != a3 )
      {
        *((float *)this + 16) = a3;
        goto LABEL_10;
      }
      goto LABEL_12;
    case 0x15u:
      v7 = 0x100000;
      if ( *((float *)this + 17) != a3 )
      {
        *((float *)this + 17) = a3;
        goto LABEL_10;
      }
      goto LABEL_12;
  }
  if ( a2 != 22 )
    return 3221225485LL;
  v7 = 0x100000;
  if ( *((float *)this + 18) == a3 )
    goto LABEL_12;
  *((float *)this + 18) = a3;
LABEL_10:
  v8 = 1;
LABEL_13:
  *a4 = v8;
  v10 = 0LL;
  v11 = *((_QWORD *)this + 4);
  v12 = 0LL;
  if ( v11 )
  {
    do
    {
      if ( *(_DWORD *)(v11 + 12) == a2 )
      {
        v13 = *(_DWORD *)(v11 + 8);
        if ( (v13 & 1) != 0 )
          goto LABEL_54;
        if ( (v13 & 2) != 0 )
        {
          v10 = v11;
          if ( v12 )
            break;
        }
        else if ( (v13 & 4) != 0 )
        {
          v12 = v11;
          if ( v10 )
            goto LABEL_54;
        }
      }
      v11 = *(_QWORD *)(v11 + 32);
    }
    while ( v11 );
    if ( !v10 )
      goto LABEL_14;
LABEL_54:
    *a4 = 1;
  }
LABEL_14:
  if ( a2 <= 2 || a2 - 21 <= 2 )
    *a4 = 1;
  if ( *a4 )
    *((_DWORD *)this + 4) |= v7;
  return result;
}
