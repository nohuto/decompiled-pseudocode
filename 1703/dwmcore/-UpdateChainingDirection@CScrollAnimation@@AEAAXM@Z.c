/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180182414
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801824AC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(CScrollAnimation *this, float a2)
{
  __int64 v2; // r8
  float v3; // xmm0_4
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( (*((_BYTE *)this + 332) & 1) != 0 )
  {
    v2 = 0LL;
    v3 = (float)(int)((__PAIR64__((float)(a2 - *((float *)this + 80)) > 0.0, a2 - *((float *)this + 80))
                     - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 82) = v3;
    *((_BYTE *)this + 332) &= ~1u;
    *((_BYTE *)this + 332) |= v3 == 0.0;
    if ( (*((_BYTE *)this + 332) & 1) == 0 )
    {
      v4 = *((_QWORD *)this + 29);
      if ( v4 )
        v2 = *(_QWORD *)(v4 + 8);
      v5 = 3LL * *((int *)this + 57);
      *(_BYTE *)(v2 + 4 * v5 + 328) |= 4u;
      *(_DWORD *)(v2 + 4 * v5 + 336) = -1;
      *(_BYTE *)(v2 + 364) |= 2u;
    }
  }
}
