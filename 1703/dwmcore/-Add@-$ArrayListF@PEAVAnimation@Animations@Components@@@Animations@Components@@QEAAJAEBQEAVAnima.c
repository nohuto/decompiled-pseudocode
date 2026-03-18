/*
 * XREFs of ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x18002AA3C
 * Callers:
 *     ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x18002A8B8 (-RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x18002C99C (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x18002CAD0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x18002A920 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v6; // rdx

  v2 = *(int *)(a1 + 8);
  result = Components::Animations::ArrayListF<Components::Animations::Animation *>::Resize(a1, (int)v2 + 1);
  if ( (int)result >= 0 )
  {
    v6 = (_QWORD *)(*(_QWORD *)a1 + 8 * v2);
    if ( v6 )
      *v6 = *a2;
    return 0LL;
  }
  return result;
}
