/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1800BF168
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1800BF140 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     McTemplateU0xqq @ 0x180136C98 (McTemplateU0xqq.c)
 *     McTemplateU0xqqxxffffffffffffffff @ 0x180195220 (McTemplateU0xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1, int a2)
{
  struct CInputManager *v2; // r15
  int v3; // esi
  int v4; // ebx
  signed int v6; // edi
  unsigned int v7; // r8d
  HMONITOR v8; // rdx
  __int64 v9; // r12
  CComposition *v10; // rcx
  signed int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 *v12; // r15
  signed int v13; // eax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // [rsp+C0h] [rbp-80h] BYREF
  HWND v18; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-70h] BYREF
  __int128 v20; // [rsp+E0h] [rbp-60h] BYREF
  int v21; // [rsp+F0h] [rbp-50h]
  int v22; // [rsp+F4h] [rbp-4Ch]
  int v23; // [rsp+F8h] [rbp-48h]
  int v24; // [rsp+FCh] [rbp-44h]
  int v25; // [rsp+100h] [rbp-40h]
  int v26; // [rsp+104h] [rbp-3Ch]
  int v27; // [rsp+108h] [rbp-38h]
  int v28; // [rsp+10Ch] [rbp-34h]
  int v29; // [rsp+110h] [rbp-30h]
  int v30; // [rsp+114h] [rbp-2Ch]
  int v31; // [rsp+118h] [rbp-28h]
  int v32; // [rsp+11Ch] [rbp-24h]
  int v33; // [rsp+120h] [rbp-20h]
  __int64 v34; // [rsp+130h] [rbp-10h] BYREF
  char v35; // [rsp+188h] [rbp+48h] BYREF
  int v36; // [rsp+190h] [rbp+50h] BYREF
  struct CVisualTree *v37; // [rsp+198h] [rbp+58h] BYREF

  v2 = CInputManager::s_pInputManager;
  v3 = 0;
  v4 = 0;
  v19 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v34 = 0LL;
  v36 = 0;
  v35 = 0;
  v17 = 0LL;
  v33 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(
      (_DWORD)a1,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
  if ( v2 )
  {
    v7 = *((_DWORD *)a1 + 7);
    v8 = (HMONITOR)*((_QWORD *)a1 + 1);
    v9 = (__int64)v2 + 24;
    v10 = (CComposition *)*((_QWORD *)v2 + 2);
    v37 = 0LL;
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v10, v8, v7, &v37);
    v6 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, TreeWithWorkspaceOrMonitorAssociation, 0x150u);
    }
    else
    {
      v12 = (__int64 *)v37;
      if ( (*(_BYTE *)(*((_QWORD *)v37 + 3) + 88LL) & 0x7F) != 0
        && (v15 = *((_QWORD *)v37 + 2) + 552LL,
            AcquireSRWLockExclusive((PSRWLOCK)v15),
            *(_DWORD *)(v15 + 8) = GetCurrentThreadId(),
            v6 = CVisualTree::PreCompute((CVisualTree *)v12),
            v16 = v12[2] + 552,
            *(_DWORD *)(v16 + 8) = 0,
            ReleaseSRWLockExclusive((PSRWLOCK)v16),
            v6 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v6, 0x15Du);
      }
      else
      {
        AcquireSRWLockShared((PSRWLOCK)(v12[2] + 552));
        v13 = CHitTestContext::HitTestPoint(
                v9,
                v12,
                *((_DWORD *)a1 + 4),
                *((_DWORD *)a1 + 5),
                *(_DWORD *)a1,
                0,
                *((_QWORD *)a1 + 1),
                *((_DWORD *)a1 + 7),
                0LL,
                0,
                (unsigned int *)&v37,
                &v18,
                &v19,
                &v17,
                &v20,
                &v36,
                &v35,
                &v34);
        v6 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v13, 0x176u);
        ReleaseSRWLockShared((PSRWLOCK)(v12[2] + 552));
        CMILRefCountBase::Release((CMILRefCountBase *)v12);
        v3 = (int)v18;
        v4 = v17;
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqqxxffffffffffffffff(
      v4,
      a2,
      v3,
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      v19,
      v4,
      v20,
      SBYTE4(v20),
      SBYTE8(v20),
      SBYTE12(v20),
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
      v31,
      v32);
  return v6 >= 0;
}
