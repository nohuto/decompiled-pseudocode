/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C01545C0
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0027EC4 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        DXGADAPTER **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  DXGADAPTER *v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // eax

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1343LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v10 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 1344LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)this, v7)
    || (v12 = this[14], (v13 = *((_QWORD *)v12 + 470 * v7 + 11)) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v13 + 48) + 4LL) & 0x10) != 0 )
  {
    v14 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(*((_QWORD *)v12 + 470 * v7 + 75) + 16LL);
    v14 = *(_DWORD *)(v13 + 16);
  }
  *a3 = v14;
  *a4 = v10;
}
