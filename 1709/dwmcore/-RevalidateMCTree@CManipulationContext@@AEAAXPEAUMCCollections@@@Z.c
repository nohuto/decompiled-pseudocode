/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2D5C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x180127FDC (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180195ECC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x1801A16D0 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801A199C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x1801A1A44 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A1A94 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801A3CA8 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801A3FF8 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
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
  struct CVisualTree *v17; // rbx
  bool *v18; // rdx
  struct CInteraction *v19; // rax
  struct CInteraction *ClosestInteractionAncestor; // rdi
  __int64 v21; // rax
  struct CInteraction *i; // r14
  const GUID *v23; // r8
  const GUID *v24; // r9
  const struct CVisual *v25; // rcx
  __int64 v26; // rax
  struct CVisualTree *v27; // r14
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
  const GUID *v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // r8
  __int64 j; // rcx
  struct CVisualTree *v50; // [rsp+30h] [rbp-D0h] BYREF
  struct CInteraction *v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh] BYREF
  CManipulationContext *v54; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  struct MCCollections *v57; // [rsp+60h] [rbp-A0h]
  HMONITOR v58; // [rsp+68h] [rbp-98h] BYREF
  struct CInteraction *v59; // [rsp+70h] [rbp-90h] BYREF
  struct CInteraction *v60; // [rsp+78h] [rbp-88h] BYREF
  struct CInteraction *v61; // [rsp+80h] [rbp-80h] BYREF
  struct CVisualTree *v62; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct CVisualTree **v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  struct CInteraction **v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  CManipulationContext **v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  struct CInteraction **v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+E8h] [rbp-18h]
  struct CInteraction **v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]

  v2 = 0;
  v57 = a2;
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
          v8 = *(_QWORD *)(v7 + 240);
          *(_QWORD *)(v7 + 232) = v8;
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
  v52 = 0;
  if ( *((int *)this + 20) > 0 )
  {
    v10 = 0LL;
    v56 = 0LL;
    v55 = 0LL;
    v11 = (char *)a2 + 40;
    v12 = (_QWORD *)((char *)this + 64);
    while ( 1 )
    {
      LODWORD(v51) = *(_DWORD *)(v10 + *v12);
      Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
              (__int64)v11,
              (int *)&v51);
      if ( Key == -1 )
        v16 = 2;
      else
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 48) + 4LL * Key);
      v17 = *(struct CVisualTree **)(v14 + *((_QWORD *)this + 9));
      v62 = v17;
      v50 = v17;
      Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v50);
      v19 = (struct CInteraction *)*((_QWORD *)v17 + 28);
      ClosestInteractionAncestor = v17;
      if ( v19 )
      {
        do
        {
          ClosestInteractionAncestor = v19;
          v19 = (struct CInteraction *)*((_QWORD *)v19 + 28);
        }
        while ( v19 );
        v50 = ClosestInteractionAncestor;
        Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v50);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v9,
          &v51,
          &v50);
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 8LL))(ClosestInteractionAncestor);
      }
      v21 = *((_QWORD *)ClosestInteractionAncestor + 17);
      if ( !v21 || !*(_QWORD *)(v21 + 8) )
      {
        v50 = 0LL;
        ClosestInteractionAncestor = 0LL;
        Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v50);
        CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
          v12,
          v9,
          &v51,
          &v50);
      }
      for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(v25, v18) )
      {
        if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
        {
          v50 = this;
          v64 = &v50;
          v66 = &v51;
          v65 = 8LL;
          v51 = i;
          v67 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802162E0, v23, v24, 4u, &pData);
        }
        *((_BYTE *)i + 216) |= 0x40u;
        v25 = 0LL;
        v26 = *((_QWORD *)i + 17);
        if ( v26 )
          v25 = *(const struct CVisual **)(v26 + 8);
      }
      v27 = v17;
      do
      {
        if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
        {
          v50 = this;
          v64 = &v50;
          v66 = &v51;
          v65 = 8LL;
          v51 = v27;
          v67 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021628F, v28, v29, 4u, &pData);
        }
        *((_BYTE *)v27 + 216) |= 0x80u;
        v27 = (struct CVisualTree *)*((_QWORD *)v27 + 29);
      }
      while ( v27 );
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
      {
        v50 = this;
        v64 = &v50;
        v66 = &v51;
        v68 = &v54;
        v65 = 8LL;
        v51 = ClosestInteractionAncestor;
        v67 = 8LL;
        v54 = v17;
        v69 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802163B3, v30, v31, 5u, &pData);
      }
      if ( ClosestInteractionAncestor != v17 )
        CManipulationContext::CleanStaleFork(this, v16, v17);
      if ( ClosestInteractionAncestor )
        break;
