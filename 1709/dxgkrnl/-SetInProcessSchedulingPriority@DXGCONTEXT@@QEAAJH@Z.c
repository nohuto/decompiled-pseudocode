/*
 * XREFs of ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C00C04D0
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00F5F40 (DxgkSetContextInProcessSchedulingPriority.c)
 * Callees:
 *     ??EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ @ 0x1C0008BB8 (--EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetInProcessSchedulingPriority(DXGCONTEXT *this, unsigned int a2)
{
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // r8
  __int64 result; // rax
  unsigned int *v6; // [rsp+20h] [rbp-18h] BYREF
  struct _VIDSCH_CONTEXT *v7; // [rsp+28h] [rbp-10h]

  v6 = (unsigned int *)this;
  ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(this);
  v7 = ImplicitHwQueue;
  while ( ImplicitHwQueue )
  {
    result = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 504LL)
                                                                                     + 8LL)
                                                                         + 272LL))(
               ImplicitHwQueue,
               a2);
    if ( (int)result < 0 )
      return result;
    DXGCONTEXT_QUEUE_ITERATOR::operator++(&v6);
    ImplicitHwQueue = v7;
  }
  return 0LL;
}
