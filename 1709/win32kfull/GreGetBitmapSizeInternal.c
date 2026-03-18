/*
 * XREFs of GreGetBitmapSizeInternal @ 0x1C00188FC
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C0018440 (NtGdiGetDIBitsInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C0019AF0 (NtGdiStretchDIBitsInternal.c)
 *     bCaptureBitmapInfo @ 0x1C009A230 (bCaptureBitmapInfo.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F41C8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // edx
  int v6; // eax
  int v7; // r11d
  unsigned int v8; // r8d
  int v9; // ecx
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  v3 = a3;
  if ( !a1 )
    return 0LL;
  v5 = 2;
  if ( a3 != 12 )
  {
    if ( a3 < 0x28 )
      return 0LL;
    v6 = *(_DWORD *)(a1 + 16);
    v7 = 4;
    v8 = *(_DWORD *)(a1 + 32);
    v9 = *(unsigned __int16 *)(a1 + 14);
    switch ( v6 )
    {
      case 3:
        v12 = 0;
        if ( a2 != 1 )
          v12 = a2;
        a2 = v12;
        if ( v9 == 32 || v9 == 16 )
        {
          v8 = 3;
          if ( v3 > 0x28 )
            v8 = 0;
          LODWORD(result) = v8;
          goto LABEL_12;
        }
        return 0LL;
      case 0:
        goto LABEL_6;
      case 10:
        v13 = v9 - 1;
        if ( !v13 )
          goto LABEL_32;
        v14 = v13 - 3;
        if ( !v14 )
          goto LABEL_39;
        v15 = v14 - 4;
        if ( !v15 )
          goto LABEL_37;
        if ( v15 == 24 )
          goto LABEL_52;
        break;
      default:
        if ( v6 != 2 )
        {
          if ( v6 == 1 )
            goto LABEL_36;
          if ( v6 != 12 )
          {
            if ( v6 == 11 )
            {
LABEL_36:
              if ( v9 == 8 )
                goto LABEL_37;
              return 0LL;
            }
            if ( (unsigned int)(v6 - 4) > 1 )
              return 0LL;
LABEL_52:
            LODWORD(result) = 0;
LABEL_12:
            if ( v8 && v8 <= (unsigned int)result )
              LODWORD(result) = v8;
            if ( a2 != 1 )
            {
              if ( a2 == 2 )
                v7 = 0;
              v5 = v7;
            }
            result = (v3 + v5 * (_DWORD)result + 3) & 0xFFFFFFFC;
            if ( (unsigned int)result < v3 )
              return 0LL;
            return result;
          }
        }
        if ( v9 == 4 )
          goto LABEL_39;
        break;
    }
    return 0LL;
  }
  v9 = *(unsigned __int16 *)(a1 + 10);
  v3 = 12;
  v8 = 0;
  v7 = 3;
LABEL_6:
  switch ( v9 )
  {
    case 1:
LABEL_32:
      LODWORD(result) = 2;
      goto LABEL_12;
    case 4:
LABEL_39:
      LODWORD(result) = 16;
      goto LABEL_12;
    case 8:
LABEL_37:
      LODWORD(result) = 256;
      goto LABEL_12;
  }
  v10 = 0;
  if ( a2 != 1 )
    v10 = a2;
  a2 = v10;
  result = 0LL;
  if ( v9 == 32 || v9 == 24 || v9 == 16 )
    goto LABEL_12;
  return result;
}
