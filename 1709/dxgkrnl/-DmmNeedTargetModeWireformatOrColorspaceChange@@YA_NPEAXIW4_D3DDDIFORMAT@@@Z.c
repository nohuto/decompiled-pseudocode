/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C00F74A0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(DXGADAPTER *this, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  DXGADAPTER *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  DMMVIDPNTOPOLOGY *v14; // r13
  int NumPathsFromSource; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  bool v26; // zf
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // edx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-18h] BYREF
  __int64 v37; // [rsp+30h] [rbp-10h] BYREF
  __int64 v38; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v39; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  v5 = this;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 1619) )
    return 0;
  if ( !v5 )
  {
    v31 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v31 + 24) = 0LL;
LABEL_31:
    WdLogEvent5_WdError(v31);
    return 0;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v5);
  v8 = *((_QWORD *)v5 + 288);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 88)) == 0 )
  {
    v31 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v31 + 24) = v5;
    goto LABEL_31;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v38, v9);
  v10 = *(_QWORD *)(v9 + 88);
  v11 = 1;
  v35 = 0LL;
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v10 + 32), 1u);
    v12 = *(_QWORD *)(v9 + 88);
  }
  else
  {
    v12 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v35, v12);
  if ( v35 )
  {
    v36 = 0LL;
    v14 = (DMMVIDPNTOPOLOGY *)(v35 + 96);
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v35 + 96), v4, &v36);
    v17 = NumPathsFromSource;
    if ( NumPathsFromSource < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v32[3] = v4;
      v32[4] = v14;
    }
    else
    {
      v18 = 0LL;
      if ( !v36 )
        goto LABEL_28;
      while ( 1 )
      {
        v39 = -1;
        v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, (_QWORD *)(unsigned int)v4, v18, &v39);
        v17 = v19;
        if ( v19 < 0 )
          break;
        v21 = v39;
        if ( v39 == -1 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v33 + 24) = 14946LL;
          WdLogEvent5_WdAssertion(v33);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v14, v4, v21);
        v5 = Path;
        if ( !Path )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v32[3] = v35;
          v32[4] = v4;
          v32[5] = v21;
          goto LABEL_48;
        }
        v23 = *((_QWORD *)Path + 12);
        if ( !v23 )
          goto LABEL_35;
        v24 = *(_QWORD *)(v23 + 104);
        if ( v24 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v24 + 96), 1u);
          v25 = *(_QWORD *)(v23 + 104);
        }
        else
        {
          v25 = 0LL;
        }
        v26 = *(_QWORD *)(v25 + 144) == 0LL;
        v37 = v25;
        if ( v26 )
        {
          v34 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v34 + 24) = 14970LL;
          WdLogEvent5_WdAssertion(v34);
        }
        v27 = *(_QWORD *)(v25 + 144);
        v28 = *(_DWORD *)(v27 + 132);
        v29 = *(_DWORD *)(v27 + 136);
        if ( (a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F) && v29 != 12
          || v29 == 12 && a3 != D3DDDIFMT_A16B16G16R16 && a3 != D3DDDIFMT_A16B16G16R16F
          || (a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10)
          && (((unsigned __int8)v28 | (unsigned __int8)((v28 | ((v28 | (v28 >> 6)) >> 6)) >> 6)) & 0x30) == 0
          || a3 != D3DDDIFMT_A2B10G10R10
          && a3 != D3DDDIFMT_A2R10G10B10
          && (((unsigned __int8)v28 | (unsigned __int8)((v28 | ((v28 | (v28 >> 6)) >> 6)) >> 6)) & 0x30) != 0 )
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
          goto LABEL_29;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
        if ( ++v18 >= v36 )
          goto LABEL_28;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v32[3] = v18;
      v32[4] = v4;
    }
    v32[5] = v17;
  }
  else
  {
LABEL_35:
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v32[3] = v5;
  }
LABEL_48:
  WdLogEvent5_WdError(v32);
LABEL_28:
  v11 = 0;
LABEL_29:
  auto_rc<DMMVIDPN const>::reset(&v35, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40));
  return v11;
}
