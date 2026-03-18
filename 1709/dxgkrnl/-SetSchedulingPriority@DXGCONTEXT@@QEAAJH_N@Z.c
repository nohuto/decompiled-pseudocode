/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00C0434
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C0093518 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0093FF4 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00F7F40 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ??EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ @ 0x1C0008BB8 (--EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2, unsigned __int8 a3)
{
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 result; // rax
  unsigned int *v8; // [rsp+30h] [rbp-18h] BYREF
  struct _VIDSCH_CONTEXT *v9; // [rsp+38h] [rbp-10h]

  if ( !*((_BYTE *)this + 401) )
  {
    v8 = (unsigned int *)this;
    ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(this);
    v9 = ImplicitHwQueue;
    while ( ImplicitHwQueue )
    {
      (*(void (__fastcall **)(struct _VIDSCH_CONTEXT *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 504LL)
                                                                                           + 8LL)
                                                                               + 256LL))(
        v9,
        a2,
        a3,
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 312LL));
      DXGCONTEXT_QUEUE_ITERATOR::operator++(&v8);
      ImplicitHwQueue = v9;
    }
  }
  result = 0LL;
  *((_DWORD *)this + 98) = a2;
  return result;
}
