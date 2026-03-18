/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001BFD8
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001BFB0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800348A4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800410E4 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0xqq @ 0x180159144 (McTemplateU0xqq.c)
 *     McTemplateU0xqqxxffffffffffffffff @ 0x1801CDEA0 (McTemplateU0xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1, int a2)
{
  struct CInputManager *v2; // r13
  int v3; // r14d
  int v4; // edi
  int v6; // esi
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  struct CVisualTree *v8; // rbx
  int v9; // eax
  int v10; // eax
  struct CVisualTree *v12; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v13; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v14; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v15; // [rsp+D8h] [rbp-68h] BYREF
  int v16; // [rsp+E0h] [rbp-60h] BYREF
  int v17; // [rsp+E4h] [rbp-5Ch]
  int v18; // [rsp+E8h] [rbp-58h]
  int v19; // [rsp+ECh] [rbp-54h]
  int v20; // [rsp+F0h] [rbp-50h]
  int v21; // [rsp+F4h] [rbp-4Ch]
  int v22; // [rsp+F8h] [rbp-48h]
  int v23; // [rsp+FCh] [rbp-44h]
  int v24; // [rsp+100h] [rbp-40h]
  int v25; // [rsp+104h] [rbp-3Ch]
  int v26; // [rsp+108h] [rbp-38h]
  int v27; // [rsp+10Ch] [rbp-34h]
  int v28; // [rsp+110h] [rbp-30h]
  int v29; // [rsp+114h] [rbp-2Ch]
  int v30; // [rsp+118h] [rbp-28h]
  int v31; // [rsp+11Ch] [rbp-24h]
  int v32; // [rsp+120h] [rbp-20h]
  char v33; // [rsp+178h] [rbp+38h] BYREF
  int v34; // [rsp+180h] [rbp+40h] BYREF
  char v35; // [rsp+188h] [rbp+48h] BYREF

  v2 = CInputManager::s_pInputManager;
  v3 = 0;
  v4 = 0;
  v15 = 0LL;
  v6 = 0;
  v14 = 0LL;
  v34 = 0;
  v33 = 0;
  v13 = 0LL;
  v32 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(
      (_DWORD)a1,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
  if ( v2 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v12);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              *((CComposition **)v2 + 2),
                                              *((HMONITOR *)a1 + 1),
                                              *((_DWORD *)a1 + 7),
                                              &v12);
    v6 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &dword_180277D74,
        1u,
        TreeWithWorkspaceOrMonitorAssociation,
        0x107u);
    }
    else
    {
      v8 = v12;
      v9 = CVisualTree::PreComputeAndLockForRead(v12);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v10 = CHitTestContext::HitTestPoint(
                (char *)v2 + 24,
                v8,
                *((unsigned int *)a1 + 4),
                *((unsigned int *)a1 + 5),
                *(_DWORD *)a1,
                0,
                *((_QWORD *)a1 + 1),
                *((_DWORD *)a1 + 7),
                0LL,
                0,
                &v35,
                &v14,
                &v15,
                &v13,
                &v16,
                &v34,
                &v33);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v10, 0x11Du);
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v8 + 2) + 576LL));
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v12);
        v3 = v14;
        v4 = v13;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v9, 0x10Au);
    }
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v12);
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqqxxffffffffffffffff(
      v4,
      a2,
      v3,
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      v15,
      v4,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  return v6 >= 0;
}
