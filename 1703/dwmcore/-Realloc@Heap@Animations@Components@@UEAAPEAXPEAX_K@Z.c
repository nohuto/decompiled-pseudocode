/*
 * XREFs of ?Realloc@Heap@Animations@Components@@UEAAPEAXPEAX_K@Z @ 0x1800CA100
 * Callers:
 *     ?Resize@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x18002A920 (-Resize@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 *     ?Resize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x1800C1110 (-Resize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall Components::Animations::Heap::Realloc(Components::Animations::Heap *this, void *a2, SIZE_T a3)
{
  LPVOID result; // rax
  SIZE_T v5; // r8

  if ( a2 )
  {
    result = HeapReAlloc(WPF::g_processHeap, 0, a2, a3);
    if ( result )
      return result;
    return 0LL;
  }
  v5 = 1LL;
  if ( a3 )
    v5 = a3;
  result = HeapAlloc(WPF::g_processHeap, 0, v5);
  if ( !result )
    return 0LL;
  return result;
}
