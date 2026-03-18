/*
 * XREFs of ??EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ @ 0x1C0008BB8
 * Callers:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00C0434 (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 *     ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C00C04D0 (-SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00F7F40 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT_QUEUE_ITERATOR::operator++(unsigned int **a1)
{
  unsigned int **v1; // rdx
  unsigned int *v2; // rcx
  struct _VIDSCH_CONTEXT *result; // rax
  __int64 v4; // rcx

  v1 = a1;
  v2 = *a1;
  result = (struct _VIDSCH_CONTEXT *)v2[91];
  if ( ((unsigned __int8)result & 0x10) != 0
    && (result = DXGCONTEXT::GetImplicitHwQueue((DXGCONTEXT *)v2), v1[1] == (unsigned int *)result) )
  {
    result = *(struct _VIDSCH_CONTEXT **)(v4 + 264);
    v1[1] = (unsigned int *)result;
  }
  else
  {
    v1[1] = 0LL;
  }
  return result;
}
