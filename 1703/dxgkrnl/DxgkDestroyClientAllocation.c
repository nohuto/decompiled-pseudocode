/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C017FFCC
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00FD580 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ED28 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C00C1C98 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C017EC48 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C017ED14 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct DXGALLOCATION **a5)
{
  struct DXGALLOCATION **v5; // r14
  __int64 v6; // rbx
  __int64 v8; // rsi
  struct DXGALLOCATION *v9; // rbx

  v5 = (struct DXGALLOCATION **)a4;
  v6 = a3;
  if ( !*(_DWORD *)(a2 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(a2 + 104));
  if ( a5 )
  {
    DXGDEVICE::DestroyClientResource((PERESOURCE *)a2, a5);
  }
  else if ( (_DWORD)v6 )
  {
    v8 = v6;
    do
    {
      v9 = *v5;
      DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)a2, *v5, 0LL, a4);
      DXGDEVICE::DestroyClientAllocations((PERESOURCE *)a2, v9);
      ++v5;
      --v8;
    }
    while ( v8 );
  }
}
