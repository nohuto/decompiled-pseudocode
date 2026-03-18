/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x18003FC60
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180047BF0 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?HasEnded@CAnimation@@MEAA_NXZ @ 0x18003F950 (-HasEnded@CAnimation@@MEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this)
{
  CAnimation *v2; // rcx
  __int64 (*v3)(void); // rax
  char HasEnded; // al
  char v5; // cl
  bool result; // al
  char v7; // cl

  v2 = (CAnimation *)((char *)this - 56);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 160LL);
  if ( (char *)v3 == (char *)CAnimation::HasEnded )
    HasEnded = CAnimation::HasEnded(v2);
  else
    HasEnded = v3();
  v5 = HasEnded;
  result = 0;
  if ( !v5 && *((_DWORD *)this + 8) )
  {
    v7 = *((_BYTE *)this + 56);
    if ( (v7 & 4) == 0 )
      return (v7 & 0x11) != 17;
  }
  return result;
}
