/*
 * XREFs of ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000969C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008E60 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00F2800 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01D2F08 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000C360 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int32 v11; // eax
  int v12; // eax
  __int32 v13; // eax
  int v14; // eax
  _QWORD *v16; // rax
  __int32 v17; // eax
  __int32 v18; // eax
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int32 v22; // eax
  __int32 v23; // eax
  __int32 v24; // eax

  v2 = a2;
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(a2) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v16[3] = v2;
    v16[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v16[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdError(v16);
  }
  v6 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2);
  LOBYTE(v9) = 1;
  v10 = 251LL;
  v11 = v6 - 1;
  if ( !v11 )
  {
    LOBYTE(v12) = *((_BYTE *)this + 124);
    goto LABEL_5;
  }
  v17 = v11 - 1;
  if ( !v17 )
  {
    v12 = *((_DWORD *)this + 31) >> 1;
LABEL_5:
    if ( (v12 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_6;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v12 = *((_DWORD *)this + 31) >> 2;
    goto LABEL_5;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v12 = *((_DWORD *)this + 31) >> 3;
    goto LABEL_5;
  }
  if ( v19 != 251 )
  {
LABEL_14:
    v20 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v20 + 24) = v2;
    WdLogEvent5_WdError(v20);
    goto LABEL_15;
  }
LABEL_6:
  v13 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v13 )
  {
    v14 = *((_DWORD *)this + 31) >> 4;
    goto LABEL_8;
  }
  v22 = v13 - 1;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 == (_DWORD)v10 )
          goto LABEL_9;
        goto LABEL_14;
      }
      v14 = *((_DWORD *)this + 31) >> 7;
    }
    else
    {
      v14 = *((_DWORD *)this + 31) >> 6;
    }
  }
  else
  {
    v14 = *((_DWORD *)this + 31) >> 5;
  }
LABEL_8:
  if ( ((unsigned __int8)v9 & (unsigned __int8)v14) != 0 )
  {
LABEL_9:
    *((_DWORD *)this + 29) = v2;
    return 0LL;
  }
LABEL_15:
  v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
  v21[3] = v2;
  v21[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v21[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v21);
  return 3223192326LL;
}
