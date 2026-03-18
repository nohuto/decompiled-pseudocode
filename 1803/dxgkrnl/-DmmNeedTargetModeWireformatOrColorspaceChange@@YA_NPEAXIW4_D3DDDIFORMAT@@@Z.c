/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0214658
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(DXGADAPTER *this, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  DXGADAPTER *v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  DMMVIDPNTOPOLOGY *v17; // r13
  int NumPathsFromSource; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v41; // [rsp+28h] [rbp-18h] BYREF
  __int64 v42; // [rsp+30h] [rbp-10h] BYREF
  __int64 v43; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v44; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  v5 = this;
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 1747) )
    return 0;
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v8);
    return 0;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v5);
  v10 = *((_QWORD *)v5 + 307);
  if ( !v10 || (v11 = *(_QWORD *)(v10 + 88)) == 0 )
  {
    v8 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v8 + 24) = v5;
    goto LABEL_5;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v43, v11);
  v12 = *(_QWORD *)(v11 + 88);
  v13 = 1;
  v40 = 0LL;
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 32), 1u);
    v14 = *(_QWORD *)(v11 + 88);
  }
  else
  {
    v14 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v40, v14);
  if ( v40 )
  {
    v41 = 0LL;
    v17 = (DMMVIDPNTOPOLOGY *)(v40 + 96);
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v40 + 96), v4, &v41);
    v20 = NumPathsFromSource;
    if ( NumPathsFromSource >= 0 )
    {
      v21 = 0LL;
      if ( !v41 )
        goto LABEL_49;
      while ( 1 )
      {
        v44 = -1;
        v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v17, v4, v21, &v44);
        v20 = v22;
        if ( v22 < 0 )
          break;
        v24 = v44;
        if ( v44 == -1 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v25 + 24) = 14972LL;
          WdLogEvent5_WdAssertion(v25);
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v17, v4, v24);
        v5 = Path;
        if ( !Path )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v16[3] = v40;
          v16[4] = v4;
          v16[5] = v24;
          goto LABEL_48;
        }
        v27 = *((_QWORD *)Path + 12);
        if ( !v27 )
          goto LABEL_13;
        v28 = *(_QWORD *)(v27 + 104);
        if ( v28 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v28 + 96), 1u);
          v29 = *(_QWORD *)(v27 + 104);
        }
        else
        {
          v29 = 0LL;
        }
        v30 = *(_QWORD *)(v29 + 144);
        v42 = v29;
        if ( !v30 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v31 + 24) = 14996LL;
          WdLogEvent5_WdAssertion(v31);
          v30 = *(_QWORD *)(v29 + 144);
        }
        v32 = *(_DWORD *)(v30 + 132);
        v33 = *(_DWORD *)(v30 + 136);
        if ( (a3 == D3DDDIFMT_A16B16G16R16 || a3 == D3DDDIFMT_A16B16G16R16F) && v33 != 12 && v33 != 32
          || a3 != D3DDDIFMT_A16B16G16R16 && a3 != D3DDDIFMT_A16B16G16R16F && (v33 == 12 || v33 == 32) )
        {
          goto LABEL_44;
        }
        if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
        {
          v38 = v32;
          v39 = v32;
          v35 = v32 >> 8;
          v37 = v32 >> 20;
          v36 = v39 >> 14;
          v34 = v38 >> 2;
          if ( (((unsigned __int8)v34 | (unsigned __int8)(v35 | v36 | v37)) & 0xC) == 0 )
            goto LABEL_44;
        }
        else
        {
          v34 = v32 >> 2;
          v35 = v32 >> 8;
          v36 = v32 >> 14;
          v37 = v32 >> 20;
        }
        if ( a3 != D3DDDIFMT_A2B10G10R10
          && a3 != D3DDDIFMT_A2R10G10B10
          && (((unsigned __int8)v34 | (unsigned __int8)(v35 | v37 | v36)) & 0xC) != 0 )
        {
LABEL_44:
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
          goto LABEL_50;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v42, 0LL);
        if ( ++v21 >= v41 )
          goto LABEL_49;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v16[3] = v21;
      v16[4] = v4;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v16[3] = v4;
      v16[4] = v17;
    }
    v16[5] = v20;
  }
  else
  {
LABEL_13:
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v16[3] = v5;
  }
LABEL_48:
  WdLogEvent5_WdError(v16);
LABEL_49:
  v13 = 0;
LABEL_50:
  auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40));
  return v13;
}
