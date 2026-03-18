/*
 * XREFs of ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0145E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetFloatProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx

  v4 = 0;
  *a4 = 0;
  if ( a2 > 0x1B )
  {
    if ( a2 > 0x2D )
    {
      v19 = a2 - 46;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 12;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 || a3 < 0.0 || a3 > 1.0 )
                return (unsigned int)-1073741811;
              if ( *((float *)this + 42) == a3 )
                return v4;
              *((float *)this + 42) = a3;
            }
            else
            {
              if ( a3 < 0.0 || a3 > 1.0 )
                return (unsigned int)-1073741811;
              if ( *((float *)this + 33) == a3 )
                return v4;
              *((float *)this + 33) = a3;
            }
          }
          else
          {
            if ( a3 < 0.0 || a3 > 1.0 )
              return (unsigned int)-1073741811;
            if ( *((float *)this + 32) == a3 )
              return v4;
            *((float *)this + 32) = a3;
          }
          *((_DWORD *)this + 4) &= ~0x800000u;
          goto LABEL_79;
        }
        *((float *)this + 19) = a3;
      }
      else
      {
        *((float *)this + 18) = a3;
      }
    }
    else
    {
      if ( a2 != 45 )
      {
        v14 = a2 - 28;
        if ( v14 )
        {
          v15 = v14 - 4;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 9;
              if ( v17 )
              {
                if ( v17 != 1 )
                  return (unsigned int)-1073741811;
                *((float *)this + 15) = a3 + *((float *)this + 15);
              }
              else
              {
                *((float *)this + 14) = a3 + *((float *)this + 14);
              }
              *((_DWORD *)this + 4) &= ~0x40u;
            }
            else
            {
              *((float *)this + 41) = a3;
            }
          }
          else
          {
            *((float *)this + 40) = a3;
          }
        }
        else
        {
          v18 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
          *((float *)this + 37) = a3;
          *(_QWORD *)((char *)this + 68) = 0LL;
          *((_DWORD *)this + 4) = v18 | 0x80;
          *((_DWORD *)this + 19) = 0;
        }
        goto LABEL_79;
      }
      *((float *)this + 17) = a3 + *((float *)this + 17);
    }
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_79;
  }
  if ( a2 == 27 )
  {
    if ( *((float *)this + 36) == a3 )
      return v4;
    *((_DWORD *)this + 4) &= ~0x10000u;
    *((float *)this + 36) = a3;
    goto LABEL_79;
  }
  if ( a2 > 0xD )
  {
    v10 = a2 - 21;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return (unsigned int)-1073741811;
            if ( *((float *)this + 35) == a3 )
              return v4;
            *((_DWORD *)this + 4) &= ~0x8000u;
            *((float *)this + 35) = a3;
LABEL_79:
            *a4 = 1;
            return v4;
          }
          if ( *((float *)this + 24) == a3 )
            return v4;
          *((float *)this + 24) = a3;
        }
        else
        {
          if ( *((float *)this + 23) == a3 )
            return v4;
          *((float *)this + 23) = a3;
        }
        *((_DWORD *)this + 4) &= ~0x4000u;
        goto LABEL_79;
      }
      if ( *((float *)this + 22) == a3 )
        return v4;
      *((float *)this + 22) = a3;
    }
    else
    {
      if ( *((float *)this + 21) == a3 )
        return v4;
      *((float *)this + 21) = a3;
    }
    *((_DWORD *)this + 4) &= ~0x2000u;
    goto LABEL_79;
  }
  if ( a2 == 13 )
  {
    *((float *)this + 29) = a3 + *((float *)this + 29);
    goto LABEL_12;
  }
  v5 = a2 - 4;
  if ( !v5 )
  {
    if ( *((float *)this + 34) == a3 )
      return v4;
    *((float *)this + 34) = a3;
    goto LABEL_79;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 12) == a3 )
      return v4;
    *((float *)this + 12) = a3;
    goto LABEL_79;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 13) == a3 )
      return v4;
    *((float *)this + 13) = a3;
    goto LABEL_79;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    *((float *)this + 25) = a3;
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((float *)this + 26) = a3;
LABEL_15:
    *((_DWORD *)this + 4) &= ~0x200u;
    *a4 = 1;
    *((_DWORD *)this + 4) |= 0x140u;
    *((_QWORD *)this + 14) = 0LL;
    goto LABEL_16;
  }
  if ( v9 != 3 )
    return (unsigned int)-1073741811;
  *((float *)this + 28) = a3 + *((float *)this + 28);
LABEL_12:
  *((_DWORD *)this + 4) &= ~0x100u;
  *a4 = 1;
  *((_DWORD *)this + 4) |= 0x40u;
LABEL_16:
  *((_QWORD *)this + 7) = 0LL;
  return v4;
}
