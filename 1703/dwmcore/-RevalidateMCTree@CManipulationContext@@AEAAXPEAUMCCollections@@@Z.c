/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801944C4
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180193E34 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18004D330 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180135174 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18013F5F4 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18015C2FC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18018A1FC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180192AE8 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x180192E28 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180192E78 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180193894 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180194D94 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180195038 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  unsigned __int8 v2; // r12
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rcx
  char *v11; // r8
  _QWORD *v12; // r15
  int Key; // eax
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int v16; // r13d
  struct CInteraction *v17; // rbx
  bool *v18; // rdx
  struct CInteraction *v19; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  __int64 v21; // rax
  struct CInteraction *i; // r14
  const GUID *v23; // r8
  const GUID *v24; // r9
  const struct CVisual *v25; // rcx
  __int64 v26; // rax
  struct CInteraction *v27; // r14
  const GUID *v28; // r8
  const GUID *v29; // r9
  const GUID *v30; // r8
  const GUID *v31; // r9
  struct MCCollections *v32; // rbx
  __int64 v33; // rax
  struct CVisual *v34; // rcx
  bool *v35; // rdx
  __int64 v36; // rax
  const struct CVisual *v37; // rcx
  struct CInteraction *v38; // r15
  struct CInteraction *v39; // r14
  int v40; // edx
  const GUID *v41; // r8
  const GUID *v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // edx
  __int64 v50; // r8
  __int64 j; // rcx
  struct CVisualTree *v52; // [rsp+30h] [rbp-D0h] BYREF
  struct CInteraction *v53; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  unsigned int v55; // [rsp+44h] [rbp-BCh] BYREF
  CManipulationContext *v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  struct MCCollections *v59; // [rsp+60h] [rbp-A0h]
  HMONITOR v60; // [rsp+68h] [rbp-98h] BYREF
  struct CInteraction *v61; // [rsp+70h] [rbp-90h] BYREF
  struct CInteraction *v62; // [rsp+78h] [rbp-88h] BYREF
  struct CInteraction *v63; // [rsp+80h] [rbp-80h] BYREF
  struct CInteraction *v64; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR v65; // [rsp+90h] [rbp-70h] BYREF
  CManipulationContext **v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+BCh] [rbp-44h]
  struct CInteraction **v69; // [rsp+C0h] [rbp-40h]
  int v70; // [rsp+C8h] [rbp-38h]
  int v71; // [rsp+CCh] [rbp-34h]
  struct CInteraction **v72; // [rsp+D0h] [rbp-30h]
  int v73; // [rsp+D8h] [rbp-28h]
  int v74; // [rsp+DCh] [rbp-24h]
  struct CInteraction **v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+ECh] [rbp-14h]
  struct CInteraction **v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F8h] [rbp-8h]
  int v80; // [rsp+FCh] [rbp-4h]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+110h] [rbp+10h] BYREF
  struct CVisualTree **v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  struct CInteraction **v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  CManipulationContext **v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  struct CVisualTree **v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  struct CInteraction **v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR v93; // [rsp+1C0h] [rbp+C0h] BYREF
  struct CVisualTree **v94; // [rsp+1E0h] [rbp+E0h]
  __int64 v95; // [rsp+1E8h] [rbp+E8h]
  struct CInteraction **v96; // [rsp+1F0h] [rbp+F0h]
  __int64 v97; // [rsp+1F8h] [rbp+F8h]

  v2 = 0;
  v59 = a2;
  v5 = 0;
  if ( *((int *)this + 20) > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 9));
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 224);
          *(_QWORD *)(v7 + 216) = v8;
          v7 = v8;
        }
        while ( v8 );
      }
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < *((_DWORD *)this + 20) );
  }
  v9 = 0;
  v54 = 0;
  if ( *((int *)this + 20) > 0 )
  {
    v10 = 0LL;
    v58 = 0LL;
    v57 = 0LL;
    v11 = (char *)a2 + 40;
    v12 = (_QWORD *)((char *)this + 64);
    while ( 1 )
    {
      LODWORD(v53) = *(_DWORD *)(v10 + *v12);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v11,
              (int *)&v53);
      if ( Key == -1 )
        v16 = 2;
      else
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 4LL * Key);
      v17 = *(struct CInteraction **)(v14 + *((_QWORD *)this + 9));
      v64 = v17;
      v52 = v17;
      Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v52);
      v19 = (struct CInteraction *)*((_QWORD *)v17 + 26);
      ClosestInteractionAncestor = v17;
      if ( v19 )
      {
        do
        {
          ClosestInteractionAncestor = v19;
          v19 = (struct CInteraction *)*((_QWORD *)v19 + 26);
        }
        while ( v19 );
        v52 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v52);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v9,
          &v53,
          &v52);
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 8LL))(ClosestInteractionAncestor);
      }
      v21 = *((_QWORD *)ClosestInteractionAncestor + 15);
      if ( !v21 || !*(_QWORD *)(v21 + 8) )
      {
        v52 = 0LL;
        ClosestInteractionAncestor = 0LL;
        Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v52);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v9,
          &v53,
          &v52);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(v25, v18) )
      {
        if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
        {
          v52 = this;
          v89 = &v52;
          v91 = &v53;
          v90 = 8LL;
          v53 = i;
          v92 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F99FC, v23, v24, 4u, &pData);
        }
        *((_BYTE *)i + 200) |= 0x40u;
        v25 = 0LL;
        v26 = *((_QWORD *)i + 15);
        if ( v26 )
          v25 = *(const struct CVisual **)(v26 + 8);
      }
      v27 = v17;
      do
      {
        if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
        {
          v52 = this;
          v94 = &v52;
          v96 = &v53;
          v95 = 8LL;
          v53 = v27;
          v97 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F9A4E, v28, v29, 4u, &v93);
        }
        *((_BYTE *)v27 + 200) |= 0x80u;
        v27 = (struct CInteraction *)*((_QWORD *)v27 + 27);
      }
      while ( v27 );
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v52 = this;
        v82 = &v52;
        v84 = &v53;
        v86 = &v56;
        v83 = 8LL;
        v53 = ClosestInteractionAncestor;
        v85 = 8LL;
        v56 = v17;
        v87 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F9919, v30, v31, 5u, &v81);
      }
      if ( ClosestInteractionAncestor != v17 )
        CManipulationContext::CleanStaleFork(this, v16, v17);
      if ( ClosestInteractionAncestor )
        break;
