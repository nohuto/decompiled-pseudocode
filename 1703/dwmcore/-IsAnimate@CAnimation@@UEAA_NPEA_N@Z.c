/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x1800BC820
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800BC4E0 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this, bool *a2)
{
  CAnimation *v4; // rcx
  __int64 (*v5)(void); // rax
  char HasEnded; // al
  char v7; // al
  bool result; // al

  v4 = (CAnimation *)((char *)this - 56);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 144LL);
  if ( (char *)v5 == (char *)CAnimation::HasEnded )
    HasEnded = CAnimation::HasEnded(v4);
  else
    HasEnded = v5();
  result = 0;
  if ( !HasEnded )
  {
    if ( *((_DWORD *)this + 8) )
    {
      v7 = *((_BYTE *)this + 56);
      if ( (v7 & 4) == 0 && (v7 & 0x11) != 0x11 )
        result = 1;
    }
  }
  if ( a2 )
    *a2 = result;
  return result;
}