LABEL_64:
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v17 + 8LL))(v17);
      v2 = 0;
      v10 = v55 + 4;
      v9 = v52 + 1;
      v52 = v9;
      v55 += 4LL;
      v56 += 8LL;
      v11 = (char *)v57 + 40;
      if ( (signed int)v9 >= *((_DWORD *)this + 20) )
        goto LABEL_65;
    }
    v32 = v57;
    while ( 1 )
    {
      v50 = 0LL;
      CManipulationContext::FindMonitorAndWorkspace(v32, ClosestInteractionAncestor, &v58, &v53);
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v50);
      CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(*((CComposition **)this + 6), v58, v53, &v50);
      if ( v50 )
      {
        v33 = *((_QWORD *)ClosestInteractionAncestor + 17);
        v34 = 0LL;
        if ( v33 )
          v34 = *(struct CVisual **)(v33 + 8);
        CManipulationContext::OnVisualPropertyChange(v34, v50);
      }
      v2 |= (*((_BYTE *)ClosestInteractionAncestor + 216) & 0x20) != 0;
      CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor, v2);
      v36 = *((_QWORD *)ClosestInteractionAncestor + 17);
      v37 = 0LL;
      v38 = (struct CInteraction *)*((_QWORD *)ClosestInteractionAncestor + 29);
      v39 = ClosestInteractionAncestor;
      if ( v36 )
        v37 = *(const struct CVisual **)(v36 + 8);
      ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v37, v35);
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
      {
        v54 = this;
        v64 = &v54;
        v66 = &v59;
        v68 = &v60;
        v70 = &v61;
        LODWORD(v51) = v2;
        v72 = &v51;
        v65 = 8LL;
        v59 = ClosestInteractionAncestor;
        v67 = 8LL;
        v60 = v38;
        v69 = 8LL;
        v61 = v39;
        v71 = 8LL;
        v73 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180216332, 0LL, v40, 7u, &pData);
      }
      if ( v38 != ClosestInteractionAncestor )
      {
        v41 = *((_QWORD *)v39 + 31);
        if ( v41 )
          *(_QWORD *)(v41 + 256) = *((_QWORD *)v39 + 32);
        v42 = *((_QWORD *)v39 + 32);
        if ( v42 )
          *(_QWORD *)(v42 + 248) = *((_QWORD *)v39 + 31);
        v43 = *((_QWORD *)v39 + 30);
        if ( v43 && *(struct CInteraction **)(v43 + 264) == v39 )
          *(_QWORD *)(v43 + 264) = *((_QWORD *)v39 + 31);
        *((_QWORD *)v39 + 32) = 0LL;
        *((_QWORD *)v39 + 31) = 0LL;
        *((_QWORD *)v39 + 30) = 0LL;
        CManipulationContext::CleanStaleFork(this, v16, v38);
        if ( !ClosestInteractionAncestor )
          goto LABEL_62;
        *((_QWORD *)v39 + 31) = *((_QWORD *)ClosestInteractionAncestor + 33);
        v44 = *((_QWORD *)ClosestInteractionAncestor + 33);
        if ( v44 )
          *(_QWORD *)(v44 + 256) = v39;
        *((_QWORD *)ClosestInteractionAncestor + 33) = v39;
        *((_QWORD *)v39 + 30) = ClosestInteractionAncestor;
      }
      if ( ClosestInteractionAncestor && *((char *)ClosestInteractionAncestor + 216) >= 0 )
      {
        if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
        {
          LOBYTE(v45) = 1;
          LOBYTE(v46) = *((_BYTE *)this + 28) & 1;
          (*(void (__fastcall **)(struct CInteraction *, __int64, __int64, _QWORD))(*(_QWORD *)ClosestInteractionAncestor
                                                                                  + 40LL))(
            ClosestInteractionAncestor,
            v45,
            v46,
            v16);
        }
        ++*((_DWORD *)ClosestInteractionAncestor + v16 + 67);
      }
LABEL_62:
      *((_BYTE *)v39 + 216) &= 0x3Fu;
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v50);
      if ( !ClosestInteractionAncestor )
      {
        v17 = v62;
        v12 = (_QWORD *)((char *)this + 64);
        goto LABEL_64;
      }
    }
  }
LABEL_65:
  v47 = 0;
  if ( *((int *)this + 20) > 0 )
  {
    v48 = 0LL;
    do
    {
      for ( j = *(_QWORD *)(v48 + *((_QWORD *)this + 9)); j; j = *(_QWORD *)(j + 240) )
        *(_QWORD *)(j + 232) = 0LL;
      ++v47;
      v48 += 8LL;
    }
    while ( v47 < *((_DWORD *)this + 20) );
  }
}
