/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C0145BA4
 * Callers:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C00E96A4 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(
        DXGDEVICE *this,
        struct DXGALLOCATION *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  struct DXGALLOCATION *v7; // rcx
  __int64 v8; // rax

  if ( *((_DWORD *)this + 106) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 7709LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  if ( v7 )
  {
    *((_QWORD *)v7 + 7) = *((_QWORD *)a2 + 7);
    v7 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  }
  v8 = *((_QWORD *)a2 + 7);
  if ( v8 )
    *(_QWORD *)(v8 + 64) = v7;
  else
    *a3 = v7;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
}
