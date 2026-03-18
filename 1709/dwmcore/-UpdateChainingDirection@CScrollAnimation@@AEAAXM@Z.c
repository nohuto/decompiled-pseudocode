/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1801894B4
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(CScrollAnimation *this, float a2)
{
  char v2; // r9
  __int64 v3; // r8
  float v4; // xmm0_4
  char v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *((_BYTE *)this + 388);
  if ( (v2 & 1) != 0 )
  {
    v3 = 0LL;
    v4 = (float)(int)((__PAIR64__((float)(a2 - *((float *)this + 94)) > 0.0, a2 - *((float *)this + 94))
                     - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 96) = v4;
    v5 = (v4 == 0.0) | v2 & 0xFE;
    *((_BYTE *)this + 388) = v5;
    if ( (v5 & 1) == 0 )
    {
      v6 = *((_QWORD *)this + 35);
      if ( v6 )
        v3 = *(_QWORD *)(v6 + 8);
      v7 = 3LL * *((int *)this + 69);
      *(_BYTE *)(v3 + 4 * v7 + 340) |= 4u;
      *(_DWORD *)(v3 + 4 * v7 + 348) = -805306369;
      *(_BYTE *)(v3 + 376) |= 2u;
    }
  }
}
