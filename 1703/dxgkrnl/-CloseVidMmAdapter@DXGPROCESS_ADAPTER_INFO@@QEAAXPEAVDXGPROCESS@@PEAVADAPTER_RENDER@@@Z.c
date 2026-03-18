/*
 * XREFs of ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0096094
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00960D4 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00D715C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(
        DXGPROCESS_ADAPTER_INFO *this,
        struct DXGPROCESS *a2,
        struct ADAPTER_RENDER *a3)
{
  if ( *((_BYTE *)this + 64) )
  {
    (*(void (__fastcall **)(_QWORD, struct DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)a3 + 54) + 8LL) + 1176LL))(
      *((_QWORD *)a3 + 55),
      a2);
    *((_BYTE *)this + 64) = 0;
  }
}
