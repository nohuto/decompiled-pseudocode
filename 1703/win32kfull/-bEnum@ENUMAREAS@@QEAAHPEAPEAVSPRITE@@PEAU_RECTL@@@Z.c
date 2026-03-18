/*
 * XREFs of ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025BA68 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F154 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260F10 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnum(ENUMAREAS *this, struct SPRITE **a2, struct _RECTL *a3)
{
  __int64 i; // r9
  LONG v5; // edx
  LONG v6; // ecx
  int v7; // ecx
  __int64 v8; // r9
  int *v10; // r9
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  int *v15; // rdx
  int v16; // ecx
  int v17; // ecx

  i = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 9) = i;
  *a2 = *(struct SPRITE **)(i + 8);
  v5 = *((_DWORD *)this + 1);
  if ( *(_DWORD *)i > v5 )
    v5 = *(_DWORD *)i;
  a3->left = v5;
  v6 = *((_DWORD *)this + 3);
  if ( *(_DWORD *)(i + 4) < v6 )
    v6 = *(_DWORD *)(i + 4);
  a3->right = v6;
  a3->top = *((_DWORD *)this + 9);
  a3->bottom = *((_DWORD *)this + 10);
  v7 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( *(_DWORD *)i > *((_DWORD *)this + 1) )
    {
      do
        i -= 16LL;
      while ( *(_DWORD *)(i + 16) == *(_DWORD *)i );
      goto LABEL_38;
    }
    v14 = *((_QWORD *)this + 6);
    if ( v7 == 1 )
    {
      if ( *(_DWORD *)(v14 + 4) >= *((_DWORD *)this + 4) )
        return 0LL;
      v15 = (int *)(*(_QWORD *)(v14 + 8) + v14);
    }
    else
    {
      if ( *(_DWORD *)v14 <= *((_DWORD *)this + 2) )
        return 0LL;
      v15 = (int *)(v14 - *(_QWORD *)(v14 + 16));
    }
    v16 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 6) = v15;
    if ( *v15 > v16 )
      v16 = *v15;
    *((_DWORD *)this + 9) = v16;
    v17 = *((_DWORD *)this + 4);
    if ( v15[1] < v17 )
      v17 = v15[1];
    *((_DWORD *)this + 10) = v17;
    for ( i = (__int64)v15 + *((_QWORD *)v15 + 1) - 16; *(_DWORD *)i >= *((_DWORD *)this + 3); i -= 16LL )
      ;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(i + 4) >= *((_DWORD *)this + 3) )
  {
    v8 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      if ( *(_DWORD *)v8 <= *((_DWORD *)this + 2) )
        return 0LL;
      v10 = (int *)(v8 - *(_QWORD *)(v8 + 16));
    }
    else
    {
      if ( *(_DWORD *)(v8 + 4) >= *((_DWORD *)this + 4) )
        return 0LL;
      v10 = (int *)(*(_QWORD *)(v8 + 8) + v8);
    }
    v11 = *((_DWORD *)this + 2);
    v12 = *((_DWORD *)this + 1);
    *((_QWORD *)this + 6) = v10;
    if ( *v10 > v11 )
      v11 = *v10;
    *((_DWORD *)this + 9) = v11;
    v13 = *((_DWORD *)this + 4);
    if ( v10[1] < v13 )
      v13 = v10[1];
    i = (__int64)(v10 + 6);
    *((_DWORD *)this + 10) = v13;
    while ( *(_DWORD *)(i + 4) <= v12 )
      i += 16LL;
    goto LABEL_38;
  }
  do
    i += 16LL;
  while ( *(_DWORD *)(i - 16) == *(_DWORD *)i );
LABEL_38:
  *((_QWORD *)this + 7) = i;
  return 1LL;
}
