/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00DB168
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1FAC (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0044BB0 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0045040 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF45C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C022333C (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v24; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  int updated; // eax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // [rsp+20h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY *v43; // [rsp+28h] [rbp-40h]
  __int64 v44; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v45; // [rsp+70h] [rbp+8h] BYREF
  int v46; // [rsp+88h] [rbp+20h]

  v46 = a4;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v26 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v27);
  }
  v9 = *((_QWORD *)a1 + 307);
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = a1;
    goto LABEL_22;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v44, v10);
    v11 = *(_QWORD *)(v10 + 88);
    v42 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v42, v12);
    if ( v42 )
    {
      v14 = (DMMVIDPNTOPOLOGY *)(v42 + 96);
      v15 = 0LL;
      v43 = (DMMVIDPNTOPOLOGY *)(v42 + 96);
      while ( 1 )
      {
        v45 = -1;
        v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v6, v15, &v45);
        v21 = v16;
        if ( v16 < 0 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
          v41[3] = v15;
          v41[4] = v6;
          v41[5] = v14;
          v41[6] = v21;
          goto LABEL_42;
        }
        if ( v45 == -1 )
          goto LABEL_19;
        Path = DMMVIDPNTOPOLOGY::FindPath(v14, v6, v45);
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v30);
        }
        v24 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v24 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v31);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v24 + 100)
               && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5) )
        {
          v40 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          WdLogEvent5_WdWarning(v40);
          goto LABEL_40;
        }
        v35 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(
                Path,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v5);
        v21 = v35;
        if ( v35 == -1071774970 )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36);
          v39[3] = v5;
          v39[4] = v6;
          v39[5] = v45;
          v39[6] = a1;
          WdLogEvent5_WdDmmEvent(v39);
LABEL_40:
          LODWORD(v21) = -1071774970;
          goto LABEL_42;
        }
        if ( v35 < 0 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v38[3] = v5;
          v38[4] = v6;
          v38[5] = v45;
          v38[6] = v21;
          WdLogEvent5_WdError(v38);
          goto LABEL_42;
        }
        *((_DWORD *)Path + 44) = v46;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path);
        LODWORD(v21) = updated;
        if ( updated < 0 )
          goto LABEL_42;
LABEL_18:
        v14 = v43;
        ++v15;
      }
    }
    v29 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    LODWORD(v21) = -1071774884;
LABEL_42:
    v4 = v21;
LABEL_19:
    auto_rc<DMMVIDPN const>::reset(&v42, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v44 + 40));
    return v4;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192373LL;
  }
}
