/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00372D0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_DWORD *)this + 4) )
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
    else
      HmgFree(*(_QWORD *)v2);
    *(_QWORD *)this = 0LL;
  }
}
