/*
 * XREFs of ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C016D718
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C017A51C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C0170024 (-CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  char *v13; // rdx
  _OWORD *v14; // rcx
  __int64 v15; // r8
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  ADAPTER_DISPLAY *v18; // rcx
  PERESOURCE v19; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 8072LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *a4 < 0x428 )
    return 2147483653LL;
  v13 = (char *)*a3;
  v14 = this + 201;
  v15 = 4LL;
  *(_DWORD *)v13 = 1885430849;
  v16 = v13 + 8;
  do
  {
    *v16 = *v14;
    v16[1] = v14[1];
    v16[2] = v14[2];
    v16[3] = v14[3];
    v16[4] = v14[4];
    v16[5] = v14[5];
    v16[6] = v14[6];
    v16 += 8;
    v17 = v14[7];
    v14 += 8;
    *(v16 - 1) = v17;
    --v15;
  }
  while ( v15 );
  *v16 = *v14;
  v16[1] = v14[1];
  v16[2] = v14[2];
  v16[3] = v14[3];
  v18 = (ADAPTER_DISPLAY *)this[285];
  if ( v18 )
    ADAPTER_DISPLAY::CollectDbgInfo(v18, (struct DXGADAPTERDBGINFO *)v13);
  v19 = this[286];
  if ( v19 )
  {
    *(_OWORD *)(v13 + 776) = *(_OWORD *)&v19[4].NumberOfSharedWaiters;
    *(_OWORD *)(v13 + 792) = *(_OWORD *)&v19[4].Address;
  }
  *a3 = (char *)*a3 + 1064;
  *a4 -= 1064;
  return 0LL;
}
