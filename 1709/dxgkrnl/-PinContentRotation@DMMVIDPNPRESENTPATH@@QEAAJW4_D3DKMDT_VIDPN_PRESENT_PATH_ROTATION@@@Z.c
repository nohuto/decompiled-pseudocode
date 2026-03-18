/*
 * XREFs of ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000690C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0005FA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00D3210 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01EEA30 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000A1EC (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int32 v9; // eax
  int v10; // eax
  __int32 v11; // eax
  int v12; // eax
  _QWORD *v14; // rax
  __int32 v15; // eax
  __int32 v16; // eax
  int v17; // eax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int32 v20; // eax
  __int32 v21; // eax
  __int32 v22; // eax

  v2 = a2;
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(a2) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v14[3] = v2;
    v14[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v14[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdError(v14);
  }
  v5 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2);
  v8 = 251LL;
  v9 = v5 - 1;
  if ( !v9 )
  {
    LOBYTE(v10) = *((_BYTE *)this + 124);
    goto LABEL_5;
  }
  v15 = v9 - 1;
  if ( !v15 )
  {
    v10 = *((_DWORD *)this + 31) >> 1;
LABEL_5:
    if ( (v10 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_6;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v10 = *((_DWORD *)this + 31) >> 2;
    goto LABEL_5;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v10 = *((_DWORD *)this + 31) >> 3;
    goto LABEL_5;
  }
  if ( v17 != 251 )
  {
LABEL_14:
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = v2;
    WdLogEvent5_WdError(v18);
    goto LABEL_15;
  }
LABEL_6:
  v11 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v11 )
  {
    v12 = *((_DWORD *)this + 31) >> 4;
    goto LABEL_8;
  }
  v20 = v11 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == (_DWORD)v8 )
          goto LABEL_9;
        goto LABEL_14;
      }
      v12 = *((_DWORD *)this + 31) >> 7;
    }
    else
    {
      v12 = *((_DWORD *)this + 31) >> 6;
    }
  }
  else
  {
    v12 = *((_DWORD *)this + 31) >> 5;
  }
LABEL_8:
  if ( (v12 & 1) != 0 )
  {
LABEL_9:
    *((_DWORD *)this + 29) = v2;
    return 0LL;
  }
LABEL_15:
  v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
  v19[3] = v2;
  v19[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v19[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v19);
  return 3223192326LL;
}