LABEL_64:
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v17 + 8LL))(v17);
      v2 = 0;
      v10 = v57 + 4;
      v9 = v54 + 1;
      v54 = v9;
      v57 += 4LL;
      v58 += 8LL;
      v11 = (char *)v59 + 40;
      if ( (signed int)v9 >= *((_DWORD *)this + 20) )
        goto LABEL_65;
    }
    v32 = v59;
    while ( 1 )
    {
      v52 = 0LL;
      CManipulationContext::FindMonitorAndWorkspace(v32, ClosestInteractionAncestor, &v60, &v55);
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v52);
      CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(*((CComposition **)this + 6), v60, v55, &v52);
      if ( v52 )
      {
        v33 = *((_QWORD *)ClosestInteractionAncestor + 15);
        v34 = 0LL;
        if ( v33 )
          v34 = *(struct CVisual **)(v33 + 8);
        CManipulationContext::OnVisualPropertyChange(v34, v52);
      }
      v2 |= (*((_BYTE *)ClosestInteractionAncestor + 200) & 0x20) != 0;
      CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor, v2);
      v36 = *((_QWORD *)ClosestInteractionAncestor + 15);
      v37 = 0LL;
      v38 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 27);
      v39 = ClosestInteractionAncestor;
      if ( v36 )
        v37 = *(const struct CVisual **)(v36 + 8);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v37, v35);
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v68 = 0;
        v71 = 0;
        v74 = 0;
        v77 = 0;
        v80 = 0;
        v66 = &v56;
        v69 = &v61;
        v72 = &v62;
        v75 = &v63;
        LODWORD(v53) = v2;
        v78 = &v53;
        v56 = this;
        v67 = v40 + 6;
        v61 = ClosestInteractionAncestor;
        v70 = v40 + 6;
        v62 = v38;
        v73 = v40 + 6;
        v63 = v39;
        v76 = v40 + 6;
        v79 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F997B, v41, v42, 7u, &v65);
      }
      if ( v38 != ClosestInteractionAncestor )
      {
        v43 = *((_QWORD *)v39 + 29);
        if ( v43 )
          *(_QWORD *)(v43 + 240) = *((_QWORD *)v39 + 30);
        v44 = *((_QWORD *)v39 + 30);
        if ( v44 )
          *(_QWORD *)(v44 + 232) = *((_QWORD *)v39 + 29);
        v45 = *((_QWORD *)v39 + 28);
        if ( v45 && *(struct CInteraction **)(v45 + 248) == v39 )
          *(_QWORD *)(v45 + 248) = *((_QWORD *)v39 + 29);
        *((_QWORD *)v39 + 30) = 0LL;
        *((_QWORD *)v39 + 29) = 0LL;
        *((_QWORD *)v39 + 28) = 0LL;
        CManipulationContext::CleanStaleFork(this, v16, v38);
        if ( !ClosestInteractionAncestor )
          goto LABEL_62;
        *((_QWORD *)v39 + 29) = *((_QWORD *)ClosestInteractionAncestor + 31);
        v46 = *((_QWORD *)ClosestInteractionAncestor + 31);
        if ( v46 )
          *(_QWORD *)(v46 + 240) = v39;
        *((_QWORD *)ClosestInteractionAncestor + 31) = v39;
        *((_QWORD *)v39 + 28) = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && *((_BYTE *)ClosestInteractionAncestor + 200) < 0x80u )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v47) = 1;
          LOBYTE(v48) = *((_BYTE *)this + 28) & 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)ClosestInteractionAncestor
                                                                                  + 40LL))(
            ClosestInteractionAncestor,
            v47,
            v48,
            v16);
        }
        ++*((_DWORD *)ClosestInteractionAncestor + v16 + 63);
      }
LABEL_62:
      *((_BYTE *)v39 + 200) &= 0x3Fu;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v52);
      if ( !ClosestInteractionAncestor )
      {
        v17 = v64;
        v12 = (_QWORD *)((char *)this + 64);
        goto LABEL_64;
      }
    }
  }
LABEL_65:
  v49 = 0;
  if ( *((int *)this + 20) > 0 )
  {
    v50 = 0LL;
    do
    {
      for ( j = *(_QWORD *)(v50 + *((_QWORD *)this + 9)); j; j = *(_QWORD *)(j + 224) )
        *(_QWORD *)(j + 216) = 0LL;
      ++v49;
      v50 += 8LL;
    }
    while ( v49 < *((_DWORD *)this + 20) );
  }
}
