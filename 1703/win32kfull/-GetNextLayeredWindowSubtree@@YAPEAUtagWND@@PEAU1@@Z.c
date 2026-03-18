/*
 * XREFs of ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022554
 * Callers:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022200 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022554 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022554 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindowSubtree(struct tagWND *a1)
{
  struct tagWND *result; // rax
  struct tagWND *i; // rbx

  result = 0LL;
  for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    result = GetNextLayeredWindowSubtree(*((struct tagWND **)i + 14));
    if ( result )
      break;
    if ( (*((_BYTE *)i + 66) & 8) != 0 )
      return i;
  }
  return result;
}
