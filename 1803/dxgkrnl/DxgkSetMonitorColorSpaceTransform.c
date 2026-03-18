/*
 * XREFs of DxgkSetMonitorColorSpaceTransform @ 0x1C01581E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C000BB18 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0014CA0 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ColorSpaceTransformValidate @ 0x1C0049188 (ColorSpaceTransformValidate.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z @ 0x1C021516C (-DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z.c)
 */

__int64 __fastcall DxgkSetMonitorColorSpaceTransform(_OWORD *a1, __int64 a2, __int64 a3)
{
  float **v3; // r14
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  DXGK_GAMMA_RAMP *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  float *v27; // rdx
  float *v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // eax
  DXGADAPTER **v42; // r11
  int updated; // eax
  struct DXGPROCESS *Current; // rax
  char v45; // cl
  struct _LUID v46[2]; // [rsp+30h] [rbp-78h]
  __int128 v47; // [rsp+40h] [rbp-68h]
  _QWORD v48[10]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGADAPTER *v50; // [rsp+C0h] [rbp+18h]

  v3 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v46[0].LowPart = *a1;
  v47 = a1[1];
  v4 = HIDWORD(*a1);
  if ( v4 == 1 || v4 == 4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v46[0], &v49);
    v14 = v10;
    v50 = v10;
    if ( !v10 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v7[3] = v46[0].HighPart;
      v7[4] = v46[0].LowPart;
      LODWORD(v6) = -1073741811;
      v7[5] = -1073741811LL;
      v7[6] = 1LL;
      goto LABEL_6;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v10, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v14);
    if ( !*((_QWORD *)v14 + 307) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v18[5] = 2LL;
LABEL_12:
      LODWORD(v6) = -1073741811;
      v18[4] = -1073741811LL;
      v18[3] = v14;
LABEL_13:
      WdLogEvent5_WdWarning(v18);
LABEL_14:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      return (unsigned int)v6;
    }
    if ( (*((_DWORD *)v14 + 454) & 4) == 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v18[5] = 3LL;
      goto LABEL_12;
    }
    if ( v4 == 1 && *((_QWORD *)&v47 + 1) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      LODWORD(v6) = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = 4LL;
      goto LABEL_13;
    }
    if ( v4 != 4 )
      goto LABEL_59;
    if ( !*((_QWORD *)&v47 + 1) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      LODWORD(v6) = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = 5LL;
      goto LABEL_13;
    }
    if ( (_DWORD)v47 != 49204 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      LODWORD(v6) = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = 6LL;
      goto LABEL_13;
    }
    v19 = (DXGK_GAMMA_RAMP *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
    if ( v19 )
      v3 = (float **)DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v19);
    else
      v3 = 0LL;
    v49 = (unsigned __int64)v3;
    if ( !v3 )
    {
      LODWORD(v6) = -1073741801;
      v21 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
LABEL_52:
      if ( v3 )
        ReferenceCounted::Release((ReferenceCounted *)v3);
      Current = DXGPROCESS::GetCurrent(v23, v22);
      if ( Current )
      {
        v45 = *((_BYTE *)Current + 324);
        *((_BYTE *)Current + 324) = 1;
        if ( !v45 )
          DxgkLogCodePointPacket(0x5Eu, 4u, v6, 0, *(_QWORD *)((char *)v14 + 268));
      }
      goto LABEL_14;
    }
    v24 = DXGK_GAMMA_RAMP::Initialize((size_t *)v3, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    v6 = v24;
    if ( v24 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v26[3] = v6;
      v26[4] = 13LL;
LABEL_32:
      WdLogEvent5_WdError(v26);
      goto LABEL_52;
    }
    v27 = (float *)*((_QWORD *)&v47 + 1);
    v28 = v3[4];
    if ( *((_QWORD *)&v47 + 1) >= MmUserProbeAddress )
      v27 = (float *)MmUserProbeAddress;
    v29 = 384LL;
    do
    {
      *(_OWORD *)v28 = *(_OWORD *)v27;
      *((_OWORD *)v28 + 1) = *((_OWORD *)v27 + 1);
      *((_OWORD *)v28 + 2) = *((_OWORD *)v27 + 2);
      *((_OWORD *)v28 + 3) = *((_OWORD *)v27 + 3);
      *((_OWORD *)v28 + 4) = *((_OWORD *)v27 + 4);
      *((_OWORD *)v28 + 5) = *((_OWORD *)v27 + 5);
      *((_OWORD *)v28 + 6) = *((_OWORD *)v27 + 6);
      v28 += 32;
      *((_OWORD *)v28 - 1) = *((_OWORD *)v27 + 7);
      v27 += 32;
      --v29;
    }
    while ( v29 );
    *(_OWORD *)v28 = *(_OWORD *)v27;
    *((_OWORD *)v28 + 1) = *((_OWORD *)v27 + 1);
    *((_OWORD *)v28 + 2) = *((_OWORD *)v27 + 2);
    v28[12] = v27[12];
    v49 = 0x200000001LL;
    v30 = ColorSpaceTransformValidate(v3[4], (int *)&v49);
    v6 = v30;
    if ( v30 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v34[3] = v6;
      v34[4] = 9LL;
    }
    else
    {
LABEL_59:
      if ( *(_BYTE *)(*((_QWORD *)v14 + 307) + 134LL) )
        v35 = COREADAPTERACCESS::AcquireExclusive(v48);
      else
        v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48);
      LODWORD(v6) = v35;
      if ( v35 >= 0 )
      {
        LOBYTE(v49) = 0;
        v39 = DmmSetMonitorColorSpaceTransform(
                v14,
                v46[1].LowPart,
                (const struct DXGK_GAMMA_RAMP *)v3,
                (unsigned __int8 *)&v49);
        v6 = v39;
        if ( v39 >= 0 )
        {
          v41 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(*((ADAPTER_DISPLAY **)v14 + 307), v46[1].LowPart);
          if ( (_BYTE)v49
            || v41 == -1
            || (updated = ADAPTER_DISPLAY::UpdateGammaRamp(v42, v41), v6 = updated, updated >= 0) )
          {
            LODWORD(v6) = 0;
            goto LABEL_52;
          }
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
          v26[3] = v14;
          v26[4] = v6;
          v26[5] = 12LL;
        }
        else
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          v26[3] = v14;
          v26[4] = v6;
          v26[5] = 11LL;
        }
        goto LABEL_32;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
      v34[3] = v14;
      v34[4] = (int)v6;
      v34[5] = 10LL;
    }
    WdLogEvent5_WdWarning(v34);
    goto LABEL_52;
  }
  v5 = WdLogNewEntry5_WdWarning(a1, MmUserProbeAddress, a3);
  LODWORD(v6) = -1073741811;
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  v7 = (_QWORD *)v5;
LABEL_6:
  WdLogEvent5_WdWarning(v7);
  return (unsigned int)v6;
}
