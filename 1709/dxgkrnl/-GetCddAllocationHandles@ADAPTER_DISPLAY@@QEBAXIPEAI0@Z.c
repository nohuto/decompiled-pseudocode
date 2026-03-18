/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00ADD68
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006D44 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        DXGADAPTER **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  DXGADAPTER *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 1342LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 1343LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)this, v7)
    || (v9 = this[14], (v10 = *((_QWORD *)v9 + 470 * v7 + 11)) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL) & 0x10) != 0 )
  {
    *a3 = 0;
    *a4 = 0;
  }
  else
  {
    *a3 = *(_DWORD *)(v10 + 16);
    *a4 = *(_DWORD *)(*((_QWORD *)v9 + 470 * v7 + 75) + 16LL);
  }
}
