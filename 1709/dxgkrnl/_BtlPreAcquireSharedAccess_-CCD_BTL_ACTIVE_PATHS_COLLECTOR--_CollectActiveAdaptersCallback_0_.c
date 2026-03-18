/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00F7240
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0014EF0 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002E870 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00DB150 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // edi
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v23[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v24; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  v7 = 0;
  if ( v4 >= 0 )
  {
    if ( !DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled() )
    {
      v10 = *((_QWORD *)a1 + 288);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, v11);
        v24 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   (const struct DMMVIDPN **)v11,
                                                   (__int64 *)&v24);
        v14 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v16[3] = v14;
          v16[4] = v11;
          v17 = *(_QWORD *)this;
          v16[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
          if ( !*(_QWORD *)(v11 + 8) )
          {
            v18 = WdLogNewEntry5_WdAssertion(v17);
            WdLogEvent5_WdAssertion(v18);
          }
          v19 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
          v16[6] = *(int *)(v19 + 272);
          if ( !*(_QWORD *)(v11 + 8) )
          {
            v20 = WdLogNewEntry5_WdAssertion(v19);
            WdLogEvent5_WdAssertion(v20);
          }
          v16[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 268LL);
          WdLogEvent5_WdError(v16);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25);
          v7 = v14;
        }
        else
        {
          v15 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v24, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
          if ( v15 < 0 )
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25);
          else
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
          v7 = v15;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 68);
    v8[5] = *((unsigned int *)a1 + 67);
    v8[6] = this;
  }
  else
  {
    v7 = v4;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  return v7;
}
