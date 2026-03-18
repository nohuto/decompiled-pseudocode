/*
 * XREFs of RecolorDeskPattern @ 0x1C0126200
 * Callers:
 *     SetDesktopPattern @ 0x1C00F9308 (SetDesktopPattern.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     GreMarkDeletableBrush @ 0x1C00F9454 (GreMarkDeletableBrush.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 RecolorDeskPattern()
{
  unsigned int v0; // ebx
  __int64 v2; // r14
  int v3; // ecx
  char v4; // al
  int v5; // ecx
  char v6; // al
  HDC v7; // rcx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 PatternBrush; // rdi
  HBRUSH v12; // rcx
  unsigned int v13[3]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v14; // [rsp+84h] [rbp+13h]
  __int64 v15; // [rsp+8Ch] [rbp+1Bh]
  int v16; // [rsp+94h] [rbp+23h]
  int v17; // [rsp+98h] [rbp+27h]
  int v18; // [rsp+9Ch] [rbp+2Bh]
  char v19; // [rsp+A0h] [rbp+2Fh]
  char v20; // [rsp+A1h] [rbp+30h]
  char v21; // [rsp+A2h] [rbp+31h]
  char v22; // [rsp+A4h] [rbp+33h]
  char v23; // [rsp+A5h] [rbp+34h]
  char v24; // [rsp+A6h] [rbp+35h]

  v0 = 0;
  if ( g_hbmDesktopPattern )
  {
    v2 = GreSelectBitmap(*(_QWORD *)ghdcMem, g_hbmDesktopPattern);
    if ( *(_DWORD *)(gpsi + 2204LL) )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), 8u, 8u, 0, 0LL, 0LL);
    }
    else
    {
      v3 = *(_DWORD *)(gpsi + 4556LL);
      v17 = 2;
      v18 = 2;
      v19 = BYTE2(v3);
      v4 = *(_BYTE *)(gpsi + 4556LL);
      v20 = BYTE1(v3);
      v5 = *(_DWORD *)(gpsi + 4584LL);
      v21 = v4;
      v22 = BYTE2(v5);
      v6 = *(_BYTE *)(gpsi + 4584LL);
      v23 = BYTE1(v5);
      v24 = v6;
      v13[0] = 40;
      v13[1] = 8;
      v13[2] = 8;
      v14 = 65537LL;
      v7 = *(HDC *)(gpDispInfo + 56LL);
      v15 = 0LL;
      v16 = 0;
      CompatibleBitmapInternal = GreCreateDIBitmapReal(v7, gpsi, 0LL, v13, 0, 0x30u, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    v9 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      v10 = GreSelectBitmap(*(_QWORD *)ghdcMem2, CompatibleBitmapInternal);
      GreSetTextColor(*(HDC *)ghdcMem2, *(_DWORD *)(gpsi + 4556LL));
      GreSetBkColor(*(HDC *)ghdcMem2, *(_DWORD *)(gpsi + 4584LL));
      NtGdiBitBltInternal(*(HDC *)ghdcMem2, 0, 0, 8, 8, *(HDC *)ghdcMem, 0, 0, 13369376, 0, 0);
      PatternBrush = GreCreatePatternBrush(v9);
      if ( PatternBrush )
      {
        v12 = *(HBRUSH *)(gpsi + 4688LL);
        if ( v12 )
        {
          GreMarkDeletableBrush(v12);
          GreDeleteObject(*(_QWORD *)(gpsi + 4688LL));
        }
        GreMarkUndeletableBrush(PatternBrush);
        GreSetBrushOwner(PatternBrush, 0LL);
        v0 = 1;
        *(_QWORD *)(gpsi + 4688LL) = PatternBrush;
      }
      GreSelectBitmap(*(_QWORD *)ghdcMem2, v10);
      GreDeleteObject(v9);
    }
    GreSelectBitmap(*(_QWORD *)ghdcMem, v2);
  }
  return v0;
}
