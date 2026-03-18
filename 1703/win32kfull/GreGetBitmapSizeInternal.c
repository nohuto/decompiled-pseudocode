/*
 * XREFs of GreGetBitmapSizeInternal @ 0x1C013F53C
 * Callers:
 *     bCaptureBitmapInfo @ 0x1C0047C90 (bCaptureBitmapInfo.c)
 *     NtGdiGetDIBitsInternal @ 0x1C007F950 (NtGdiGetDIBitsInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00938F0 (NtGdiStretchDIBitsInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E81B0 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(__int64 a1, int a2, unsigned int a3)
{
  int v5; // r8d
  int v6; // edx
  int v7; // ebx
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int64 result; // rax
  int v14; // edx
  int v15; // edx
  int v16; // edx

  if ( !a1 )
    return 0LL;
  v5 = 2;
  if ( a3 == 12 )
  {
    v6 = *(unsigned __int16 *)(a1 + 10);
    v7 = 3;
    v8 = 0;
    goto LABEL_13;
  }
  if ( a3 < 0x28 )
    return 0LL;
  v9 = *(_DWORD *)(a1 + 16);
  v7 = 4;
  v8 = *(_DWORD *)(a1 + 32);
  v6 = *(unsigned __int16 *)(a1 + 14);
  if ( v9 == 3 )
  {
    v10 = 0;
    if ( a2 != 1 )
      v10 = a2;
    a2 = v10;
    if ( ((v6 - 16) & 0xFFFFFFEF) != 0 )
      return 0LL;
    v8 = 3;
    if ( a3 > 0x28 )
      v8 = 0;
    v11 = v8;
    goto LABEL_38;
  }
  if ( v9 )
  {
    switch ( v9 )
    {
      case 10:
        v14 = v6 - 1;
        if ( !v14 )
          goto LABEL_27;
        v15 = v14 - 3;
        if ( !v15 )
          goto LABEL_37;
        v16 = v15 - 4;
        if ( !v16 )
          goto LABEL_35;
        if ( v16 == 24 )
        {
LABEL_33:
          v11 = 0;
          goto LABEL_38;
        }
        break;
      case 2:
      case 12:
        if ( v6 == 4 )
          goto LABEL_37;
        break;
      case 1:
      case 11:
        if ( v6 == 8 )
          goto LABEL_35;
        break;
      default:
        if ( (unsigned int)(v9 - 4) <= 1 )
          goto LABEL_33;
        break;
    }
    return 0LL;
  }
LABEL_13:
  switch ( v6 )
  {
    case 1:
LABEL_27:
      v11 = 2;
      goto LABEL_38;
    case 4:
LABEL_37:
      v11 = 16;
      goto LABEL_38;
    case 8:
LABEL_35:
      v11 = 256;
      goto LABEL_38;
  }
  v12 = 0;
  v11 = 0;
  if ( a2 != 1 )
    v12 = a2;
  a2 = v12;
  if ( ((v6 - 16) & 0xFFFFFFE7) != 0 || v6 == 40 )
    return 0LL;
LABEL_38:
  if ( v8 && v8 <= v11 )
    v11 = v8;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v7 = 0;
    v5 = v7;
  }
  result = (v5 * v11 + a3 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < a3 )
    return 0LL;
  return result;
}
