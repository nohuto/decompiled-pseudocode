/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002FE90
 * Callers:
 *     <none>
 * Callees:
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00274B0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  unsigned __int64 v4; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v4 = HmgAlloc(0x9D8uLL, 1u, 1u);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 1528LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 552LL;
    DC::vCopyTo(*a2, (DC **)this);
  }
  return this;
}
