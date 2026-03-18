/*
 * XREFs of DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01D57D0
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C018F3F0 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0009C50 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00DFE24 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        void *a7,
        _QWORD *a8)
{
  __int64 v8; // r12
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  const struct DMMVIDPN **v19; // r13
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  DMMVIDPNSOURCEMODESET *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r9
  _QWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r13
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  DMMVIDPNSOURCEMODESET *v70; // [rsp+30h] [rbp-10h] BYREF
  __int64 v71; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v72; // [rsp+80h] [rbp+40h] BYREF
  int v73; // [rsp+84h] [rbp+44h]
  unsigned int v74; // [rsp+90h] [rbp+50h]
  unsigned int v75; // [rsp+98h] [rbp+58h]

  v75 = a4;
  v74 = a3;
  v8 = (unsigned int)a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + 285);
  if ( !v18 )
  {
    v11 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v19 = *(const struct DMMVIDPN ***)(v18 + 88);
  if ( v19 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v71, *(_QWORD *)(v18 + 88), v15, v16);
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v19,
                                               (__int64 *)&a8,
                                               v21,
                                               v22);
    v28 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v30 = (unsigned __int64)a8;
      v31 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a8[38], v8);
      v34 = v31;
      if ( v31 )
      {
        v36 = *(_QWORD *)(v31 + 104);
        if ( v36 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 96));
          v37 = *(DMMVIDPNSOURCEMODESET **)(v34 + 104);
          v30 = (unsigned __int64)a8;
        }
        else
        {
          v37 = 0LL;
        }
        v38 = *((_QWORD *)v37 + 18);
        v70 = v37;
        if ( v38 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v37,
                        v74,
                        v75,
                        (unsigned int)a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v38 + 72));
          if ( BestMatch )
          {
            v46 = DMMVIDPNSOURCEMODESET::PinMode(v37, *((_DWORD *)BestMatch + 6));
            v28 = v46;
            if ( v46 >= 0 )
            {
              v73 = -1;
              v72 = v8;
              LOBYTE(v49) = 1;
              v51 = VIDPN_MGR::FormalizeVidPnChange((__int64)v19, v30 & -(__int64)(v30 != -88LL), 3LL, v49, &v72);
              v56 = v51;
              if ( v51 >= 0 )
              {
                v59 = *(_QWORD *)(v34 + 168) >> 3;
                if ( v10 )
                  *v10 = 8 * v59;
                v60 = a6;
                if ( a6 >= v59 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v34 + 160), 8 * v59);
                  LODWORD(v28) = 0;
                }
                else
                {
                  v61 = WdLogNewEntry5_WdDmmEvent(v53, v52, v54, v55);
                  *(_QWORD *)(v61 + 24) = v60;
                  *(_QWORD *)(v61 + 32) = v59;
                  WdLogEvent5_WdDmmEvent(v61);
                  if ( !v10 )
                  {
                    v66 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
                    WdLogEvent5_WdAssertion(v66);
                  }
                  LODWORD(v28) = -1073741789;
                }
              }
              else
              {
                if ( v51 == -1071774970 )
                {
                  v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
                  v57[3] = v30;
                  v57[4] = v8;
                  v57[5] = this;
                  WdLogEvent5_WdWarning(v57);
                }
                else
                {
                  v58 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
                  v58[3] = v74;
                  v58[4] = v75;
                  v58[5] = a5;
                  v58[6] = v8;
                  v58[7] = v56;
                  WdLogEvent5_WdError(v58);
                }
                LODWORD(v28) = v56;
              }
            }
            else
            {
              v50 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
              v50[4] = v74;
              v50[5] = v75;
              v50[6] = a5;
              v50[3] = v8;
              v50[7] = v28;
              WdLogEvent5_WdError(v50);
            }
          }
          else
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42, v41, v43, v44);
            v45[3] = v74;
            v45[4] = v75;
            v45[5] = a5;
            v45[6] = v8;
            v45[7] = this;
            WdLogEvent5_WdDmmEvent(v45);
            LODWORD(v28) = -1071774970;
          }
        }
        else
        {
          v39 = WdLogNewEntry5_WdError(v33, v32);
          *(_QWORD *)(v39 + 24) = v34;
          WdLogEvent5_WdError(v39);
          LODWORD(v28) = 1075708679;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v70, 0LL);
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v35 + 24) = v8;
        WdLogEvent5_WdError(v35);
        LODWORD(v28) = -1071774972;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdDmmEvent(v25, v24, v26, v27);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdDmmEvent(v29);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v71 + 40), v67, v68, v69);
    return (unsigned int)v28;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
