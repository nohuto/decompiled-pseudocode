/*
 * XREFs of ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C01487F0
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C01649D4 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C0150FE0 (-CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // rdx
  _OWORD *v11; // rax
  __int64 v12; // r8
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  ADAPTER_DISPLAY *v15; // rcx
  PERESOURCE v16; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 8515LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *a4 < 0x430 )
    return 2147483653LL;
  v10 = (char *)*a3;
  v11 = this + 221;
  v12 = 4LL;
  *(_DWORD *)v10 = 1885430849;
  v13 = v10 + 8;
  do
  {
    *v13 = *v11;
    v13[1] = v11[1];
    v13[2] = v11[2];
    v13[3] = v11[3];
    v13[4] = v11[4];
    v13[5] = v11[5];
    v13[6] = v11[6];
    v13 += 8;
    v14 = v11[7];
    v11 += 8;
    *(v13 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v13 = *v11;
  v13[1] = v11[1];
  v13[2] = v11[2];
  v13[3] = v11[3];
  *((_QWORD *)v13 + 8) = *((_QWORD *)v11 + 8);
  v15 = (ADAPTER_DISPLAY *)this[307];
  if ( v15 )
    ADAPTER_DISPLAY::CollectDbgInfo(v15, (struct DXGADAPTERDBGINFO *)v10);
  v16 = this[308];
  if ( v16 )
  {
    *((_OWORD *)v10 + 49) = *(_OWORD *)&v16[5].Reserved2;
    *((_OWORD *)v10 + 50) = *(_OWORD *)&v16[5].SpinLock;
  }
  *a3 = (char *)*a3 + 1072;
  *a4 -= 1072;
  return 0LL;
}
