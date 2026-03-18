/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EF7F4
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00A3E90 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_0_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00F0620 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01DFD00 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00EF8B8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        _BOOL8 a3,
        __int64 a4)
{
  char *v4; // rsi
  bool v5; // r14
  int v7; // edi
  char *v8; // rbx
  struct DMMVIDPNPRESENTPATH *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int result; // eax
  char *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = (char *)a2 + 96;
  v5 = a3;
  v7 = 0;
  if ( a2 == (struct DMMVIDPN *)-96LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, -96LL, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v8 = (char *)*((_QWORD *)v4 + 3);
  if ( v8 == v4 + 24 )
    return v7;
  v9 = (struct DMMVIDPNPRESENTPATH *)(v8 - 8);
  if ( !v9 )
    return v7;
  while ( 1 )
  {
    v12 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)(v4 + 160)) + 48);
    if ( !*(_QWORD *)(v12 + 8) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
      WdLogEvent5_WdAssertion(v18);
    }
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
               this,
               *(struct DXGADAPTER **)(*(_QWORD *)(v12 + 8) + 16LL),
               v9,
               1,
               v5);
    v7 = result;
    if ( result < 0 )
      break;
    v16 = (char *)*((_QWORD *)v9 + 1);
    v9 = (struct DMMVIDPNPRESENTPATH *)(v16 - 8);
    if ( v16 == v4 + 24 )
      v9 = 0LL;
    if ( !v9 )
      return v7;
  }
  return result;
}
