/*
 * XREFs of ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00934A0
 * Callers:
 *     ?ProcessStatusChange@DXGPROCESS@@AEAAXXZ @ 0x1C0089EE4 (-ProcessStatusChange@DXGPROCESS@@AEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B9E50 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v1; // r8
  __int64 v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 185LL) )
  {
    v3 = *(_QWORD *)(v1 + 504);
    LOBYTE(v1) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(v3 + 8) + 160LL))(
      *((_QWORD *)this + 75),
      *(unsigned int *)(*((_QWORD *)this + 5) + 312LL),
      v1);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 8LL) + 1016LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 536LL));
  }
}
