/*
 * XREFs of ??1MALLOCOBJ@@QEAA@XZ @ 0x1C00B224C
 * Callers:
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MALLOCOBJ::~MALLOCOBJ(MALLOCOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)this;
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)this = 0LL;
  }
}
