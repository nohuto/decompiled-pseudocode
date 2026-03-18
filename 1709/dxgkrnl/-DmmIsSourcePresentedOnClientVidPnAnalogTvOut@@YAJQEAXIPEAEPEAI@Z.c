/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C01ED218
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  DMMVIDPNTOPOLOGY *v24; // r15
  volatile signed __int32 *v25; // rbx
  __int64 i; // rbp
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v32; // rcx
  void (__fastcall ***v33)(_QWORD, __int64); // rcx
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  void (__fastcall ***v38)(_QWORD, __int64); // rcx
  int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v42[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v43; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a1 + 288);
  if ( !v14 )
  {
    v11 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v42, v15);
    v17 = *(_QWORD *)(v15 + 88);
    v41 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v41, v18);
    if ( v41 )
    {
      v24 = (DMMVIDPNTOPOLOGY *)(v41 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
      v25 = *(volatile signed __int32 **)(v15 + 80);
      for ( i = 0LL; ; ++i )
      {
        v43 = -1;
        v27 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v24, (_QWORD *)(unsigned int)v5, i, &v43);
        v23 = v27;
        if ( v27 < 0 )
          break;
        v30 = v43;
        if ( v43 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v25, v43);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 96) )
          {
            *a3 = 1;
            *a4 = v30;
LABEL_23:
            if ( v25 )
            {
              v33 = (void (__fastcall ***)(_QWORD, __int64))(v25 + 16);
              v34 = _InterlockedDecrement(v25 + 18);
              if ( v34 )
              {
                if ( v34 < 0 )
                {
                  v36 = WdLogNewEntry5_WdError(v33);
                  *(_QWORD *)(v36 + 24) = v34;
                  WdLogEvent5_WdError(v36);
                }
              }
              else if ( v33 )
              {
                (**v33)(v33, 1LL);
              }
            }
            auto_rc<DMMVIDPN const>::reset(&v41, 0LL);
            goto LABEL_39;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v35 + 24) = v30;
          *(_QWORD *)(v35 + 32) = v25;
          WdLogEvent5_WdError(v35);
        }
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28);
      v37[3] = i;
      v37[4] = v5;
      v37[5] = v24;
      v37[6] = v23;
      if ( v25 )
      {
        v38 = (void (__fastcall ***)(_QWORD, __int64))(v25 + 16);
        v39 = _InterlockedDecrement(v25 + 18);
        if ( v39 )
        {
          if ( v39 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v38);
            *(_QWORD *)(v40 + 24) = v39;
            WdLogEvent5_WdError(v40);
          }
        }
        else if ( v38 )
        {
          (**v38)(v38, 1LL);
        }
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdWarning(v22);
      LODWORD(v23) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v41, 0LL);
    v4 = v23;
LABEL_39:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v42[0] + 40LL));
    return v4;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
