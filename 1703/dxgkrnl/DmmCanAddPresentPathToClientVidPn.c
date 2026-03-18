/*
 * XREFs of DmmCanAddPresentPathToClientVidPn @ 0x1C00AB3C8
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9E90 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(DXGADAPTER *a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  struct VIDPN_MGR *v13; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // [rsp+40h] [rbp-28h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = (unsigned int)a2;
  if ( !a4 )
  {
    v26 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v28);
  }
  v12 = *((_QWORD *)a1 + 285);
  if ( !v12 )
  {
    v27 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v27 + 24) = a1;
    goto LABEL_18;
  }
  v13 = *(struct VIDPN_MGR **)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, (__int64)v13, v10, v11);
    v33 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
    v15 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v30 + 24) = v15;
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      v16 = v33 + 96;
      v17 = VIDPN_MGR::AddPathToVidPnTopology(
              v13,
              (struct DMMVIDPNTOPOLOGY *const)(v33 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v15 = v17;
      if ( v17 == -1071774976 || v17 == -1071774975 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v20[3] = v6;
        v20[4] = v4;
        v20[5] = v16;
        WdLogEvent5_WdDmmEvent(v20);
        v21 = 0;
      }
      else
      {
        if ( v17 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
          v31[3] = v6;
          v31[4] = v4;
          v31[5] = v16;
          v31[6] = v15;
          WdLogEvent5_WdError(v31);
          goto LABEL_11;
        }
        v21 = 1;
      }
      *a4 = v21;
      LODWORD(v15) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v33, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v22, v23, v24);
    return (unsigned int)v15;
  }
  v29 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v29 + 24) = a1;
  WdLogEvent5_WdError(v29);
  return 3223192373LL;
}
