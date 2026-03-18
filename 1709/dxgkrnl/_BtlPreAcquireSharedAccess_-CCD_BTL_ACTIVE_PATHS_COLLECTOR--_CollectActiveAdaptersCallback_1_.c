/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_ @ 0x1C00B6130
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0014EF0 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002E870 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00DB150 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
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
  _BYTE v22[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  DXGADAPTER *v24; // [rsp+38h] [rbp-38h]
  char v25; // [rsp+40h] [rbp-30h]
  _BYTE v26[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  DXGADAPTER *v28; // [rsp+58h] [rbp-18h]
  char v29; // [rsp+60h] [rbp-10h]
  struct DMMVIDPN *v30; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF

  v2 = 0;
  v24 = this;
  v25 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v23 = -1LL;
  }
  v28 = this;
  v29 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v27 = -1LL;
  }
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
  if ( v5 >= 0 )
  {
    if ( !*((_BYTE *)this + 2229) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
    {
      v10 = *((_QWORD *)this + 288);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, v11);
        v30 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   (const struct DMMVIDPN **)v11,
                                                   (__int64 *)&v30);
        v14 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v16[3] = v14;
          v16[4] = v11;
          v17 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
          v16[5] = v17;
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
          auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31);
          v2 = v14;
        }
        else
        {
          v15 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v30, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
          if ( v15 < 0 )
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31);
          else
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
          v2 = v15;
        }
      }
    }
  }
  else if ( v5 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v8[3] = this;
    v8[4] = *((int *)this + 68);
    v8[5] = *((unsigned int *)this + 67);
    v8[6] = a2;
  }
  else
  {
    v2 = v5;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v26);
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  return v2;
}
