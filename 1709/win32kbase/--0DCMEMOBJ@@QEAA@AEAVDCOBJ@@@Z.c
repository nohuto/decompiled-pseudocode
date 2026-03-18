/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C0055210
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005268C (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  struct HOBJ__ *v4; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v4 = HmgAlloc(0xA00uLL, 1u, 1u);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 9) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 1536LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 560LL;
    DC::vCopyTo(*a2, this);
  }
  return this;
}
