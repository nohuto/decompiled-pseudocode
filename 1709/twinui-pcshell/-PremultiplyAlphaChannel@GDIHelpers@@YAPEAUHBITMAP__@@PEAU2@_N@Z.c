/*
 * XREFs of ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1801C9B08
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801CB860 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GDIHelpers::PremultiplyAlphaChannel(GDIHelpers *this, HBITMAP a2)
{
  HANDLE v2; // rax
  HANDLE v3; // rbx
  BOOL v4; // edx
  unsigned int v5; // ecx
  _BYTE *v6; // r10
  __int64 v7; // r10
  unsigned __int8 *v8; // r9
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned int v11; // kr04_4
  int v12; // ecx
  char pv[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  unsigned int v16; // [rsp+38h] [rbp-20h]
  __int16 v17; // [rsp+42h] [rbp-16h]
  __int64 v18; // [rsp+48h] [rbp-10h]

  v2 = CopyImage(this, 0, 0, 0, 0x2000u);
  v3 = v2;
  if ( v2 )
  {
    if ( GetObjectW(v2, 32, pv) )
    {
      if ( v18 )
      {
        if ( v17 == 32 )
        {
          v4 = 0;
          if ( v16 * (unsigned __int64)v15 <= 0xFFFFFFFF )
          {
            v5 = 0;
            if ( v16 * v15 )
            {
              v6 = (_BYTE *)(v18 + 3);
              while ( !v4 )
              {
                v4 = *v6 != 0;
                ++v5;
                v6 += 4;
                if ( v5 >= v16 * v15 )
                {
                  if ( !v4 )
                    return v3;
                  break;
                }
              }
              v7 = (int)(v16 * v15);
              if ( (int)(v16 * v15) > 0 )
              {
                v8 = (unsigned __int8 *)(v18 + 2);
                do
                {
                  v9 = v8[1];
                  if ( v9 )
                  {
                    v10 = v9 * *(v8 - 1);
                    *v8 = (v9 * (unsigned int)*v8 + 128) / 0xFF;
                    v11 = v10 + 128;
                    v12 = v9 * *(v8 - 2);
                    *(v8 - 1) = v11 / 0xFF;
                    *(v8 - 2) = (v12 + 128) / 0xFFu;
                  }
                  else
                  {
                    *(_DWORD *)(v8 - 2) = 0;
                  }
                  v8 += 4;
                  --v7;
                }
                while ( v7 );
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
