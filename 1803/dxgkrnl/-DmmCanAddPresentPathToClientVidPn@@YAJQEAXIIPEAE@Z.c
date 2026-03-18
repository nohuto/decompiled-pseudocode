/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C009EAD0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C009FB10 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct VIDPN_MGR *v10; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    v19 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v21);
  }
  v9 = *((_QWORD *)a1 + 307);
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_15;
  }
  v10 = *(struct VIDPN_MGR **)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v10);
    v26 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10);
    v12 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v23 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v23 + 24) = v12;
      WdLogEvent5_WdDmmEvent(v23);
    }
    else
    {
      v13 = v26 + 96;
      v14 = VIDPN_MGR::AddPathToVidPnTopology(
              v10,
              (struct DMMVIDPNTOPOLOGY *const)(v26 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v14;
      if ( v14 == -1071774976 || v14 == -1071774975 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v16[3] = v6;
        v16[4] = v4;
        v16[5] = v13;
        WdLogEvent5_WdDmmEvent(v16);
        v17 = 0;
      }
      else
      {
        if ( v14 < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v24[3] = v6;
          v24[4] = v4;
          v24[5] = v13;
          v24[6] = v12;
          WdLogEvent5_WdError(v24);
          goto LABEL_11;
        }
        v17 = 1;
      }
      *a4 = v17;
      LODWORD(v12) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v26, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
    return (unsigned int)v12;
  }
  v22 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v22 + 24) = a1;
  WdLogEvent5_WdError(v22);
  return 3223192373LL;
}
