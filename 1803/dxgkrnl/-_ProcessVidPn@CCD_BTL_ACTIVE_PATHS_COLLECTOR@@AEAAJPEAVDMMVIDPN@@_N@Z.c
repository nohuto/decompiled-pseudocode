/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00B6E84
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00ADA30 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00DBD90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00DCCC0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C022766C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        bool a3)
{
  char *v3; // rsi
  int v6; // ebx
  struct DMMVIDPNPRESENTPATH *v7; // rdi
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  int result; // eax
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = (char *)a2 + 96;
  v6 = 0;
  if ( a2 == (struct DMMVIDPN *)-96LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = 0LL;
  v8 = (char *)*((_QWORD *)v3 + 3);
  if ( v8 != v3 + 24 )
    v7 = (struct DMMVIDPNPRESENTPATH *)(v8 - 8);
  while ( v7 )
  {
    v10 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)(v3 + 160)) + 48);
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v15);
      v11 = *(_QWORD *)(v10 + 8);
    }
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, *(struct DXGADAPTER **)(v11 + 16), v7, 1, a3);
    v6 = result;
    if ( result < 0 )
      return result;
    v13 = (char *)*((_QWORD *)v7 + 1);
    v7 = (struct DMMVIDPNPRESENTPATH *)(v13 - 8);
    if ( v13 == v3 + 24 )
      v7 = 0LL;
  }
  return v6;
}
