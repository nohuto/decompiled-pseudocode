/*
 * XREFs of ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C019CA28
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C017DEF4 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CollectDbgInfo(
        DXGDEVICE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 1245LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *a4 < 0xA0 )
    return 2147483653LL;
  v10 = (char *)*a3;
  *(_DWORD *)v10 = 1769366852;
  *((_DWORD *)v10 + 1) = *((_DWORD *)this + 82);
  *(_OWORD *)(v10 + 8) = *(_OWORD *)((char *)this + 424);
  *((_QWORD *)v10 + 3) = *((_QWORD *)this + 55);
  *((_OWORD *)v10 + 2) = *(_OWORD *)((char *)this + 1032);
  *((_OWORD *)v10 + 3) = *(_OWORD *)((char *)this + 1048);
  *((_OWORD *)v10 + 4) = *(_OWORD *)((char *)this + 1064);
  *((_OWORD *)v10 + 5) = *(_OWORD *)((char *)this + 1080);
  *((_OWORD *)v10 + 6) = *(_OWORD *)((char *)this + 1608);
  *((_OWORD *)v10 + 7) = *(_OWORD *)((char *)this + 1624);
  *((_OWORD *)v10 + 8) = *(_OWORD *)((char *)this + 1640);
  *((_OWORD *)v10 + 9) = *(_OWORD *)((char *)this + 1656);
  *a3 = (char *)*a3 + 160;
  *a4 -= 160;
  return 0LL;
}
