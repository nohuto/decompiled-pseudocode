/*
 * XREFs of ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01D3250
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009338 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C00448D4 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00E1708 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E5700 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNPRESENTPATH *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 Container; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  D3DKMDT_HVIDPN v24; // rdi
  __int64 v25; // rax
  D3DKMDT_HVIDPN v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  int IsSupportedVidPn; // eax
  _QWORD *v38; // rax
  BOOLEAN IsVidPnSupported; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rbp
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rax
  DXGK_ENUM_PIVOT v60[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _DXGKARG_ISSUPPORTEDVIDPN v61; // [rsp+30h] [rbp-28h] BYREF

  v4 = (int)a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !(_DWORD)v4 || (unsigned int)(v4 - 254) <= 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (unsigned int)v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v15[5] = v14;
LABEL_8:
    v15[4] = a2;
    v15[3] = v4;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40, v10, v12, v13);
  v18 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  v21 = *((_QWORD *)a2 + 12);
  v60[0].VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v22 = *(unsigned int *)(v21 + 24);
  v23 = -(v18 + 88);
  v60[0].VidPnTargetId = v22;
  v24 = (D3DKMDT_HVIDPN)(v18 & -(__int64)(v18 != -88));
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v23, v22, v19, v20);
    WdLogEvent5_WdAssertion(v25);
LABEL_14:
    v26 = 0LL;
    goto LABEL_15;
  }
  if ( *((_DWORD *)v24 + 16) != 1833172997 )
    goto LABEL_14;
  v26 = v24;
LABEL_15:
  if ( !*((_BYTE *)v26 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v26 + 24), v22, v19, v20) )
  {
    v27 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v27 + 24) = v24;
    WdLogEvent5_WdError(v27);
LABEL_35:
    v14 = WdLogNewEntry5_WdDmmEvent(v29, v28, v30, v31);
    *(_QWORD *)(v14 + 24) = v24;
    if ( !this[1] )
    {
      v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
      WdLogEvent5_WdAssertion(v54);
    }
    *(_QWORD *)(v14 + 32) = *((_QWORD *)this[1] + 2);
    WdLogEvent5_WdDmmEvent(v14);
    LODWORD(v14) = -1071774970;
    goto LABEL_45;
  }
  LOBYTE(v23) = *((_BYTE *)v26 + 172);
  if ( ((unsigned __int16)((2 << v23) - 1) & *((_WORD *)v26 + 87)) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v23, v22, v19, v20);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !this[1] )
  {
    v33 = WdLogNewEntry5_WdAssertion(v23, v22, v19, v20);
    WdLogEvent5_WdAssertion(v33);
  }
  v34 = *((_QWORD *)this[1] + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v34 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 144)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v23, v22, v19, v20);
    WdLogEvent5_WdAssertion(v35);
  }
  v61.hDesiredVidPn = v24;
  *(_QWORD *)&v61.IsVidPnSupported = 0LL;
  if ( !this[1] )
  {
    v36 = WdLogNewEntry5_WdAssertion(v23, v22, v19, v20);
    WdLogEvent5_WdAssertion(v36);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(this[1], &v61, v19, v20);
  v14 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    IsVidPnSupported = v61.IsVidPnSupported;
    LODWORD(v14) = 0;
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v38[3] = v24;
    v38[4] = v34;
    v38[5] = v14;
    WdLogEvent5_WdError(v38);
    IsVidPnSupported = 0;
  }
  if ( (int)v14 >= 0 )
  {
    if ( !IsVidPnSupported )
      goto LABEL_35;
    v55 = VIDPN_MGR::_EnumVidPnCofuncModality((__int64)this, v24, 7LL, v60);
    v14 = v55;
    if ( v55 >= 0 )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
      v57[3] = v24;
      v57[4] = 7LL;
      v57[5] = v60;
      if ( !this[1] )
      {
        v58 = WdLogNewEntry5_WdAssertion(v56, v46, v48, v49);
        WdLogEvent5_WdAssertion(v58);
      }
      v47 = *((_QWORD *)this[1] + 2);
      v57[6] = v47;
      v57[7] = v14;
    }
  }
  else
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v42[3] = v24;
    if ( !this[1] )
    {
      v45 = WdLogNewEntry5_WdAssertion(v41, v40, v43, v44);
      WdLogEvent5_WdAssertion(v45);
    }
    v42[4] = *((_QWORD *)this[1] + 2);
    v42[5] = (int)v14;
    WdLogEvent5_WdError(v42);
  }
  if ( (int)v14 < 0 )
  {
    if ( (_DWORD)v14 != -1071774970 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
      v15[5] = (int)v14;
      goto LABEL_8;
    }
LABEL_45:
    v59 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
    *(_QWORD *)(v59 + 24) = v4;
    *(_QWORD *)(v59 + 32) = a2;
    WdLogEvent5_WdWarning(v59);
    return (unsigned int)v14;
  }
  return 0LL;
}
