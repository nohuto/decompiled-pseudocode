/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00B66A0
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
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00D9650 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 v10; // rax
  const struct DMMVIDPN **v11; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // r15d
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r12
  int v20; // r15d
  unsigned int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _BYTE v27[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v28[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v29[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v30; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
  v7 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
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
    goto LABEL_4;
  }
  if ( !*((_BYTE *)a1 + 2229) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v10 = *((_QWORD *)a1 + 288);
    if ( v10 )
    {
      if ( *((_BYTE *)this + 16) || *(_BYTE *)(v10 + 133) )
      {
        v11 = *(const struct DMMVIDPN ***)(v10 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, (__int64)v11);
        v30 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   v11,
                                                   (__int64 *)&v30);
        v14 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v24[3] = v14;
          v24[4] = v11;
          v24[5] = *((_QWORD *)this + 1);
          v24[6] = *((int *)a1 + 68);
          v24[7] = *((unsigned int *)a1 + 67);
          WdLogEvent5_WdError(v24);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31);
          v7 = v14;
          goto LABEL_4;
        }
        v15 = 0;
        v16 = 0;
        if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
        {
LABEL_17:
          auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
          goto LABEL_18;
        }
        do
        {
          if ( (*(_QWORD *)(264LL * v16 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
          {
            v17 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v16, v30);
            v19 = v17;
            if ( v17 == -1073741275 )
            {
              ++v15;
            }
            else if ( v17 < 0 )
            {
              v25 = (_QWORD *)WdLogNewEntry5_WdError(v18);
              v25[3] = v19;
              v25[4] = a1;
              v25[5] = *((_QWORD *)this + 1);
              v25[6] = *(_QWORD *)this;
              v25[7] = v16;
              WdLogEvent5_WdError(v25);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
              EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31);
LABEL_35:
              v7 = v19;
              goto LABEL_4;
            }
          }
          ++v16;
        }
        while ( v16 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v15 )
          goto LABEL_17;
        auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
      }
      v20 = 0;
      v21 = 0;
      if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
      {
        do
        {
          if ( (*(_QWORD *)(264LL * v21 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
          {
            v22 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v21, 0LL);
            v19 = v22;
            if ( v22 == -1073741275 )
            {
              ++v20;
            }
            else if ( v22 < 0 )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
              v26[3] = v19;
              v26[4] = a1;
              v26[5] = *((_QWORD *)this + 1);
              v26[6] = *(_QWORD *)this;
              v26[7] = v21;
              WdLogEvent5_WdError(v26);
              goto LABEL_35;
            }
          }
          ++v21;
        }
        while ( v21 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v20 )
          goto LABEL_18;
        goto LABEL_4;
      }
LABEL_18:
      v7 = -2147483622;
    }
  }
LABEL_4:
  COREACCESS::~COREACCESS((COREACCESS *)v29);
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  return v7;
}
