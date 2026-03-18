/*
 * XREFs of ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01F9C54
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_1_ @ 0x1C01F9340 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddExternalPathsAdaptersCallback_1_.c)
 * Callees:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01F9C90 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

int __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback(
        struct DXGADAPTER *a1,
        BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)a1 + 288);
  if ( v3 && (!*((_BYTE *)this + 10) || *(_BYTE *)(v3 + 133)) )
    return BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(this, a1);
  else
    return 0;
}
