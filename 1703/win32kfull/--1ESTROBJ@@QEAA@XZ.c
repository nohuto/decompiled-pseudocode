/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C013C23C
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027768C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 16);
  if ( (v1 & 0x801) != 0 )
  {
    if ( (v1 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 9));
    if ( (*((_DWORD *)this + 16) & 0x800) != 0 )
      Win32FreePool(*((_QWORD *)this + 34));
  }
}
