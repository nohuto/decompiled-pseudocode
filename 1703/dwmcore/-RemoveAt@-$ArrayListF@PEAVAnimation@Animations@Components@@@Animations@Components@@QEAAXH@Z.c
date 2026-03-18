/*
 * XREFs of ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18002AA88
 * Callers:
 *     ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x18002A8B8 (-RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z.c)
 * Callees:
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x18002A920 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt(
        __int64 a1,
        int a2)
{
  int v3; // ecx
  int v4; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 8);
  if ( a2 < v3 && a2 >= 0 )
  {
    if ( a2 != v3 - 1 )
      memmove((void *)(*(_QWORD *)a1 + 8LL * a2), (const void *)(*(_QWORD *)a1 + 8LL * (a2 + 1)), 8LL * (v3 - a2 - 1));
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 == 1 )
      return Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll(a1);
    else
      return Components::Animations::ArrayListF<Components::Animations::Animation *>::Resize(a1, v4 - 1);
  }
  return result;
}
