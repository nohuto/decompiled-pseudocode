/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00ADA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C001AF80 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C003C950 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00B6E84 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12; // rdi
  struct VIDPN_MGR *v13; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // edi
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v26[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v27[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v28; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !*((_BYTE *)this + 2373) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
    {
      v12 = *((_QWORD *)this + 307);
      if ( v12 )
      {
        v13 = *(struct VIDPN_MGR **)(v12 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v13);
        v28 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
        v16 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v18[3] = v16;
          v18[4] = v13;
          v19 = *(_QWORD *)a2;
          v18[5] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
          v20 = *((_QWORD *)v13 + 1);
          if ( !v20 )
          {
            v21 = WdLogNewEntry5_WdAssertion(v19);
            WdLogEvent5_WdAssertion(v21);
            v20 = *((_QWORD *)v13 + 1);
          }
          v22 = *(int *)(*(_QWORD *)(v20 + 16) + 272LL);
          v18[6] = v22;
          v23 = *((_QWORD *)v13 + 1);
          if ( !v23 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v22);
            WdLogEvent5_WdAssertion(v24);
            v23 = *((_QWORD *)v13 + 1);
          }
          v18[7] = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 268LL);
          WdLogEvent5_WdError(v18);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v29);
          v9 = v16;
        }
        else
        {
          v17 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v28, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
          if ( v17 < 0 )
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v29);
          else
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
          v9 = v17;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 68);
    v10[5] = *((unsigned int *)this + 67);
    v10[6] = a2;
  }
  else
  {
    v9 = v4;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  COREACCESS::~COREACCESS((COREACCESS *)v26);
  return v9;
}
