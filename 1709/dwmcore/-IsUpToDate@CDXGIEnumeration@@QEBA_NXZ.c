/*
 * XREFs of ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18008BD94
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDXGIEnumeration::IsUpToDate(CDXGIEnumeration *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2))
    && (unsigned int)DrvQueryAdapterPopulationUniqueness() == *((_DWORD *)this + 14) )
  {
    return qword_18026EEB0 == this;
  }
  return v2;
}
