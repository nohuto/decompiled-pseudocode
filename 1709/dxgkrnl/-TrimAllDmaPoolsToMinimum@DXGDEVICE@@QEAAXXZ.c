/*
 * XREFs of ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C019E4A4
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::TrimAllDmaPoolsToMinimum(DXGDEVICE *this)
{
  char *v1; // rdi
  _QWORD *i; // rbx

  v1 = (char *)this + 344;
  for ( i = (_QWORD *)*((_QWORD *)this + 43); i != (_QWORD *)v1 && i; i = (_QWORD *)*i )
  {
    if ( i[28] )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16LL) + 528LL) + 8LL) + 464LL))();
  }
}
