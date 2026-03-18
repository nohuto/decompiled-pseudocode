/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C0037300
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0039AE4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C0095E80 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  DC **v2; // rdi
  __int64 v4; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v2 = a2;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  LOBYTE(a2) = 1;
  v4 = HmgAlloc(2560LL, a2, 1LL);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    *(_QWORD *)(*(_QWORD *)this + 1536LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*v2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 560LL;
    DC::vCopyTo(*v2, this);
  }
  return this;
}
