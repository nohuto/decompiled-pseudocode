/*
 * XREFs of ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C026087C
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F3C8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C026040C (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall vSpDeletePerPixelAlphaFromColorKey(struct _SURFOBJ *a1, int a2, struct _RECTL *a3, unsigned __int8 *a4)
{
  struct _SURFOBJ *v5; // r11
  int v7; // r10d
  int v8; // r14d
  LONG cy; // r8d
  LONG cx; // esi
  __int64 v11; // rdx
  int v12; // eax
  LONG lDelta; // r12d
  int v14; // esi
  int v15; // r8d
  int v16; // edi
  __int64 i; // rbx
  int v18; // r11d
  int v19; // eax
  unsigned int v20; // [rsp+28h] [rbp-60h] BYREF
  int v21; // [rsp+2Ch] [rbp-5Ch]
  LONG v22; // [rsp+30h] [rbp-58h]
  LONG v23; // [rsp+34h] [rbp-54h]
  int v24; // [rsp+38h] [rbp-50h]
  LONG v25; // [rsp+3Ch] [rbp-4Ch]
  int v26; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-40h]
  __int64 v28; // [rsp+50h] [rbp-38h]
  unsigned __int8 *v29; // [rsp+58h] [rbp-30h]

  v5 = a1;
  v29 = a4;
  if ( a1->iBitmapFormat == 6 )
  {
    v7 = 0;
    if ( !a1->iType )
    {
      v8 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
      v24 = v8;
      cy = a1->sizlBitmap.cy;
      cx = a1->sizlBitmap.cx;
      v11 = 0LL;
      v20 = 0;
      v12 = 0;
      v21 = 0;
      v22 = cx;
      v23 = cy;
      if ( a3 )
      {
        ERECTL::operator*=(&v20, a3);
        cy = v23;
        cx = v22;
        v12 = v21;
        v11 = v20;
      }
      lDelta = v5->lDelta;
      v25 = lDelta;
      v14 = cx - v11;
      v26 = v14;
      v15 = cy - v12;
      v16 = v7;
      for ( i = (__int64)v5->pvScan0 + 4 * (int)v11 + lDelta * v12; ; i += lDelta )
      {
        v28 = i;
        if ( !v15 )
          break;
        v18 = v14;
        v11 = i;
        while ( 1 )
        {
          v27 = v11;
          if ( !v18 )
            break;
          if ( *(_DWORD *)v11 == v7 )
            *(_DWORD *)v11 = v8;
          if ( a4 )
            *(_BYTE *)(v11 + 3) = a4[v16];
          --v18;
          v11 += 4LL;
          v19 = v16 + 1;
          if ( !a4 )
            v19 = v16;
          v16 = v19;
        }
        --v15;
      }
      if ( a4 )
        Win32FreePool(a4, v11);
    }
  }
}
