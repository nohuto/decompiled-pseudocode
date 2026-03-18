/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C016C1CC
 * Callers:
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00D3CC0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B14E4 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C00E96A4 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C016A6CC (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C016A808 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        struct DXGALLOCATION ***a5)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  struct DXGALLOCATION *v9; // rbx

  v6 = a3;
  if ( !*(_DWORD *)(a2 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(a2 + 104));
  if ( a5 )
  {
    DXGDEVICE::DestroyClientResource((DXGDEVICE *)a2, a5);
  }
  else if ( (_DWORD)v6 )
  {
    v8 = v6;
    do
    {
      v9 = *a4;
      DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)a2, *a4, 0);
      DXGDEVICE::DestroyClientAllocations((DXGDEVICE *)a2, (struct DXGALLOCATION **)v9);
      ++a4;
      --v8;
    }
    while ( v8 );
  }
}
