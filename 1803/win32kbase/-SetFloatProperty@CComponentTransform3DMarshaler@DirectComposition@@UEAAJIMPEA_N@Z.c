/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0007940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetFloatProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  bool v11; // dl
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  bool v18; // dl
  bool v19; // dl
  bool v20; // dl
  bool v21; // dl
  bool v22; // dl

  result = 0LL;
  if ( a2 <= 8 )
  {
    if ( a2 == 8 )
    {
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
        goto LABEL_32;
      }
      goto LABEL_30;
    }
    if ( a2 )
    {
      v12 = a2 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    return 3221225485LL;
                  if ( *((float *)this + 21) == a3 )
                    goto LABEL_30;
                  *((float *)this + 21) = a3;
LABEL_32:
                  v18 = 1;
                  goto LABEL_33;
                }
                if ( *((float *)this + 20) != a3 )
                {
                  *((float *)this + 20) = a3;
                  goto LABEL_32;
                }
              }
              else if ( *((float *)this + 19) != a3 )
              {
                *((float *)this + 19) = a3;
                goto LABEL_32;
              }
LABEL_30:
              v18 = 0;
LABEL_33:
              *a4 = v18;
              *((_DWORD *)this + 4) &= ~0x200u;
              goto LABEL_12;
            }
            if ( *((float *)this + 18) == a3 )
              goto LABEL_39;
            *((float *)this + 18) = a3;
          }
          else
          {
            if ( *((float *)this + 17) == a3 )
            {
LABEL_39:
              v19 = 0;
LABEL_42:
              *a4 = v19;
              *((_DWORD *)this + 4) &= ~0x100u;
              goto LABEL_12;
            }
            *((float *)this + 17) = a3;
          }
          v19 = 1;
          goto LABEL_42;
        }
        if ( *((float *)this + 16) == a3 )
          goto LABEL_46;
        *((float *)this + 16) = a3;
LABEL_48:
        v20 = 1;
        goto LABEL_49;
      }
      if ( *((float *)this + 15) != a3 )
      {
        *((float *)this + 15) = a3;
        goto LABEL_48;
      }
    }
    else if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_48;
    }
LABEL_46:
    v20 = 0;
LABEL_49:
    *a4 = v20;
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_12;
  }
  v5 = a2 - 9;
  if ( !v5 )
  {
    if ( *((float *)this + 23) != a3 )
    {
      *((float *)this + 23) = a3;
      goto LABEL_67;
    }
    goto LABEL_65;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 24) != a3 )
    {
      *((float *)this + 24) = a3;
      goto LABEL_67;
    }
LABEL_65:
    v22 = 0;
LABEL_68:
    *a4 = v22;
    *((_DWORD *)this + 4) &= ~0x800u;
    goto LABEL_12;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 25) != a3 )
    {
      *((float *)this + 25) = a3;
LABEL_67:
      v22 = 1;
      goto LABEL_68;
    }
    goto LABEL_65;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 26) == a3 )
    {
      v21 = 0;
    }
    else
    {
      *((float *)this + 26) = a3;
      v21 = 1;
    }
    *a4 = v21;
    *((_DWORD *)this + 4) &= ~0x400u;
    goto LABEL_12;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    if ( *((float *)this + 27) == a3 )
      goto LABEL_10;
    *((float *)this + 27) = a3;
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *((float *)this + 28) == a3 )
      goto LABEL_10;
    *((float *)this + 28) = a3;
    goto LABEL_15;
  }
  if ( v10 == 1 )
  {
    if ( *((float *)this + 29) == a3 )
    {
LABEL_10:
      v11 = 0;
LABEL_11:
      *a4 = v11;
      *((_DWORD *)this + 4) &= ~0x1000u;
LABEL_12:
      *a4 = 1;
      return result;
    }
    *((float *)this + 29) = a3;
LABEL_15:
    v11 = 1;
    goto LABEL_11;
  }
  return 3221225485LL;
}
