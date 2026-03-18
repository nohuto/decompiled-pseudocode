/*
 * XREFs of ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0017A4C
 * Callers:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED4A4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED3B0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMUNCOVERED@@QEAAHPEAU_RECTL@@@Z @ 0x1C01172F4 (-bEnum@ENUMUNCOVERED@@QEAAHPEAU_RECTL@@@Z.c)
 */

void __fastcall RGNOBJ::vComputeUncoveredSpriteRegion(RGNOBJ *this, struct PDEVOBJ *a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  LONG top; // edx
  __int64 v8; // r11
  LONG bottom; // edi
  int v10; // esi
  _DWORD *v11; // rbx
  struct _RECTL v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]

  v3 = *(_QWORD *)a2;
  v4 = (_DWORD *)(*(_QWORD *)this + 104LL);
  RGNOBJ::vSet(this);
  if ( !*(_DWORD *)(v3 + 196) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)(v3 + 72));
  v5 = *(_QWORD *)(v3 + 216);
  v13 = *(_DWORD *)(v3 + 132);
  v14 = v5;
  v16 = v5 + 8;
  v15 = *(_QWORD *)(v5 + 8) + v5;
  if ( (unsigned int)ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)&v13, &v12) )
  {
    v6 = 0x80000000;
    top = v12.top;
    v8 = 0LL;
    bottom = v12.top;
    v10 = *(_DWORD *)(*(_QWORD *)this + 84LL);
    while ( 1 )
    {
      if ( top != v6 )
      {
        ++v10;
        v4[1] = v6;
        v4[2] = bottom;
        *v4 = v8;
        v4[v8 + 3] = v8;
        if ( top != bottom )
        {
          ++v10;
          v4 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
          *v4 = 0;
          v4[1] = bottom;
          v4[2] = top;
          v4[3] = 0;
        }
        v6 = top;
        bottom = v12.bottom;
        v4 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
        v8 = 0LL;
      }
      v4[v8 + 3] = v12.left;
      v4[(unsigned int)(v8 + 1) + 3] = v12.right;
      if ( !(unsigned int)ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)&v13, &v12) )
        break;
      top = v12.top;
    }
    *v4 = v8;
    v4[1] = v6;
    v4[2] = bottom;
    v4[v8 + 3] = v8;
    v11 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
    *v11 = 0;
    v11[1] = bottom;
    v11[2] = 0x7FFFFFFF;
    v11[3] = 0;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v11 + (unsigned int)(4 * *v11 + 16);
    *(_DWORD *)(*(_QWORD *)this + 84LL) = v10 + 1;
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
    *(_DWORD *)(*(_QWORD *)this + 80LL) += *(_DWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)this - 104;
  }
}
