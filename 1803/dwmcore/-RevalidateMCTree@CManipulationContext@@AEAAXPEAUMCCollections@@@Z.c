/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801DBF24
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801DB890 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x180026454 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18014A2A8 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1801CE944 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1801DA1F8 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801DA4EC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x1801DA594 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801DA5E4 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801DB318 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801DC828 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801DCAC4 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // eax
  unsigned __int8 v3; // r12
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  char *v13; // r8
  int Key; // eax
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // r15d
  __int64 v18; // rbx
  struct CVisualTree *v19; // rbx
  bool *v20; // rdx
  struct CInteraction *v21; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  __int64 v23; // rax
  struct CInteraction *i; // rsi
  const struct CVisual *v25; // rcx
  __int64 v26; // rax
  struct CVisualTree *j; // rsi
  struct MCCollections *v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rax
  struct CVisual *v31; // rcx
  bool *v32; // rdx
  __int64 v33; // rax
  const struct CVisual *v34; // rcx
  struct CInteraction *v35; // r15
  struct CInteraction *v36; // rsi
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct CInteraction *v41; // r8
  unsigned int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // r8
  __int64 k; // rcx
  struct CVisualTree *v50; // [rsp+30h] [rbp-D0h] BYREF
  struct CInteraction *v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  unsigned int v54; // [rsp+48h] [rbp-B8h] BYREF
  CManipulationContext *v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A8h]
  __int64 v57; // [rsp+60h] [rbp-A0h]
  struct MCCollections *v58; // [rsp+68h] [rbp-98h]
  HMONITOR v59; // [rsp+70h] [rbp-90h] BYREF
  struct CInteraction *v60; // [rsp+78h] [rbp-88h] BYREF
  struct CInteraction *v61; // [rsp+80h] [rbp-80h] BYREF
  struct CInteraction *v62; // [rsp+88h] [rbp-78h] BYREF
  struct CVisualTree *v63; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct CVisualTree **v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  struct CInteraction **v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  CManipulationContext **v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  struct CInteraction **v71; // [rsp+F0h] [rbp-10h]
  int v72; // [rsp+F8h] [rbp-8h]
  int v73; // [rsp+FCh] [rbp-4h]
  struct CInteraction **v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+10Ch] [rbp+Ch]

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  v58 = a2;
  v6 = 0;
  if ( v2 > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v7 + *((_QWORD *)this + 9));
      if ( v8 )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 208);
          *(_QWORD *)(v8 + 200) = v9;
          v8 = v9;
        }
        while ( v9 );
      }
      v2 = *((_DWORD *)this + 20);
      ++v6;
      v7 += 8LL;
    }
    while ( v6 < v2 );
  }
  v53 = 0;
  v10 = 0;
  if ( v2 > 0 )
  {
    v11 = 0LL;
    v57 = 0LL;
    v56 = 0LL;
    v12 = (_QWORD *)((char *)this + 64);
    v13 = (char *)a2 + 40;
    while ( 1 )
    {
      LODWORD(v51) = *(_DWORD *)(v11 + *v12);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v13,
              (int *)&v51);
      if ( Key == -1 )
        v17 = 2;
      else
        v17 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL * Key);
      v18 = *((_QWORD *)this + 9);
      v52 = v17;
      v19 = *(struct CVisualTree **)(v15 + v18);
      v63 = v19;
      v50 = v19;
      Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v50);
      v21 = (struct CInteraction *)*((_QWORD *)v19 + 24);
      ClosestInteractionAncestor = v19;
      if ( v21 )
      {
        do
        {
          ClosestInteractionAncestor = v21;
          v21 = (struct CInteraction *)*((_QWORD *)v21 + 24);
        }
        while ( v21 );
        v50 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v50);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v10,
          &v51,
          &v50);
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 8LL))(ClosestInteractionAncestor);
      }
      v23 = *((_QWORD *)ClosestInteractionAncestor + 13);
      if ( !v23 || !*(_QWORD *)(v23 + 8) )
      {
        v50 = 0LL;
        ClosestInteractionAncestor = 0LL;
        Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v50);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v10,
          &v51,
          &v50);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(v25, v20) )
      {
        if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
        {
          v50 = this;
          v65 = &v50;
          v67 = &v51;
          v66 = 8LL;
          v51 = i;
          v68 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AB8F7, 0LL, 0LL, 4u, &pData);
        }
        *((_BYTE *)i + 184) |= 0x20u;
        v25 = 0LL;
        v26 = *((_QWORD *)i + 13);
        if ( v26 )
          v25 = *(const struct CVisual **)(v26 + 8);
      }
      for ( j = v19; j; j = (struct CVisualTree *)*((_QWORD *)j + 25) )
      {
        if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
        {
          v50 = this;
          v65 = &v50;
          v67 = &v51;
          v66 = 8LL;
          v51 = j;
          v68 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AB74D, 0LL, 0LL, 4u, &pData);
        }
        *((_BYTE *)j + 184) |= 0x40u;
      }
      if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
      {
        v50 = this;
        v65 = &v50;
        v67 = &v51;
        v69 = &v55;
        v66 = 8LL;
        v51 = ClosestInteractionAncestor;
        v68 = 8LL;
        v55 = v19;
        v70 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AB6EB, 0LL, 0LL, 5u, &pData);
      }
      if ( ClosestInteractionAncestor != v19 )
        CManipulationContext::CleanStaleFork((__int64)this, v17, v19);
      if ( ClosestInteractionAncestor )
        break;
