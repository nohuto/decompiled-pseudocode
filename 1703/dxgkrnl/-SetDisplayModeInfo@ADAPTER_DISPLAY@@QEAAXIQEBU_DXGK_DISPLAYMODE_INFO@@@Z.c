/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C000AF88
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_pqqqqqqqqqqqq @ 0x1C00230D8 (Template_pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01B6A94 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PERESOURCE *v10; // rax
  __int64 v11; // rdx
  PERESOURCE *v12; // rcx
  int v13; // eax
  PERESOURCE *v14; // rcx
  int v15; // eax
  DXGDODPRESENT *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v17 + 24) = 4457LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v18 + 24) = 4458LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = this[14];
  v11 = 401 * v4;
  *(_OWORD *)((char *)&v10[v11 + 121] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v10[v11 + 123] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v10[v11 + 125] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v10[v11 + 127] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v12 = this[14];
  v13 = HIDWORD(v12[401 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v12[v11 + 79]) = *(_DWORD *)a3 + v13;
    v14 = this[14];
    v15 = *((_DWORD *)a3 + 1) + LODWORD(v14[v11 + 79]);
  }
  else
  {
    HIDWORD(v12[v11 + 79]) = *((_DWORD *)a3 + 1) + v13;
    v14 = this[14];
    v15 = *(_DWORD *)a3 + LODWORD(v14[v11 + 79]);
  }
  LODWORD(v14[v11 + 80]) = v15;
  v16 = (DXGDODPRESENT *)this[33];
  if ( v16 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v16, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[14][v11 + 121] + 4));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      Template_pqqqqqqqqqqqq(
        *((_BYTE *)a3 + 36) & 1,
        v11 * 8,
        v8,
        (_DWORD)this,
        v4,
        *(_DWORD *)a3,
        *((_DWORD *)a3 + 1),
        *((_DWORD *)a3 + 2),
        *((_DWORD *)a3 + 4),
        *((_DWORD *)a3 + 5),
        *((_DWORD *)a3 + 6),
        *((_DWORD *)a3 + 7),
        *((_DWORD *)a3 + 8),
        *((_BYTE *)a3 + 36) & 1,
        *((_DWORD *)a3 + 11),
        *((_DWORD *)a3 + 12));
  }
}
