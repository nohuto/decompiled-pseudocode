/*
 * XREFs of ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x18002A8B8
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x18002AA3C (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18002AA88 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall Components::Animations::AnimationManager::RegisterLive(
        Components::Animations::AnimationManager *this,
        struct Components::Animations::Animation *a2)
{
  int v4; // edx
  struct Components::Animations::Animation **v5; // rax
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 result; // rax
  struct Components::Animations::Animation *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = 0;
  if ( *((int *)this + 22) <= 0 )
  {
LABEL_5:
    v4 = -1;
  }
  else
  {
    v5 = (struct Components::Animations::Animation **)*((_QWORD *)this + 10);
    v6 = *((int *)this + 22);
    v7 = 0LL;
    while ( *v5 != a2 )
    {
      ++v4;
      ++v7;
      ++v5;
      if ( v7 >= v6 )
        goto LABEL_5;
    }
  }
  if ( v4 >= 0 )
  {
    Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAt((char *)this + 80);
  }
  else
  {
    result = Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(this, &v9);
    if ( (int)result < 0 )
      return result;
  }
  *((_BYTE *)this + 176) |= 4u;
  return 0LL;
}
