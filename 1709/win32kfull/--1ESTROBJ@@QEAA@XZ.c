/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1C0142F68
 * Callers:
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C0145118 (GreGetTextExtentExW.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0274058 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 16);
  if ( (v3 & 0x801) != 0 )
  {
    if ( (v3 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 9));
    if ( (*((_DWORD *)this + 16) & 0x800) != 0 )
      Win32FreePool(*((_QWORD *)this + 34), a2, a3);
  }
}
