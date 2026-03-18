/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C0178C00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C002D1C8 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D20C (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_PARAV *this)
{
  char *v2; // rcx
  char *v3; // rax
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-20h] BYREF

  (*(void (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, _QWORD, _QWORD))(*(_QWORD *)this + 16LL))(this, 0LL, 0LL);
  if ( *((_QWORD *)this + 26) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v6,
      (struct _KTHREAD **)(*((_QWORD *)this + 27) + 64LL));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, (struct _KTHREAD **)this + 7);
    v2 = (char *)this + 176;
    while ( 1 )
    {
      v3 = *(char **)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
        __fastfail(3u);
      *(_QWORD *)v2 = v4;
      *(_QWORD *)(v4 + 8) = v2;
      if ( v3 == v2 )
        break;
      *((_QWORD *)v3 - 1) = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
    DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 27), (struct _LIST_ENTRY *)this + 12);
    DXGPROCESS::ReleaseReferenceSafe(*((DXGPROCESS **)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
}
