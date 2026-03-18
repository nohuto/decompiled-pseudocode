/*
 * XREFs of ?Release@CD2DBitmap@@UEAAKXZ @ 0x1800773C0
 * Callers:
 *     ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x1800C58EC (--$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z.c)
 *     ?Release@CD2DBitmap@@WBA@EAAKXZ @ 0x1800DDA30 (-Release@CD2DBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@WGI@EAAKXZ @ 0x1800DDA40 (-Release@CD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@WHA@EAAKXZ @ 0x1800DDA50 (-Release@CD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@WHI@EAAKXZ @ 0x1800DDA60 (-Release@CD2DBitmap@@WHI@EAAKXZ.c)
 * Callees:
 *     ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x1800776E0 (--_GCD2DBitmap@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::Release(CD2DBitmap *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CD2DBitmap *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(void *(__fastcall **)(CD2DBitmap *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == CD2DBitmap::`scalar deleting destructor' )
      CD2DBitmap::`scalar deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
