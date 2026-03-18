/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00A3E90
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C003DCE8 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00EF7F4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  struct VIDPN_MGR *v15; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35[8]; // [rsp+20h] [rbp-50h] BYREF
  char v36[32]; // [rsp+28h] [rbp-48h] BYREF
  char v37[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v38; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled() )
    {
      v14 = *((_QWORD *)a1 + 285);
      if ( v14 )
      {
        v15 = *(struct VIDPN_MGR **)(v14 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v39, (__int64)v15, v12, v13);
        v38 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v15);
        v19 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
          v24[3] = v19;
          v24[4] = v15;
          v27 = *(_QWORD *)a2;
          v28 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
          v24[5] = v28;
          if ( !*((_QWORD *)v15 + 1) )
          {
            v29 = WdLogNewEntry5_WdAssertion(v27, v28, v25, v26);
            WdLogEvent5_WdAssertion(v29);
          }
          v30 = *(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL);
          v24[6] = *(int *)(v30 + 272);
          if ( !*((_QWORD *)v15 + 1) )
          {
            v31 = WdLogNewEntry5_WdAssertion(v30, v28, v25, v26);
            WdLogEvent5_WdAssertion(v31);
          }
          v24[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 268LL);
          WdLogEvent5_WdError(v24);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v38, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40), v32, v33, v34);
          v9 = v19;
        }
        else
        {
          v20 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v38, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v38, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40), v21, v22, v23);
          v9 = v20;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 68);
    v10[5] = *((unsigned int *)a1 + 67);
    v10[6] = a2;
  }
  else
  {
    v9 = v4;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  return v9;
}
