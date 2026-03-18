/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180025648
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180025630 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x180024478 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800348A4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800410E4 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x1801485F8 (-HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z.c)
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x18014A240 (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 *     McTemplateU0xqq @ 0x180159144 (McTemplateU0xqq.c)
 *     McTemplateU0xqqxxffffffffffffffff @ 0x1801CDEA0 (McTemplateU0xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1, int a2)
{
  struct CInputManager *v2; // r14
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  CoRenderHost *v8; // r12
  unsigned int *v9; // rax
  unsigned int *v10; // r15
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  struct CVisualTree *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v17; // r9d
  int v18; // r8d
  HMONITOR v19; // rdx
  int v20; // eax
  __int64 v21; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-78h] BYREF
  struct CVisual *v23; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-68h] BYREF
  int v25; // [rsp+E0h] [rbp-60h] BYREF
  int v26; // [rsp+E4h] [rbp-5Ch]
  int v27; // [rsp+E8h] [rbp-58h]
  int v28; // [rsp+ECh] [rbp-54h]
  int v29; // [rsp+F0h] [rbp-50h]
  int v30; // [rsp+F4h] [rbp-4Ch]
  int v31; // [rsp+F8h] [rbp-48h]
  int v32; // [rsp+FCh] [rbp-44h]
  int v33; // [rsp+100h] [rbp-40h]
  int v34; // [rsp+104h] [rbp-3Ch]
  int v35; // [rsp+108h] [rbp-38h]
  int v36; // [rsp+10Ch] [rbp-34h]
  int v37; // [rsp+110h] [rbp-30h]
  int v38; // [rsp+114h] [rbp-2Ch]
  int v39; // [rsp+118h] [rbp-28h]
  int v40; // [rsp+11Ch] [rbp-24h]
  int v41; // [rsp+120h] [rbp-20h]
  void *v42; // [rsp+130h] [rbp-10h] BYREF
  char v43; // [rsp+190h] [rbp+50h] BYREF
  int v44; // [rsp+198h] [rbp+58h] BYREF
  int v45; // [rsp+1A0h] [rbp+60h]
  struct CVisualTree *v46; // [rsp+1A8h] [rbp+68h] BYREF

  v2 = CInputManager::s_pInputManager;
  v21 = 0LL;
  v22 = 0LL;
  v4 = 1;
  v24 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  v44 = 0;
  v43 = 0;
  v6 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 12) = 0;
  v41 = 0;
  v45 = v6;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq(
      0,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
    v5 = v21;
  }
  if ( !v2 )
    goto LABEL_14;
  v7 = *((_QWORD *)v2 + 2);
  v46 = 0LL;
  v8 = *(CoRenderHost **)(v7 + 560);
  if ( CCommonRegistryData::m_fConfigureInput && !*(_BYTE *)(v7 + 1349) )
  {
    v10 = (unsigned int *)((char *)a1 + 184);
    v9 = (unsigned int *)((char *)a1 + 184);
    if ( !*((_DWORD *)a1 + 46) )
    {
      Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v46);
      CComposition::FindTreeFromMITLuid(*((CComposition **)v2 + 2), *(struct _LUID *)((char *)a1 + 188), &v46);
      v12 = v46;
      v9 = (unsigned int *)((char *)a1 + 184);
      if ( v46 )
        goto LABEL_9;
    }
  }
  else
  {
    v9 = (unsigned int *)((char *)a1 + 184);
  }
  v10 = v9;
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v46);
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                            *((CComposition **)v2 + 2),
                                            *((HMONITOR *)a1 + 1),
                                            *v10,
                                            &v46);
  v4 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, TreeWithWorkspaceOrMonitorAssociation, 0x83u);
LABEL_24:
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v46);
    goto LABEL_16;
  }
  v12 = v46;
LABEL_9:
  v13 = CVisualTree::PreComputeAndLockForRead(v12);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v13, 0x87u);
    goto LABEL_24;
  }
  if ( !v8 || !*((_BYTE *)v2 + 216) )
    goto LABEL_11;
  v17 = *((_DWORD *)a1 + 5);
  v18 = *((_DWORD *)a1 + 4);
  v19 = (HMONITOR)*((_QWORD *)a1 + 1);
  v23 = 0LL;
  v20 = CoRenderHost::HitTest(v8, v19, v18, v17, *((_DWORD *)a1 + 44), &v42, &v23, (unsigned int *)a1 + 45);
  v4 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v20, 0x95u);
  if ( v23 )
  {
LABEL_11:
    v14 = CHitTestContext::HitTestPoint(
            (char *)v2 + 24,
            v12,
            *((unsigned int *)a1 + 4),
            *((unsigned int *)a1 + 5),
            *(_DWORD *)a1,
            *((_DWORD *)a1 + 43),
            *((_QWORD *)a1 + 1),
            *v10,
            *((_QWORD *)a1 + 5),
            v45,
            (char *)a1 + 48,
            &v24,
            &v21,
            &v22,
            &v25,
            &v44,
            &v43);
    v4 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v14, 0xADu);
  }
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v12 + 2) + 576LL));
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v46);
  v5 = v21;
LABEL_14:
  v15 = v24;
  *((_DWORD *)a1 + 42) &= ~1u;
  *((_QWORD *)a1 + 3) = v15;
  *((_DWORD *)a1 + 30) = v44;
  LODWORD(v15) = v43 & 1;
  *((_QWORD *)a1 + 4) = v5;
  *((_DWORD *)a1 + 42) |= v15;
  if ( v5 )
    CInputManager::CopyTransform((const struct CMILMatrix *)&v25, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 56));
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqqxxffffffffffffffff(
      v22,
      a2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v22,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  return v4 >= 0;
}
