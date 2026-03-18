/*
 * XREFs of ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0147310
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1C0146FBC (DirectComposition--_anonymous_namespace_--UpdatePropertyIfChanged_float_.c)
 *     ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x1C01471C8 (-EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimati.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetFloatProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  float *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r10d
  float *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rcx
  float *v20; // rdx
  __int64 v21; // rcx

  *a4 = 0;
  if ( a2 > 0x25 )
  {
    v15 = a2 - 39;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
              return (unsigned int)-1073741811;
            v11 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(this);
            if ( (v11 & 0x80000000) != 0 )
              return v11;
            if ( a3 < 0.0 )
              return (unsigned int)-1073741811;
            *(float *)(v19 + 164) = a3;
          }
          else
          {
            v11 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties(this);
            if ( (v11 & 0x80000000) != 0 )
              return v11;
            if ( a3 < 0.0 )
              return (unsigned int)-1073741811;
            *(float *)(v19 + 160) = a3;
          }
          *(_DWORD *)(v19 + 16) |= 0x10000u;
          return v11;
        }
        v20 = (float *)((char *)this + 152);
      }
      else
      {
        v20 = (float *)((char *)this + 148);
      }
    }
    else
    {
      v20 = (float *)((char *)this + 144);
    }
    if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v20, a4) )
      *(_DWORD *)(v21 + 16) |= 0x8000u;
  }
  else
  {
    if ( a2 == 37 )
    {
      v9 = (float *)((char *)this + 128);
      goto LABEL_11;
    }
    v4 = a2 - 16;
    if ( v4 )
    {
      v5 = v4 - 15;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 2;
            if ( v8 )
            {
              if ( v8 == 1 )
              {
                v9 = (float *)((char *)this + 124);
                goto LABEL_11;
              }
              return (unsigned int)-1073741811;
            }
            v9 = (float *)((char *)this + 120);
LABEL_11:
            if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v9, a4) )
              *(_DWORD *)(v10 + 16) |= 0x1800u;
            return v11;
          }
          v12 = (float *)((char *)this + 140);
        }
        else
        {
          v12 = (float *)((char *)this + 136);
        }
      }
      else
      {
        v12 = (float *)((char *)this + 132);
      }
      if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v12, a4) )
        *(_DWORD *)(v13 + 16) |= 0x6000u;
    }
    else
    {
      if ( a3 < 0.0 )
        return (unsigned int)-1073741811;
      if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, (float *)this + 44, a4) )
        *(_DWORD *)(v14 + 16) |= 0x20000u;
    }
  }
  return v11;
}
