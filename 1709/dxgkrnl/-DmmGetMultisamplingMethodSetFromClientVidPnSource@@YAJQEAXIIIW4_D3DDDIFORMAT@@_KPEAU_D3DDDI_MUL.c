/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C01EC880
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C01A3C30 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000B11C (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D701C (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _D3DDDIFORMAT a5,
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
  unsigned __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  DMMVIDPNSOURCEMODESET *v49; // [rsp+30h] [rbp-10h] BYREF
  __int64 v50; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v51; // [rsp+80h] [rbp+40h] BYREF
  int v52; // [rsp+84h] [rbp+44h]
  unsigned int v53; // [rsp+90h] [rbp+50h]
  unsigned int v54; // [rsp+98h] [rbp+58h]

  v54 = a4;
  v53 = a3;
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
  v15 = *((_QWORD *)this + 288);
  if ( !v15 )
  {
    v11 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v16 = *(const struct DMMVIDPN ***)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v50, *(_QWORD *)(v15 + 88));
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
        v49 = v28;
        if ( v29 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v28,
                        v53,
                        v54,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v29 + 72));
          if ( BestMatch )
          {
            v34 = DMMVIDPNSOURCEMODESET::PinMode(v28, *((_DWORD *)BestMatch + 6));
            v20 = v34;
            if ( v34 >= 0 )
            {
              v52 = -1;
              v51 = v8;
              v37 = VIDPN_MGR::FormalizeVidPnChange(
                      (__int64)v16,
                      (D3DKMDT_HVIDPN)(v22 & -(__int64)(v22 != -88LL)),
                      3,
                      1,
                      &v51);
              v41 = v37;
              if ( v37 >= 0 )
              {
                v44 = *(_QWORD *)(v25 + 168) >> 3;
                if ( v10 )
                  *v10 = 8 * v44;
                v45 = a6;
                if ( a6 >= v44 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v25 + 160), 8 * v44);
                  LODWORD(v20) = 0;
                }
                else
                {
                  v46 = WdLogNewEntry5_WdDmmEvent(v39);
                  *(_QWORD *)(v46 + 24) = v45;
                  *(_QWORD *)(v46 + 32) = v44;
                  WdLogEvent5_WdDmmEvent(v46);
                  if ( !v10 )
                  {
                    v48 = WdLogNewEntry5_WdAssertion(v47);
                    WdLogEvent5_WdAssertion(v48);
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
                  v43[3] = v53;
                  v43[4] = v54;
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
              v36[4] = v53;
              v36[5] = v54;
              v36[6] = a5;
              v36[3] = v8;
              v36[7] = v20;
              WdLogEvent5_WdError(v36);
            }
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
            v33[3] = v53;
            v33[4] = v54;
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
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v49, 0LL);
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
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40));
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
