/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0006E8C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqqqqqqqqqqqq @ 0x1C000D850 (McTemplateK0pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C007FD48 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  int v7; // r8d
  PERESOURCE *v8; // rax
  __int64 v9; // rdx
  PERESOURCE *v10; // rcx
  int v11; // eax
  PERESOURCE *v12; // rcx
  int v13; // eax
  DXGDODPRESENT *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 4624LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 4625LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = this[14];
  v9 = 470 * v4;
  *(_OWORD *)((char *)&v8[v9 + 126] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v8[v9 + 128] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v8[v9 + 130] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v8[v9 + 132] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v10 = this[14];
  v11 = HIDWORD(v10[470 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v10[v9 + 79]) = *(_DWORD *)a3 + v11;
    v12 = this[14];
    v13 = *((_DWORD *)a3 + 1) + LODWORD(v12[v9 + 79]);
  }
  else
  {
    HIDWORD(v10[v9 + 79]) = *((_DWORD *)a3 + 1) + v11;
    v12 = this[14];
    v13 = *(_DWORD *)a3 + LODWORD(v12[v9 + 79]);
  }
  LODWORD(v12[v9 + 80]) = v13;
  v14 = (DXGDODPRESENT *)this[33];
  if ( v14 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v14, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[14][v9 + 126] + 4));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      McTemplateK0pqqqqqqqqqqqq(
        *((_BYTE *)a3 + 36) & 1,
        v9 * 8,
        v7,
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
