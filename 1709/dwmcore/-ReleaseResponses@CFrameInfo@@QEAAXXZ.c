/*
 * XREFs of ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800BE1D4
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800BE210 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x180125DF0 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 */

void __fastcall CFrameInfo::ReleaseResponses(CFrameInfo *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 316); i = (unsigned int)(i + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)this + 155) + 8 * i));
  *((_DWORD *)this + 316) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1240, 8u);
}
