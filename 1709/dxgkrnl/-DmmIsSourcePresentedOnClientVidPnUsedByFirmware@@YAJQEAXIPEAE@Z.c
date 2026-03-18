/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C01ED4A8
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1C00F91B0 (DxgkIsBootPrimarySource.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rsi
  DMMVIDPNTOPOLOGY *v22; // r15
  volatile signed __int32 *v23; // rbx
  __int64 i; // rbp
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v30; // rcx
  void (__fastcall ***v31)(_QWORD, __int64); // rcx
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  void (__fastcall ***v36)(_QWORD, __int64); // rcx
  int v37; // ebx
  __int64 v38; // rax
  _QWORD v39[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v40; // [rsp+70h] [rbp+18h] BYREF
  __int64 v41; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a1 + 288);
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v39, v13);
    v15 = *(_QWORD *)(v13 + 88);
    v41 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v41, v16);
    if ( v41 )
    {
      v22 = (DMMVIDPNTOPOLOGY *)(v41 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
      v23 = *(volatile signed __int32 **)(v13 + 80);
      for ( i = 0LL; ; ++i )
      {
        v40 = -1;
        v25 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v22, (_QWORD *)(unsigned int)v4, i, &v40);
        v21 = v25;
        if ( v25 < 0 )
          break;
        v28 = v40;
        if ( v40 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v23, v40);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 409) )
          {
            *a3 = 1;
LABEL_23:
            if ( v23 )
            {
              v31 = (void (__fastcall ***)(_QWORD, __int64))(v23 + 16);
              v32 = _InterlockedDecrement(v23 + 18);
              if ( v32 )
              {
                if ( v32 < 0 )
                {
                  v34 = WdLogNewEntry5_WdError(v31);
                  *(_QWORD *)(v34 + 24) = v32;
                  WdLogEvent5_WdError(v34);
                }
              }
              else if ( v31 )
              {
                (**v31)(v31, 1LL);
              }
            }
            auto_rc<DMMVIDPN const>::reset(&v41, 0LL);
            goto LABEL_39;
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v33 + 24) = v28;
          *(_QWORD *)(v33 + 32) = v23;
          WdLogEvent5_WdError(v33);
        }
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
      v35[3] = i;
      v35[4] = v4;
      v35[5] = v22;
      v35[6] = v21;
      if ( v23 )
      {
        v36 = (void (__fastcall ***)(_QWORD, __int64))(v23 + 16);
        v37 = _InterlockedDecrement(v23 + 18);
        if ( v37 )
        {
          if ( v37 < 0 )
          {
            v38 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v38 + 24) = v37;
            WdLogEvent5_WdError(v38);
          }
        }
        else if ( v36 )
        {
          (**v36)(v36, 1LL);
        }
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdWarning(v20);
      LODWORD(v21) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v41, 0LL);
    v3 = v21;
LABEL_39:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39[0] + 40LL));
    return v3;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
