/*
 * XREFs of ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800C1200
 * Callers:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180090EF8 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Resize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800C1110 (-Resize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800C1174 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ??_GKeyframe@Sequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801360FC (--_GKeyframe@Sequence@Animations@Components@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(
        __int64 a1,
        int a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v6; // esi

  if ( a2 == *(_DWORD *)(a1 + 8) )
    return 0LL;
  if ( !a2 )
  {
    Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll((char **)a1);
    return 0LL;
  }
  if ( a2 < *(_DWORD *)(a1 + 8) )
  {
    v6 = a2;
    do
      Components::Animations::Sequence::Keyframe::`scalar deleting destructor'(
        (Components::Animations::Sequence::Keyframe *)(*(_QWORD *)a1 + 24LL * v6++),
        a2);
    while ( v6 < *(_DWORD *)(a1 + 8) );
  }
  v4 = *(int *)(a1 + 8);
  result = Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::Resize(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a2 > (int)v4 )
      memset_0((void *)(*(_QWORD *)a1 + 24 * v4), 0, 24LL * (a2 - (int)v4));
    return 0LL;
  }
  return result;
}
