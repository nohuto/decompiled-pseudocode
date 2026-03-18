/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00FD984
 * Callers:
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C00F3888 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C010B838 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C010E060 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax

  if ( !*((_BYTE *)this + 401) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(unsigned int *)(*(_QWORD *)(v5 + 40) + 328LL);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 520LL) + 8LL);
    if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 328))(*((_QWORD *)this + 32), a2, a3, v6);
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 320))(*((_QWORD *)this + 29), a2, a3, v6);
  }
  *((_DWORD *)this + 98) = a2;
}
