/*
 * XREFs of ??1MALLOCOBJ@@QEAA@XZ @ 0x1C002CAD0
 * Callers:
 *     bAddFlEntry @ 0x1C002BB04 (bAddFlEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MALLOCOBJ::~MALLOCOBJ(MALLOCOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)this = 0LL;
  }
}