LABEL_67:
      v3 = 0;
      if ( v19 )
        (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v19 + 8LL))(v19);
      v12 = (_QWORD *)((char *)this + 64);
      v11 = v56 + 4;
      v2 = *((_DWORD *)this + 20);
      v53 = ++v10;
      v56 += 4LL;
      v57 += 8LL;
      v13 = (char *)v58 + 40;
      if ( (int)v10 >= v2 )
        goto LABEL_70;
    }
    v28 = v58;
    v29 = v17;
    while ( 1 )
    {
      v50 = 0LL;
      CManipulationContext::FindMonitorAndWorkspace(v28, ClosestInteractionAncestor, &v59, &v54);
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v50);
      CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(*((CComposition **)this + 6), v59, v54, &v50);
      if ( v50 )
      {
        v30 = *((_QWORD *)ClosestInteractionAncestor + 13);
        v31 = 0LL;
        if ( v30 )
          v31 = *(struct CVisual **)(v30 + 8);
        CManipulationContext::OnVisualPropertyChange(v31, v50);
      }
      v3 |= *((_DWORD *)ClosestInteractionAncestor + 47) == 2;
      CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor, v3);
      v33 = *((_QWORD *)ClosestInteractionAncestor + 13);
      v34 = 0LL;
      v35 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 25);
      v36 = ClosestInteractionAncestor;
      if ( v33 )
        v34 = *(const struct CVisual **)(v33 + 8);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v34, v32);
      if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
      {
        v73 = 0;
        v76 = 0;
        v65 = &v55;
        v67 = &v60;
        v69 = &v61;
        v71 = &v62;
        LODWORD(v51) = v3;
        v74 = &v51;
        v55 = this;
        v66 = (unsigned int)(v37 + 6);
        v60 = ClosestInteractionAncestor;
        v68 = v66;
        v61 = v35;
        v70 = v66;
        v62 = v36;
        v72 = v37 + 6;
        v75 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AB7FF, 0LL, 0LL, 7u, &pData);
      }
      if ( v35 == ClosestInteractionAncestor )
      {
        v42 = v52;
      }
      else
      {
        v38 = *((_QWORD *)v36 + 27);
        if ( v38 )
          *(_QWORD *)(v38 + 224) = *((_QWORD *)v36 + 28);
        v39 = *((_QWORD *)v36 + 28);
        if ( v39 )
          *(_QWORD *)(v39 + 216) = *((_QWORD *)v36 + 27);
        v40 = *((_QWORD *)v36 + 26);
        if ( v40 && *(struct CInteraction **)(v40 + 232) == v36 )
          *(_QWORD *)(v40 + 232) = *((_QWORD *)v36 + 27);
        *((_QWORD *)v36 + 28) = 0LL;
        v41 = v35;
        v42 = v52;
        *((_QWORD *)v36 + 27) = 0LL;
        *((_QWORD *)v36 + 26) = 0LL;
        CManipulationContext::CleanStaleFork((__int64)this, v42, v41);
        if ( !ClosestInteractionAncestor )
          goto LABEL_65;
        *((_QWORD *)v36 + 27) = *((_QWORD *)ClosestInteractionAncestor + 29);
        v43 = *((_QWORD *)ClosestInteractionAncestor + 29);
        if ( v43 )
          *(_QWORD *)(v43 + 224) = v36;
        *((_QWORD *)ClosestInteractionAncestor + 29) = v36;
        *((_QWORD *)v36 + 26) = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && (*((_BYTE *)ClosestInteractionAncestor + 184) & 0x40) == 0 )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v44) = 1;
          LOBYTE(v45) = *((_BYTE *)this + 28) & 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)ClosestInteractionAncestor
                                                                                  + 40LL))(
            ClosestInteractionAncestor,
            v44,
            v45,
            v42);
        }
        v46 = v29 - 1;
        if ( v42 - 1 >= 6 )
          v46 = 0LL;
        ++*((_DWORD *)ClosestInteractionAncestor + v46 + 60);
      }
LABEL_65:
      *((_BYTE *)v36 + 184) &= 0x9Fu;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v50);
      if ( !ClosestInteractionAncestor )
      {
        v19 = v63;
        v10 = v53;
        goto LABEL_67;
      }
    }
  }
LABEL_70:
  v47 = 0;
  if ( v2 > 0 )
  {
    v48 = 0LL;
    do
    {
      for ( k = *(_QWORD *)(v48 + *((_QWORD *)this + 9)); k; k = *(_QWORD *)(k + 208) )
        *(_QWORD *)(k + 200) = 0LL;
      ++v47;
      v48 += 8LL;
    }
    while ( v47 < *((_DWORD *)this + 20) );
  }
}
