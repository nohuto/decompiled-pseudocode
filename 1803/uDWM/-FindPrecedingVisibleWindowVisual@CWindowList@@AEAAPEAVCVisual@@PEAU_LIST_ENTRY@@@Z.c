/*
 * XREFs of ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18002C26C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002F81C (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindowVisual(CWindowList *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *v3; // rdi
  __int64 Element; // rax
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2->Flink != a2 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (char *)this + 8,
                a2[7].Blink);
    if ( Element )
      v5 = (struct _LIST_ENTRY *)(Element + 64);
    else
      v5 = (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
    while ( v3 != v5 )
    {
      Blink = v3[24].Blink;
      if ( Blink && Blink[1].Blink )
      {
        v7 = v3[25].Blink;
        if ( !v7 )
          return v3[24].Blink;
        v2 = v3[25].Blink;
        if ( !v7[1].Blink )
          return v3[24].Blink;
        return v2;
      }
      v3 = v3->Blink;
    }
  }
  return v2;
}
