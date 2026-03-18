/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00E223C
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACAF4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005C8C (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0005CB8 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00A5868 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01F5FDC (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DMMVIDPNTOPOLOGY *v14; // rbp
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  int updated; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+20h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY *v41; // [rsp+28h] [rbp-40h]
  __int64 v42; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v43; // [rsp+70h] [rbp+8h] BYREF
  int v44; // [rsp+88h] [rbp+20h]

  v44 = a4;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v24);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v25);
  }
  v9 = *((_QWORD *)a1 + 288);
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v24 + 24) = a1;
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v42, v10);
    v11 = *(_QWORD *)(v10 + 88);
    v40 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v12);
    if ( v40 )
    {
      v14 = (DMMVIDPNTOPOLOGY *)(v40 + 96);
      v15 = 0LL;
      v41 = (DMMVIDPNTOPOLOGY *)(v40 + 96);
      while ( 1 )
      {
        v43 = -1;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, (_QWORD *)(unsigned int)v6, v15, &v43);
        v19 = v16;
        if ( v16 < 0 )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
          v39[3] = v15;
          v39[4] = v6;
          v39[5] = v14;
          v39[6] = v19;
          goto LABEL_43;
        }
        if ( v43 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
          goto LABEL_20;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v14, v6, v43);
        if ( !Path )
        {
          v28 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v28);
        }
        v22 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v22 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v29);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v22 + 96)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          v38 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          WdLogEvent5_WdWarning(v38);
          goto LABEL_41;
        }
        v33 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        v19 = v33;
        if ( v33 == -1071774970 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34);
          v37[3] = v5;
          v37[4] = v6;
          v37[5] = v43;
          v37[6] = a1;
          WdLogEvent5_WdDmmEvent(v37);
LABEL_41:
          LODWORD(v19) = -1071774970;
          goto LABEL_43;
        }
        if ( v33 < 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v34);
          v36[3] = v5;
          v36[4] = v6;
          v36[5] = v43;
          v36[6] = v19;
          WdLogEvent5_WdError(v36);
          goto LABEL_43;
        }
        *((_DWORD *)Path + 44) = v44;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path);
        LODWORD(v19) = updated;
        if ( updated < 0 )
          goto LABEL_43;
LABEL_18:
        v14 = v41;
        ++v15;
      }
    }
    v27 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v27 + 24) = a1;
    WdLogEvent5_WdError(v27);
    LODWORD(v19) = -1071774884;
LABEL_43:
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
    v4 = v19;
LABEL_20:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v42 + 40));
    return v4;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192373LL;
  }
}
