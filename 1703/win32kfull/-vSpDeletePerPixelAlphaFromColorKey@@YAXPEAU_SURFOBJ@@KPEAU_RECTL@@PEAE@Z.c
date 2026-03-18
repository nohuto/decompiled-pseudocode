/*
 * XREFs of ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0260B64
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F688 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C02606F4 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall vSpDeletePerPixelAlphaFromColorKey(struct _SURFOBJ *a1, int a2, struct _RECTL *a3, unsigned __int8 *a4)
{
  struct _SURFOBJ *v5; // r11
  int v7; // r10d
  int v8; // r14d
  LONG cy; // r8d
  LONG cx; // esi
  int v11; // edx
  int v12; // eax
  LONG lDelta; // r12d
  int v14; // esi
  int v15; // r8d
  int v16; // edi
  __int64 i; // rbx
  int v18; // r11d
  __int64 v19; // rdx
  int v20; // eax
  int v21; // [rsp+28h] [rbp-60h] BYREF
  int v22; // [rsp+2Ch] [rbp-5Ch]
  LONG v23; // [rsp+30h] [rbp-58h]
  LONG v24; // [rsp+34h] [rbp-54h]
  int v25; // [rsp+38h] [rbp-50h]
  LONG v26; // [rsp+3Ch] [rbp-4Ch]
  int v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+48h] [rbp-40h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  unsigned __int8 *v30; // [rsp+58h] [rbp-30h]

  v5 = a1;
  v30 = a4;
  if ( a1->iBitmapFormat == 6 )
  {
    v7 = 0;
    if ( !a1->iType )
    {
      v8 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
      v25 = v8;
      cy = a1->sizlBitmap.cy;
      cx = a1->sizlBitmap.cx;
      v11 = 0;
      v21 = 0;
      v12 = 0;
      v22 = 0;
      v23 = cx;
      v24 = cy;
      if ( a3 )
      {
        ERECTL::operator*=(&v21, a3);
        cy = v24;
        cx = v23;
        v12 = v22;
        v11 = v21;
      }
      lDelta = v5->lDelta;
      v26 = lDelta;
      v14 = cx - v11;
      v27 = v14;
      v15 = cy - v12;
      v16 = v7;
      for ( i = (__int64)v5->pvScan0 + 4 * v11 + lDelta * v12; ; i += lDelta )
      {
        v29 = i;
        if ( !v15 )
          break;
        v18 = v14;
        v19 = i;
        while ( 1 )
        {
          v28 = v19;
          if ( !v18 )
            break;
          if ( *(_DWORD *)v19 == v7 )
            *(_DWORD *)v19 = v8;
          if ( a4 )
            *(_BYTE *)(v19 + 3) = a4[v16];
          --v18;
          v19 += 4LL;
          v20 = v16 + 1;
          if ( !a4 )
            v20 = v16;
          v16 = v20;
        }
        --v15;
      }
      if ( a4 )
        Win32FreePool(a4);
    }
  }
}
