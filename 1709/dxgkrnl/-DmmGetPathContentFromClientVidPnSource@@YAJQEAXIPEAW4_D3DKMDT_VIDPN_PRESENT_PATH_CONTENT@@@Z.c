/*
 * XREFs of ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01ECBE8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbp
  volatile signed __int32 *v22; // rbx
  DMMVIDPNTOPOLOGY *v23; // r12
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v30; // rax
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
  _QWORD v41[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v43; // [rsp+80h] [rbp+18h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
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
    v15 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v41, v13);
    v16 = *(_QWORD *)(v13 + 88);
    v44 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
      v17 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v17 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v44, v17);
    if ( v44 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
      v21 = 0LL;
      v22 = *(volatile signed __int32 **)(v13 + 80);
      v23 = (DMMVIDPNTOPOLOGY *)(v44 + 96);
      while ( 1 )
      {
        v43 = -1;
        v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, (_QWORD *)v5, v21, &v43);
        v20 = v24;
        if ( v24 < 0 )
          break;
        v27 = v43;
        if ( v43 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath(v23, v5, v43);
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v30);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, v27);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 96) )
          {
            v15 = *((_DWORD *)Path + 41);
LABEL_25:
            if ( v22 )
            {
              v33 = (void (__fastcall ***)(_QWORD, __int64))(v22 + 16);
              v34 = _InterlockedDecrement(v22 + 18);
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
            auto_rc<DMMVIDPN const>::reset(&v44, 0LL);
            *a3 = v15;
            goto LABEL_41;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v35 + 24) = v27;
          *(_QWORD *)(v35 + 32) = v22;
          WdLogEvent5_WdError(v35);
        }
        v5 = a2;
        ++v21;
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
      v37[3] = v21;
      v37[4] = v5;
      v37[5] = v23;
      v37[6] = v20;
      if ( v22 )
      {
        v38 = (void (__fastcall ***)(_QWORD, __int64))(v22 + 16);
        v39 = _InterlockedDecrement(v22 + 18);
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
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      LODWORD(v20) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v44, 0LL);
    v3 = v20;
LABEL_41:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41[0] + 40LL));
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
