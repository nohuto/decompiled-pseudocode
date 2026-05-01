/*
 * XREFs of ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18017CC64
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GDIHelpers::PremultiplyAlphaChannel(GDIHelpers *this, HBITMAP a2)
{
  HANDLE v2; // rax
  HANDLE v3; // rbx
  BOOL v4; // ecx
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  _BYTE *v7; // r9
  _BYTE *v8; // r10
  __int64 v9; // r10
  int v10; // r8d
  int v11; // ecx
  unsigned int v12; // kr00_4
  int v13; // ecx
  char pv[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-24h]
  unsigned int v17; // [rsp+38h] [rbp-20h]
  __int16 v18; // [rsp+42h] [rbp-16h]
  __int64 v19; // [rsp+48h] [rbp-10h]

  v2 = CopyImage(this, 0, 0, 0, 0x2000u);
  v3 = v2;
  if ( v2 )
  {
    if ( GetObjectW(v2, 32, pv) )
    {
      if ( v19 )
      {
        if ( v18 == 32 )
        {
          v4 = 0;
          v5 = v17 * (unsigned __int64)v16;
          if ( v5 <= 0xFFFFFFFF )
          {
            v6 = 0;
            if ( (_DWORD)v5 )
            {
              v7 = (_BYTE *)(v19 + 3);
              v8 = (_BYTE *)(v19 + 3);
              while ( !v4 )
              {
                v4 = *v8 != 0;
                ++v6;
                v8 += 4;
                if ( v6 >= (unsigned int)v5 )
                {
                  if ( !v4 )
                    return v3;
                  break;
                }
              }
              v9 = (int)(v17 * v16);
              if ( (int)(v17 * v16) > 0 )
              {
                do
                {
                  if ( *v7 )
                  {
                    v10 = (unsigned __int8)*v7;
                    v11 = v10 * (unsigned __int8)*(v7 - 2);
                    *(v7 - 1) = (v10 * (unsigned int)(unsigned __int8)*(v7 - 1) + 128) / 0xFF;
                    v12 = v11 + 128;
                    v13 = v10 * (unsigned __int8)*(v7 - 3);
                    *(v7 - 2) = v12 / 0xFF;
                    *(v7 - 3) = (v13 + 128) / 0xFFu;
                  }
                  else
                  {
                    *(_DWORD *)(v7 - 3) = 0;
                  }
                  v7 += 4;
                  --v9;
                }
                while ( v9 );
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
