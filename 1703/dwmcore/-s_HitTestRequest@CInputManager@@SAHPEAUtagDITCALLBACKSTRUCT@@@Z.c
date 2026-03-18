/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004660
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004640 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800048C4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800B1ED4 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800C6554 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x18013B2E8 (-HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z.c)
 *     Template_xqq @ 0x180146618 (Template_xqq.c)
 *     Template_xqqxxffffffffffffffff @ 0x180189B60 (Template_xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1, int a2)
{
  struct CInputManager *v2; // r15
  char *v3; // r12
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // esi
  CComposition *v8; // rcx
  unsigned int v9; // r8d
  HMONITOR v10; // rdx
  CoRenderHost *v11; // r13
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  struct CVisual *v13; // r14
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // r8d
  HMONITOR v22; // rdx
  int v23; // eax
  struct IMessageSession *InputThreadMessageSession; // rax
  struct CVisual *v25; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-78h] BYREF
  void *v27; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-60h] BYREF
  int v30; // [rsp+F0h] [rbp-50h] BYREF
  int v31; // [rsp+F4h] [rbp-4Ch]
  int v32; // [rsp+F8h] [rbp-48h]
  int v33; // [rsp+FCh] [rbp-44h]
  int v34; // [rsp+100h] [rbp-40h]
  int v35; // [rsp+104h] [rbp-3Ch]
  int v36; // [rsp+108h] [rbp-38h]
  int v37; // [rsp+10Ch] [rbp-34h]
  int v38; // [rsp+110h] [rbp-30h]
  int v39; // [rsp+114h] [rbp-2Ch]
  int v40; // [rsp+118h] [rbp-28h]
  int v41; // [rsp+11Ch] [rbp-24h]
  int v42; // [rsp+120h] [rbp-20h]
  int v43; // [rsp+124h] [rbp-1Ch]
  int v44; // [rsp+128h] [rbp-18h]
  int v45; // [rsp+12Ch] [rbp-14h]
  int v46; // [rsp+130h] [rbp-10h]
  char v47; // [rsp+190h] [rbp+50h] BYREF
  unsigned int v48; // [rsp+198h] [rbp+58h] BYREF
  int v49; // [rsp+1A0h] [rbp+60h] BYREF
  int v50; // [rsp+1A8h] [rbp+68h]

  v2 = CInputManager::s_pInputManager;
  v3 = (char *)a1 + 48;
  v26 = 0LL;
  v5 = *((_DWORD *)a1 + 12);
  v6 = 1;
  *((_DWORD *)a1 + 12) = 0;
  v7 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v48 = 0;
  v27 = 0LL;
  v49 = 0;
  v47 = 0;
  v46 = 0;
  v50 = v5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(
      (_DWORD)a1,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
  if ( !v2 )
    goto LABEL_11;
  v8 = (CComposition *)*((_QWORD *)v2 + 2);
  v9 = *((_DWORD *)a1 + 46);
  v10 = (HMONITOR)*((_QWORD *)a1 + 1);
  v25 = 0LL;
  v11 = (CoRenderHost *)*((_QWORD *)v8 + 71);
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v8, v10, v9, &v25);
  v6 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3CB0, 1u, TreeWithWorkspaceOrMonitorAssociation, 0xA2u);
    goto LABEL_16;
  }
  v13 = v25;
  if ( (*(_BYTE *)(*((_QWORD *)v25 + 3) + 88LL) & 0x1F) != 0 )
  {
    v18 = *((_QWORD *)v25 + 2);
    AcquireSRWLockExclusive((PSRWLOCK)(v18 + 584));
    *(_DWORD *)(v18 + 592) = GetCurrentThreadId();
    v6 = CVisualTree::PreCompute(v13);
    v19 = *((_QWORD *)v13 + 2) + 584LL;
    *(_DWORD *)(v19 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)v19);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F3CB0, 1u, v6, 0xAFu);
      goto LABEL_16;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v13 + 2) + 584LL));
  if ( !v11 || !*((_BYTE *)v2 + 208) )
    goto LABEL_7;
  v20 = *((_DWORD *)a1 + 5);
  v21 = *((_DWORD *)a1 + 4);
  v22 = (HMONITOR)*((_QWORD *)a1 + 1);
  v25 = 0LL;
  v23 = CoRenderHost::HitTest(v11, v22, v21, v20, *((_DWORD *)a1 + 44), &v27, &v25, (unsigned int *)a1 + 45);
  v6 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801F3CB0, 1u, v23, 0xC2u);
  if ( v25 )
  {
LABEL_7:
    v14 = CHitTestContext::HitTestPoint(
            (char *)v2 + 24,
            v13,
            *((unsigned int *)a1 + 4),
            *((unsigned int *)a1 + 5),
            *(_DWORD *)a1,
            *((_DWORD *)a1 + 43),
            *((_QWORD *)a1 + 1),
            *((_DWORD *)a1 + 46),
            *((_QWORD *)a1 + 5),
            v50,
            v3,
            &v28,
            &v29,
            &v26,
            &v30,
            &v49,
            &v47,
            &v48);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3CB0, 1u, v14, 0xDBu);
    v7 = v48;
  }
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v13 + 2) + 584LL));
  CMILRefCountBase::Release(v13);
  if ( !v7 )
LABEL_11:
    v7 = (unsigned int)v27;
  v15 = v28;
  *((_DWORD *)a1 + 42) &= ~1u;
  v16 = v29;
  *((_QWORD *)a1 + 3) = v15;
  *((_DWORD *)a1 + 30) = v49;
  LODWORD(v15) = v47 & 1;
  *((_QWORD *)a1 + 4) = v16;
  *((_DWORD *)a1 + 42) |= v15;
  *((_DWORD *)a1 + 31) = v7;
  if ( v16 )
    CInputManager::CopyTransform((const struct CMILMatrix *)&v30, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 56));
  if ( v7 )
  {
    InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD, char *))(*(_QWORD *)InputThreadMessageSession + 112LL))(
      InputThreadMessageSession,
      v7,
      (char *)a1 + 128);
  }
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqqxxffffffffffffffff(
      v26,
      a2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v26,
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
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  return v6 >= 0;
}
