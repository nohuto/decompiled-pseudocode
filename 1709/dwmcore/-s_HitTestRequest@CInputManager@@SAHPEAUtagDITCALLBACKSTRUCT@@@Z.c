/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800B8A40
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800B8A20 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800B8C54 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800BA6A8 (-GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z @ 0x1801257F8 (-HitTest@CoRenderHost@@QEAAJPEAUHMONITOR__@@JJIPEAPEAXPEAPEAVCVisual@@PEAI@Z.c)
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x180127F7C (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 *     McTemplateU0xqq @ 0x180136C98 (McTemplateU0xqq.c)
 *     McTemplateU0xqqxxffffffffffffffff @ 0x180195220 (McTemplateU0xqqxxffffffffffffffff.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1, int a2)
{
  struct CInputManager *v2; // r15
  unsigned int *v3; // r12
  unsigned int v5; // eax
  int v6; // ebx
  void *v7; // rsi
  CComposition *v8; // rcx
  CoRenderHost *v9; // r13
  int TreeFromMITLuid; // eax
  struct CVisual *v11; // r14
  signed int v12; // eax
  HWND v13; // rax
  __int64 v14; // rcx
  DWORD v16; // r9d
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // r8d
  HMONITOR v21; // rdx
  signed int v22; // eax
  struct IMessageSession *InputThreadMessageSession; // rax
  unsigned int v24; // [rsp+20h] [rbp-120h]
  void *v25; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-78h] BYREF
  void *v27; // [rsp+D0h] [rbp-70h] BYREF
  HWND v28; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-60h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-50h] BYREF
  int v31; // [rsp+100h] [rbp-40h]
  int v32; // [rsp+104h] [rbp-3Ch]
  int v33; // [rsp+108h] [rbp-38h]
  int v34; // [rsp+10Ch] [rbp-34h]
  int v35; // [rsp+110h] [rbp-30h]
  int v36; // [rsp+114h] [rbp-2Ch]
  int v37; // [rsp+118h] [rbp-28h]
  int v38; // [rsp+11Ch] [rbp-24h]
  int v39; // [rsp+120h] [rbp-20h]
  int v40; // [rsp+124h] [rbp-1Ch]
  int v41; // [rsp+128h] [rbp-18h]
  int v42; // [rsp+12Ch] [rbp-14h]
  int v43; // [rsp+130h] [rbp-10h]
  char v44; // [rsp+190h] [rbp+50h] BYREF
  int v45; // [rsp+198h] [rbp+58h] BYREF
  unsigned int v46; // [rsp+1A0h] [rbp+60h]
  struct CVisual *v47; // [rsp+1A8h] [rbp+68h] BYREF

  v2 = CInputManager::s_pInputManager;
  v3 = (unsigned int *)((char *)a1 + 48);
  v26 = 0LL;
  v5 = *((_DWORD *)a1 + 12);
  v6 = 1;
  *((_DWORD *)a1 + 12) = 0;
  v7 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v46 = v5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq(
      (_DWORD)a1,
      (unsigned int)&EVTDESC_HIT_TEST_Start,
      *((_QWORD *)a1 + 1),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5));
  if ( !v2 )
  {
LABEL_12:
    v7 = v27;
    goto LABEL_13;
  }
  v8 = (CComposition *)*((_QWORD *)v2 + 2);
  v47 = 0LL;
  v9 = (CoRenderHost *)*((_QWORD *)v8 + 67);
  if ( CCommonRegistryData::m_fConfigureInput )
  {
    TreeFromMITLuid = CComposition::FindTreeFromMITLuid(v8, *(struct _LUID *)((char *)a1 + 196), &v47);
    v6 = TreeFromMITLuid;
    if ( TreeFromMITLuid >= 0 )
      goto LABEL_6;
    v24 = 160;
LABEL_23:
    v16 = TreeFromMITLuid;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v16, v24);
    goto LABEL_17;
  }
  TreeFromMITLuid = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                      v8,
                      *((HMONITOR *)a1 + 1),
                      *((_DWORD *)a1 + 48),
                      &v47);
  v6 = TreeFromMITLuid;
  if ( TreeFromMITLuid < 0 )
  {
    v24 = 166;
    goto LABEL_23;
  }
LABEL_6:
  v11 = v47;
  if ( (*(_BYTE *)(*((_QWORD *)v47 + 3) + 88LL) & 0x7F) != 0 )
  {
    v17 = *((_QWORD *)v47 + 2);
    AcquireSRWLockExclusive((PSRWLOCK)(v17 + 552));
    *(_DWORD *)(v17 + 560) = GetCurrentThreadId();
    v6 = CVisualTree::PreCompute(v11);
    v18 = *((_QWORD *)v11 + 2) + 552LL;
    *(_DWORD *)(v18 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)v18);
    if ( v6 < 0 )
    {
      v24 = 180;
      v16 = v6;
      goto LABEL_24;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v11 + 2) + 552LL));
  if ( !v9 || !*((_BYTE *)v2 + 208) )
    goto LABEL_8;
  v19 = *((_DWORD *)a1 + 5);
  v20 = *((_DWORD *)a1 + 4);
  v21 = (HMONITOR)*((_QWORD *)a1 + 1);
  v47 = 0LL;
  v22 = CoRenderHost::HitTest(v9, v21, v20, v19, *((_DWORD *)a1 + 46), &v27, &v47, (unsigned int *)a1 + 47);
  v6 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v22, 0xC7u);
  if ( v47 )
  {
LABEL_8:
    v12 = CHitTestContext::HitTestPoint(
            (__int64)v2 + 24,
            (__int64 *)v11,
            *((_DWORD *)a1 + 4),
            *((_DWORD *)a1 + 5),
            *(_DWORD *)a1,
            *((_DWORD *)a1 + 45),
            *((_QWORD *)a1 + 1),
            *((_DWORD *)a1 + 48),
            *((_QWORD *)a1 + 5),
            v46,
            v3,
            &v28,
            &v29,
            &v26,
            &v30,
            &v45,
            &v44,
            &v25);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18020736C, 1u, v12, 0xE0u);
    v7 = v25;
  }
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v11 + 2) + 552LL));
  CMILRefCountBase::Release(v11);
  if ( !v7 )
    goto LABEL_12;
LABEL_13:
  v13 = v28;
  *((_DWORD *)a1 + 44) &= ~1u;
  v14 = v29;
  *((_QWORD *)a1 + 3) = v13;
  *((_DWORD *)a1 + 30) = v45;
  LODWORD(v13) = v44 & 1;
  *((_QWORD *)a1 + 4) = v14;
  *((_DWORD *)a1 + 44) |= (unsigned int)v13;
  *((_QWORD *)a1 + 16) = v7;
  if ( v14 )
    CInputManager::CopyTransform((const struct CMILMatrix *)&v30, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 56));
  if ( v7 )
  {
    InputThreadMessageSession = CInputManager::GetInputThreadMessageSession();
    (*(void (__fastcall **)(struct IMessageSession *, void *, char *))(*(_QWORD *)InputThreadMessageSession + 112LL))(
      InputThreadMessageSession,
      v7,
      (char *)a1 + 136);
  }
LABEL_17:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqqxxffffffffffffffff(
      v26,
      a2,
      *((_QWORD *)a1 + 3),
      *((_DWORD *)a1 + 4),
      *((_DWORD *)a1 + 5),
      *((_QWORD *)a1 + 4),
      v26,
      v30,
      SBYTE4(v30),
      SBYTE8(v30),
      SBYTE12(v30),
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
      v42);
  return v6 >= 0;
}
