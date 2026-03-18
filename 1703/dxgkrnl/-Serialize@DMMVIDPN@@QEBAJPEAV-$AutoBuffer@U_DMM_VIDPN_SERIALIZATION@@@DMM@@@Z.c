/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCF34
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0044D10 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DD290 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0007480 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF3C8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r13
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v9; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // r12
  unsigned __int8 v11; // bl
  __int64 v12; // r14
  _QWORD *v13; // rdi
  unsigned int *NextTarget; // rdi
  __int64 v15; // rdx
  int NumPathsFromSource; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  unsigned __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  __int64 v31; // rbx
  _QWORD *v32; // rdi
  const struct DMMVIDEOPRESENTTARGET *v33; // rdi
  DMMVIDPNTOPOLOGY *v34; // r14
  unsigned int v35; // r12d
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  DMMVIDPNSOURCEMODE *v47; // rcx
  unsigned __int64 v48; // rsi
  DMMVIDPNTOPOLOGY *v49; // r15
  _DWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned __int64 v66; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v67; // [rsp+28h] [rbp-28h]
  __int64 v68; // [rsp+30h] [rbp-20h] BYREF
  __int64 v69; // [rsp+38h] [rbp-18h] BYREF
  __int64 v70; // [rsp+40h] [rbp-10h]
  DMMVIDEOPRESENTTARGETSET *v71; // [rsp+48h] [rbp-8h]
  unsigned int v73; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v74; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = *(DMMVIDEOPRESENTTARGETSET **)(a1 + 304);
    v67 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v11 = 0;
    v71 = v10;
    v12 = 12LL;
    v13 = (_QWORD *)*((_QWORD *)v10 + 3);
    if ( v13 == (_QWORD *)((char *)v10 + 24) )
      goto LABEL_15;
    NextTarget = (unsigned int *)(v13 - 1);
    if ( !NextTarget )
      goto LABEL_15;
    do
    {
      v15 = NextTarget[6];
      v66 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v15, &v66);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
          WdLogEvent5_WdAssertion(v21);
        }
        ++v11;
        v22 = 1LL;
        if ( v66 > 1 )
          v22 = v66;
        v12 += 432 * v22 + 48;
      }
      NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                     v10,
                                     (const struct DMMVIDEOPRESENTTARGET *const)NextTarget,
                                     v19,
                                     v20);
    }
    while ( NextTarget );
    v5 = a2;
    v23 = v11;
    if ( v11 <= 1u )
LABEL_15:
      v23 = 1;
    v24 = v12 + 4LL * (v23 - 1);
    v25 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v5, v24, a3, a4);
    v28 = v25;
    if ( v25 >= 0 )
    {
      v30 = 1;
      **(_DWORD **)(v5 + 32) = v24;
      *(_BYTE *)(*(_QWORD *)(v5 + 32) + 4LL) = v11;
      if ( v11 > 1u )
        v30 = v11;
      v31 = 4LL * (v30 - 1) + 12;
      v32 = (_QWORD *)*((_QWORD *)v10 + 3);
      if ( v32 != (_QWORD *)((char *)v10 + 24) )
      {
        v33 = (const struct DMMVIDEOPRESENTTARGET *)(v32 - 1);
        if ( v33 )
        {
          v34 = v67;
          do
          {
            v35 = *((_DWORD *)v33 + 6);
            v74 = 0LL;
            v36 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v34, v35, &v74);
            if ( v36 != -1071774919 )
            {
              if ( v36 < 0 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
                WdLogEvent5_WdAssertion(v41);
              }
              *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4LL * v4 + 8) = v31;
              v42 = 1LL;
              if ( v74 > 1 )
                v42 = v74;
              v43 = 432 * v42 + 48 + v31;
              v44 = *(_QWORD *)(v5 + 32);
              v70 = v43;
              v45 = v44 + *(unsigned int *)(v44 + 4LL * v4 + 8);
              v46 = *((_QWORD *)v33 + 13);
              if ( v46 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v46 + 96));
                v46 = *((_QWORD *)v33 + 13);
              }
              v47 = *(DMMVIDPNSOURCEMODE **)(v46 + 144);
              v68 = v46;
              if ( v47 )
                DMMVIDPNSOURCEMODE::Serialize(v47, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v45, v39, v40);
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v68, 0LL);
              v48 = 0LL;
              *(_BYTE *)(v45 + 40) = v74;
              if ( v74 )
              {
                v49 = v67;
                v50 = (_DWORD *)(v45 + 472);
                do
                {
                  v73 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v49, v35, v48, &v73) < 0 )
                  {
                    v55 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
                    WdLogEvent5_WdAssertion(v55);
                  }
                  Path = DMMVIDPNTOPOLOGY::FindPath(v49, v35, v73);
                  if ( !Path )
                  {
                    v61 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
                    WdLogEvent5_WdAssertion(v61);
                  }
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v50 - 106), v58, v59);
                  v62 = *((_QWORD *)Path + 12);
                  v63 = *(_QWORD *)(v62 + 104);
                  if ( v63 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v63 + 96));
                    v64 = *(_QWORD *)(v62 + 104);
                  }
                  else
                  {
                    v64 = 0LL;
                  }
                  v69 = v64;
                  v65 = *(_QWORD *)(v64 + 144);
                  if ( v65 )
                  {
                    *(v50 - 16) = *(_DWORD *)(v65 + 24);
                    *(_OWORD *)(v50 - 14) = *(_OWORD *)(v65 + 72);
                    *(_OWORD *)(v50 - 10) = *(_OWORD *)(v65 + 88);
                    *(_OWORD *)(v50 - 6) = *(_OWORD *)(v65 + 104);
                    *((_QWORD *)v50 - 1) = *(_QWORD *)(v65 + 120);
                    *v50 = *(_DWORD *)(v65 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v69, 0LL);
                  ++v48;
                  v50 += 108;
                }
                while ( v48 < v74 );
                v5 = a2;
                v34 = v67;
              }
              v31 = v70;
              ++v4;
            }
            v33 = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v71, v33, v39, v40);
          }
          while ( v33 );
        }
      }
      return 0LL;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v29[3] = v24;
      v29[4] = a1;
      v29[5] = v28;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v28;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
