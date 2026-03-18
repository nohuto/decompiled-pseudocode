/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C0212F4C
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C0194600 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C00447C0 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00BE024 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  const struct DMMVIDPN **v16; // r13
  __int64 v17; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  DMMVIDPNSOURCEMODESET *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r13
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  unsigned __int64 v44; // rbx
  size_t v45; // r8
  unsigned __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  DMMVIDPNSOURCEMODESET *v50; // [rsp+30h] [rbp-10h] BYREF
  __int64 v51; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v52; // [rsp+80h] [rbp+40h] BYREF
  int v53; // [rsp+84h] [rbp+44h]
  unsigned int v54; // [rsp+90h] [rbp+50h]
  unsigned int v55; // [rsp+98h] [rbp+58h]

  v55 = a4;
  v54 = a3;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 307);
  if ( !v15 )
  {
    v11 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v16 = *(const struct DMMVIDPN ***)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, *(_QWORD *)(v15 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v16,
                                               (__int64 *)&a8);
    v20 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v22 = (unsigned __int64)a8;
      v23 = IndexedSet<DMMVIDPNSOURCE>::FindById(a8[38], v8);
      v25 = v23;
      if ( v23 )
      {
        v27 = *(_QWORD *)(v23 + 104);
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
          v28 = *(DMMVIDPNSOURCEMODESET **)(v25 + 104);
          v22 = (unsigned __int64)a8;
        }
        else
        {
          v28 = 0LL;
        }
        v29 = *((_QWORD *)v28 + 18);
        v50 = v28;
        if ( v29 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v28,
                        v54,
                        v55,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v29 + 72));
          if ( BestMatch )
          {
            v34 = DMMVIDPNSOURCEMODESET::PinMode(v28, *((_DWORD *)BestMatch + 6));
            v20 = v34;
            if ( v34 >= 0 )
            {
              v53 = -1;
              v52 = v8;
              v37 = VIDPN_MGR::FormalizeVidPnChange(
                      (VIDPN_MGR *)v16,
                      (struct D3DKMDT_HVIDPN__ *)(v22 & -(__int64)(v22 != -88LL)),
                      3,
                      1,
                      &v52);
              v41 = v37;
              if ( v37 >= 0 )
              {
                v44 = *(_QWORD *)(v25 + 168) >> 3;
                v45 = 8 * v44;
                if ( v10 )
                  *v10 = v45;
                v46 = a6;
                if ( a6 >= v44 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v25 + 160), v45);
                  LODWORD(v20) = 0;
                }
                else
                {
                  v47 = WdLogNewEntry5_WdDmmEvent(v39);
                  *(_QWORD *)(v47 + 24) = v46;
                  *(_QWORD *)(v47 + 32) = v44;
                  WdLogEvent5_WdDmmEvent(v47);
                  if ( !v10 )
                  {
                    v49 = WdLogNewEntry5_WdAssertion(v48);
                    WdLogEvent5_WdAssertion(v49);
                  }
                  LODWORD(v20) = -1073741789;
                }
              }
              else
              {
                if ( v37 == -1071774970 )
                {
                  v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
                  v42[3] = v22;
                  v42[4] = v8;
                  v42[5] = this;
                  WdLogEvent5_WdWarning(v42);
                }
                else
                {
                  v43 = (_QWORD *)WdLogNewEntry5_WdError(v39);
                  v43[3] = v54;
                  v43[4] = v55;
                  v43[5] = a5;
                  v43[6] = v8;
                  v43[7] = v41;
                  WdLogEvent5_WdError(v43);
                }
                LODWORD(v20) = v41;
              }
            }
            else
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
              v36[4] = v54;
              v36[5] = v55;
              v36[6] = a5;
              v36[3] = v8;
              v36[7] = v20;
              WdLogEvent5_WdError(v36);
            }
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
            v33[3] = v54;
            v33[4] = v55;
            v33[5] = a5;
            v33[6] = v8;
            v33[7] = this;
            WdLogEvent5_WdDmmEvent(v33);
            LODWORD(v20) = -1071774970;
          }
        }
        else
        {
          v30 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v30 + 24) = v25;
          WdLogEvent5_WdError(v30);
          LODWORD(v20) = 1075708679;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v50, 0LL);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v26 + 24) = v8;
        WdLogEvent5_WdError(v26);
        LODWORD(v20) = -1071774972;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdDmmEvent(v21);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40));
    return (unsigned int)v20;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
