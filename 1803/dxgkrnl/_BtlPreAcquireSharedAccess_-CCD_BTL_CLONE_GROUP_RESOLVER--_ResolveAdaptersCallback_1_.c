/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00ADE30
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
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00B066C (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
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
  __int64 v12; // rax
  struct VIDPN_MGR *v13; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // r15d
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // r15d
  unsigned int v26; // r14d
  int v27; // eax
  __int64 v28; // rcx
  _BYTE v29[8]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v30[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v31[40]; // [rsp+48h] [rbp-28h] BYREF
  struct DMMVIDPN *v32; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
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
  if ( !*((_BYTE *)a1 + 2373) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v12 = *((_QWORD *)a1 + 307);
    if ( v12 )
    {
      if ( *((_BYTE *)this + 16) || *(_BYTE *)(v12 + 133) )
      {
        v13 = *(struct VIDPN_MGR **)(v12 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, (__int64)v13);
        v32 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
        v16 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v22[3] = v16;
          v22[4] = v13;
          v22[5] = *((_QWORD *)this + 1);
          v22[6] = *((int *)a1 + 68);
          v22[7] = *((unsigned int *)a1 + 67);
          WdLogEvent5_WdError(v22);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33);
          v9 = v16;
          goto LABEL_4;
        }
        v17 = 0;
        v18 = 0;
        if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
        {
          do
          {
            if ( (*(_QWORD *)(272LL * v18 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
            {
              v19 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v18, v32);
              v21 = v19;
              if ( v19 == -1073741275 )
              {
                ++v17;
              }
              else if ( v19 < 0 )
              {
                v23 = (_QWORD *)WdLogNewEntry5_WdError(v20);
                v23[3] = v21;
                v23[4] = a1;
                v23[5] = *((_QWORD *)this + 1);
                v23[6] = *(_QWORD *)this;
                v23[7] = v18;
                WdLogEvent5_WdError(v23);
                auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
                EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33);
LABEL_25:
                v9 = v21;
                goto LABEL_4;
              }
            }
          }
          while ( ++v18 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        }
        auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
        if ( !v17 )
          goto LABEL_17;
      }
      v25 = 0;
      v26 = 0;
      if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
        goto LABEL_17;
      do
      {
        if ( (*(_QWORD *)(272LL * v26 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
        {
          v27 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v26, 0LL);
          v21 = v27;
          if ( v27 == -1073741275 )
          {
            ++v25;
          }
          else if ( v27 < 0 )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdError(v28);
            v24[3] = v21;
            v24[4] = a1;
            v24[5] = *((_QWORD *)this + 1);
            v24[6] = *(_QWORD *)this;
            v24[7] = v26;
            WdLogEvent5_WdError(v24);
            goto LABEL_25;
          }
        }
        ++v26;
      }
      while ( v26 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
      if ( !v25 )
LABEL_17:
        v9 = -2147483622;
    }
  }
LABEL_4:
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  COREACCESS::~COREACCESS((COREACCESS *)v30);
  return v9;
}
