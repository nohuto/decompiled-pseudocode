/*
 * XREFs of ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00C0618
 * Callers:
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C00D6C70 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01A20F8 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v1; // r8
  __int64 v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 186LL) )
  {
    v3 = *(_QWORD *)(v1 + 408);
    LOBYTE(v1) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(v3 + 8) + 160LL))(
      *((_QWORD *)this + 75),
      *(unsigned int *)(*((_QWORD *)this + 5) + 276LL),
      v1);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 432LL) + 8LL) + 1016LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 440LL));
  }
}
