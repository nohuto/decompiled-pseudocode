/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00B1AD0
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1C00A4F10 (DxgkSetContextSchedulingPriority.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C00C0690 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C00C1118 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, __int64 a2, unsigned __int8 a3)
{
  int v3; // edi

  v3 = a2;
  if ( !*((_BYTE *)this + 369) )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 408LL)
                                                                        + 8LL)
                                                            + 256LL))(
      *((_QWORD *)this + 29),
      a2,
      a3,
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 276LL));
  *((_DWORD *)this + 90) = v3;
  return 0LL;
}
