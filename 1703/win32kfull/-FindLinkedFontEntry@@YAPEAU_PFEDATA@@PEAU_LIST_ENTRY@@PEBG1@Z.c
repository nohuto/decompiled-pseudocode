/*
 * XREFs of ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C002A8CC
 * Callers:
 *     bAddFlEntry @ 0x1C002BB04 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1C0277AC4 (bDeleteFlEntry.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall FindLinkedFontEntry(
        struct _LIST_ENTRY *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v8; // rbx
  int Flink_high; // eax
  bool v11; // zf

  Flink = a1->Flink;
  for ( i = 0LL; Flink != a1; i = 0LL )
  {
    v8 = Flink[2].Flink;
    i = Flink;
    if ( !_wcsicmp((const wchar_t *)v8->Flink[1].Blink, a2) )
    {
      Flink_high = HIDWORD(Flink[1].Flink);
      if ( a3 )
      {
        if ( (Flink_high & 1) == 0 )
          goto LABEL_3;
        v11 = _wcsicmp((const wchar_t *)((char *)v8[2].Flink + SLODWORD(v8[2].Flink->Blink)), a3) == 0;
      }
      else
      {
        v11 = (Flink_high & 1) == 0;
      }
      if ( v11 )
        return i;
    }
LABEL_3:
    Flink = Flink->Flink;
  }
  return i;
}
