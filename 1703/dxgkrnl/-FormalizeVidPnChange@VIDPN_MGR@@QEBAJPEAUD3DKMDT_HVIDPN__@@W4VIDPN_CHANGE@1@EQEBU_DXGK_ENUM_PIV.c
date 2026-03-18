/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658
 * Callers:
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00A7B10 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00A7CA0 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E4108 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E4468 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01D4538 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01D57D0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 * Callees:
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00E1708 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C00E5700 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  __int64 v5; // rbx
  char v6; // r15
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r14
  int IsSupportedVidPn; // eax
  __int64 v12; // rbp
  BOOLEAN IsVidPnSupported; // al
  _QWORD *v14; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rbp
  __int64 v49; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v50; // [rsp+20h] [rbp-38h] BYREF

  v5 = (int)a3;
  v6 = a4;
  v8 = a1;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (int)v5 <= 6 )
  {
    if ( (_DWORD)v5 == 6 )
      goto LABEL_24;
    a1 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 != 1 )
    {
      a1 = (unsigned int)(v5 - 2);
      if ( (_DWORD)v5 == 2 )
        goto LABEL_24;
      a1 = (unsigned int)(v5 - 3);
      if ( (_DWORD)v5 != 3 )
      {
        a1 = (unsigned int)(v5 - 4);
        if ( (_DWORD)v5 == 4 )
          goto LABEL_24;
        if ( (_DWORD)v5 != 5 )
        {
LABEL_44:
          v28 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v28 + 24) = v5;
          WdLogEvent5_WdError(v28);
          goto LABEL_24;
        }
      }
    }
LABEL_6:
    if ( a2 && *(_DWORD *)(a2 + 64) == 1833172997 )
      v9 = a2;
    else
      v9 = 0LL;
    if ( *(_BYTE *)(v9 + 296) || DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v9 + 96), a2, a3, a4) )
    {
      LOBYTE(a1) = *(_BYTE *)(v9 + 172);
      if ( ((unsigned __int16)((2 << a1) - 1) & *(_WORD *)(v9 + 174)) != 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v30);
      }
      if ( !*(_QWORD *)(v8 + 8) )
      {
        v31 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v31);
      }
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
      {
        v32 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v32);
      }
      v50.hDesiredVidPn = (D3DKMDT_HVIDPN)a2;
      *(_QWORD *)&v50.IsVidPnSupported = 0LL;
      if ( !*(_QWORD *)(v8 + 8) )
      {
        v33 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        WdLogEvent5_WdAssertion(v33);
      }
      IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(*(ADAPTER_DISPLAY **)(v8 + 8), &v50);
      v12 = IsSupportedVidPn;
      if ( IsSupportedVidPn < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
        v34[3] = a2;
        v34[4] = v10;
        v34[5] = v12;
        WdLogEvent5_WdError(v34);
        IsVidPnSupported = 0;
      }
      else
      {
        IsVidPnSupported = v50.IsVidPnSupported;
        LODWORD(v12) = 0;
      }
      if ( (int)v12 < 0 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
        v37[3] = a2;
        if ( !*(_QWORD *)(v8 + 8) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v36, v35, v38, v39);
          WdLogEvent5_WdAssertion(v40);
        }
        v41 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
        v37[5] = (int)v12;
        v37[4] = v41;
        WdLogEvent5_WdError(v37);
        return (unsigned int)v12;
      }
      if ( IsVidPnSupported )
        goto LABEL_24;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v29 + 24) = a2;
      WdLogEvent5_WdError(v29);
    }
    v24 = WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = a2;
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v23, v22, v25, v26);
      WdLogEvent5_WdAssertion(v42);
    }
    *(_QWORD *)(v24 + 32) = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
    WdLogEvent5_WdDmmEvent(v24);
    result = 3223192326LL;
    if ( (_DWORD)v5 == 1 )
      return 3223192321LL;
    return result;
  }
  switch ( (_DWORD)v5 )
  {
    case 7:
      goto LABEL_6;
    case 8:
      goto LABEL_24;
    case 9:
      goto LABEL_6;
  }
  if ( (int)v5 > 11 )
    goto LABEL_44;
LABEL_24:
  if ( !v6 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
    v14[3] = v5;
    v14[4] = a2;
    v14[5] = *a5;
    v14[6] = a5[1];
    WdLogEvent5_WdDmmEvent(v14);
    return 0LL;
  }
  v16 = VIDPN_MGR::_EnumVidPnCofuncModality(v8, a2, (unsigned int)v5, a5, v50.hDesiredVidPn);
  v21 = v16;
  if ( v16 >= 0 )
    return 0LL;
  v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
  v48 = v43;
  v43[3] = a2;
  v43[4] = v5;
  v43[5] = a5;
  if ( !*(_QWORD *)(v8 + 8) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
    WdLogEvent5_WdAssertion(v49);
  }
  result = (unsigned int)v21;
  v48[6] = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
  v48[7] = v21;
  return result;
}
