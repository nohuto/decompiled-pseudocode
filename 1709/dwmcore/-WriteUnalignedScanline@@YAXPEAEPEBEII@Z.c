/*
 * XREFs of ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x1801C53EC
 * Callers:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x1801C5360 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteUnalignedScanline(
        unsigned __int8 *a1,
        const unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int8 *i; // rbx
  unsigned int v5; // edi
  const unsigned __int8 *v6; // rsi
  unsigned __int8 v7; // al
  unsigned int v8; // ebp
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int v11; // r11d
  char v12; // dl

  i = a1;
  v5 = 8 - a4;
  v6 = a2;
  if ( a3 < 8 - a4 )
  {
    v7 = *a1 & ~(((unsigned __int8)(255 >> a4) >> a3) ^ (255 >> a4)) | (((unsigned __int8)(255 >> a4) >> a3) ^ (255 >> a4)) & (*a2 >> a4);
LABEL_9:
    *i = v7;
    return;
  }
  v8 = (a3 - v5) >> 3;
  *a1 = (*a2 >> a4) | *a1 & ~(255 >> a4);
  for ( i = a1 + 1; v8; --v8 )
  {
    v9 = v6[1];
    v10 = *v6++;
    *i++ = (v10 << v5) | (v9 >> a4);
  }
  v11 = ((_BYTE)a3 - (_BYTE)v5) & 7;
  if ( (((_BYTE)a3 - (_BYTE)v5) & 7) != 0 )
  {
    v12 = *v6 << v5;
    if ( v11 > a4 )
      v12 |= v6[1] >> a4;
    v7 = ~(255 >> v11) & v12 | *i & (255 >> v11);
    goto LABEL_9;
  }
}
