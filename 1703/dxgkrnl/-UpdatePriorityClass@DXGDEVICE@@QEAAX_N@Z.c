/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C00C1118
 * Callers:
 *     DXGDEVICE_UpdatePriorityClass @ 0x1C0003400 (DXGDEVICE_UpdatePriorityClass.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00B1AD0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this, unsigned __int8 a2)
{
  unsigned int *v2; // rdi
  unsigned int *i; // rbx

  v2 = (unsigned int *)((char *)this + 344);
  for ( i = (unsigned int *)*((_QWORD *)this + 43); i != v2 && i; i = *(unsigned int **)i )
    DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)i, i[90], a2);
}
