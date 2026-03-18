/*
 * XREFs of ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0003BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetFloatProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax
  int v10; // edx
  int v12; // edx
  int v13; // edx

  v4 = 0;
  *a4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v12 = v8 - 1;
            if ( v12 )
            {
              v13 = v12 - 2;
              if ( v13 )
              {
                if ( v13 != 1 )
                  return (unsigned int)-1073741811;
                v9 = (float *)((char *)this + 60);
                v10 = 2048;
              }
              else
              {
                v9 = (float *)((char *)this + 56);
                v10 = 128;
              }
            }
            else
            {
              v9 = (float *)((char *)this + 68);
              v10 = 4096;
            }
          }
          else
          {
            v9 = (float *)((char *)this + 64);
            v10 = 256;
          }
        }
        else
        {
          v9 = (float *)((char *)this + 52);
          v10 = 1024;
        }
      }
      else
      {
        v9 = (float *)((char *)this + 48);
        v10 = 64;
      }
    }
    else
    {
      v9 = (float *)((char *)this + 76);
      v10 = 0x2000;
    }
  }
  else
  {
    v9 = (float *)((char *)this + 72);
    v10 = 512;
  }
  if ( v9 )
  {
    *v9 = a3;
    *((_DWORD *)this + 4) |= v10;
    *a4 = 1;
  }
  return v4;
}
