/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00AF280
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
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00AFC34 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
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
  __int64 v14; // rax
  struct VIDPN_MGR *v15; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // r15d
  unsigned int v21; // r14d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r15d
  unsigned int v33; // r14d
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  _BYTE v46[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v47[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v48[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v49; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v50; // [rsp+C8h] [rbp+58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
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
    goto LABEL_4;
  }
  if ( !*((_BYTE *)a1 + 2205) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v14 = *((_QWORD *)a1 + 285);
    if ( v14 )
    {
      if ( *((_BYTE *)this + 16) || *(_BYTE *)(v14 + 134) )
      {
        v15 = *(struct VIDPN_MGR **)(v14 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v50, (__int64)v15, v12, v13);
        v49 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v15);
        v19 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
          v37[3] = v19;
          v37[4] = v15;
          v37[5] = *((_QWORD *)this + 1);
          v37[6] = *((int *)a1 + 68);
          v37[7] = *((unsigned int *)a1 + 67);
          WdLogEvent5_WdError(v37);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v49, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v38, v39, v40);
          v9 = v19;
          goto LABEL_4;
        }
        v20 = 0;
        v21 = 0;
        if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
        {
LABEL_17:
          auto_rc<DMMVIDPN>::reset((__int64 *)&v49, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v26, v27, v28);
          goto LABEL_18;
        }
        do
        {
          if ( (*(_QWORD *)(264LL * v21 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
          {
            v22 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v21, v49);
            v25 = v22;
            if ( v22 == -1073741275 )
            {
              ++v20;
            }
            else if ( v22 < 0 )
            {
              v41 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
              v41[3] = v25;
              v41[4] = a1;
              v41[5] = *((_QWORD *)this + 1);
              v41[6] = *(_QWORD *)this;
              v41[7] = v21;
              WdLogEvent5_WdError(v41);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v49, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v42, v43, v44);
LABEL_35:
              v9 = v25;
              goto LABEL_4;
            }
          }
          ++v21;
        }
        while ( v21 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v20 )
          goto LABEL_17;
        auto_rc<DMMVIDPN>::reset((__int64 *)&v49, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v29, v30, v31);
      }
      v32 = 0;
      v33 = 0;
      if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
      {
        do
        {
          if ( (*(_QWORD *)(264LL * v33 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
          {
            v34 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v33, 0LL);
            v25 = v34;
            if ( v34 == -1073741275 )
            {
              ++v32;
            }
            else if ( v34 < 0 )
            {
              v45 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
              v45[3] = v25;
              v45[4] = a1;
              v45[5] = *((_QWORD *)this + 1);
              v45[6] = *(_QWORD *)this;
              v45[7] = v33;
              WdLogEvent5_WdError(v45);
              goto LABEL_35;
            }
          }
          ++v33;
        }
        while ( v33 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v32 )
          goto LABEL_18;
        goto LABEL_4;
      }
LABEL_18:
      v9 = -2147483622;
    }
  }
LABEL_4:
  COREACCESS::~COREACCESS((COREACCESS *)v48);
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  return v9;
}
