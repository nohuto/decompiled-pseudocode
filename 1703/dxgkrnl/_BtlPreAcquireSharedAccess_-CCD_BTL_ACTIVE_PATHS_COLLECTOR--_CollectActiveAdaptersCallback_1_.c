/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00F0620
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

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
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
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BOOL8 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _BYTE v39[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v40[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v41[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v42; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !*((_BYTE *)a1 + 2205) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
    {
      v14 = *((_QWORD *)a1 + 285);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43, v15, v12, v13);
        v42 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   (const struct DMMVIDPN **)v15,
                                                   (__int64 *)&v42,
                                                   v16,
                                                   v17);
        v23 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
          v28[3] = v23;
          v28[4] = v15;
          v31 = *(_QWORD *)this;
          v32 = *(_QWORD *)(*(_QWORD *)this + 64LL);
          v28[5] = v32;
          if ( !*(_QWORD *)(v15 + 8) )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31, v32, v29, v30);
            WdLogEvent5_WdAssertion(v33);
          }
          v34 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL);
          v28[6] = *(int *)(v34 + 272);
          if ( !*(_QWORD *)(v15 + 8) )
          {
            v35 = WdLogNewEntry5_WdAssertion(v34, v32, v29, v30);
            WdLogEvent5_WdAssertion(v35);
          }
          v28[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL) + 268LL);
          WdLogEvent5_WdError(v28);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v42, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40), v36, v37, v38);
          v9 = v23;
        }
        else
        {
          LOBYTE(v21) = 1;
          v24 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v42, v21, v22);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v42, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40), v25, v26, v27);
          v9 = v24;
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
    v10[6] = this;
  }
  else
  {
    v9 = v4;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v41);
  COREACCESS::~COREACCESS((COREACCESS *)v40);
  return v9;
}
