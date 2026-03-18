/*
 * XREFs of DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00A2884
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7408 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0009750 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000977C (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00DFA90 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01DD5E4 (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DMMVIDPNTOPOLOGY *v18; // rbp
  unsigned __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int updated; // eax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // [rsp+20h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY *v55; // [rsp+28h] [rbp-40h]
  __int64 v56; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v57; // [rsp+70h] [rbp+8h] BYREF
  int v58; // [rsp+88h] [rbp+20h]

  v58 = a4;
  v4 = 0;
  v5 = a3;
  v6 = (unsigned int)a2;
  if ( !a1 )
  {
    v36 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v36 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v36);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v37);
  }
  v12 = *((_QWORD *)a1 + 285);
  if ( !v12 )
  {
    v36 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v36 + 24) = a1;
    goto LABEL_23;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v56, v13, v10, v11);
    v14 = *(_QWORD *)(v13 + 88);
    v54 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v54, v15);
    if ( v54 )
    {
      v18 = (DMMVIDPNTOPOLOGY *)(v54 + 96);
      v19 = 0LL;
      v55 = (DMMVIDPNTOPOLOGY *)(v54 + 96);
      while ( 1 )
      {
        v57 = -1;
        v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, v6, v19, &v57);
        v25 = v20;
        if ( v20 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
          v53[3] = v19;
          v53[4] = v6;
          v53[5] = v18;
          v53[6] = v25;
          goto LABEL_43;
        }
        if ( v57 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v54, 0LL);
          goto LABEL_20;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v18, v6, v57);
        if ( !Path )
        {
          v40 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
          WdLogEvent5_WdAssertion(v40);
        }
        v31 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v31 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
          WdLogEvent5_WdAssertion(v41);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v31 + 96) && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, 2LL) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, (unsigned int)v5) )
        {
          v52 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
          WdLogEvent5_WdWarning(v52);
          goto LABEL_41;
        }
        v46 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, (unsigned int)v5);
        v25 = v46;
        if ( v46 == -1071774970 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v51[3] = v5;
          v51[4] = v6;
          v51[5] = v57;
          v51[6] = a1;
          WdLogEvent5_WdDmmEvent(v51);
LABEL_41:
          LODWORD(v25) = -1071774970;
          goto LABEL_43;
        }
        if ( v46 < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
          v50[3] = v5;
          v50[4] = v6;
          v50[5] = v57;
          v50[6] = v25;
          WdLogEvent5_WdError(v50);
          goto LABEL_43;
        }
        *((_DWORD *)Path + 44) = v58;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path);
        LODWORD(v25) = updated;
        if ( updated < 0 )
          goto LABEL_43;
LABEL_18:
        v18 = v55;
        ++v19;
      }
    }
    v39 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v39 + 24) = a1;
    WdLogEvent5_WdError(v39);
    LODWORD(v25) = -1071774884;
LABEL_43:
    auto_rc<DMMVIDPN const>::reset(&v54, 0LL);
    v4 = v25;
LABEL_20:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v56 + 40), v32, v33, v34);
    return v4;
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v38 + 24) = a1;
    WdLogEvent5_WdError(v38);
    return 3223192373LL;
  }
}
