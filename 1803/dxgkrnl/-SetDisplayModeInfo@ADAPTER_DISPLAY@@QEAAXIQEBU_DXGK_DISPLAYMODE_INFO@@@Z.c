/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C002C6C8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00DC9B0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqqqqqqqqqqqq @ 0x1C0028424 (McTemplateK0pqqqqqqqqqqqq.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01D7580 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        PERESOURCE **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  PERESOURCE *v11; // rax
  __int64 v12; // rdi
  PERESOURCE *v13; // rcx
  int v14; // eax
  PERESOURCE *v15; // rcx
  int v16; // eax
  DXGDODPRESENT *v17; // rcx
  bool v18; // zf

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 4966LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 4967LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = this[14];
  v12 = 470 * v4;
  *(_OWORD *)((char *)&v11[v12 + 126] + 4) = *(_OWORD *)a3;
  *(_OWORD *)((char *)&v11[v12 + 128] + 4) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)&v11[v12 + 130] + 4) = *((_OWORD *)a3 + 2);
  *(PERESOURCE *)((char *)&v11[v12 + 132] + 4) = (PERESOURCE)*((_QWORD *)a3 + 6);
  v13 = this[14];
  v14 = HIDWORD(v13[470 * v4 + 78]);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v13[v12 + 79]) = *(_DWORD *)a3 + v14;
    v15 = this[14];
    v16 = *((_DWORD *)a3 + 1) + LODWORD(v15[v12 + 79]);
  }
  else
  {
    HIDWORD(v13[v12 + 79]) = *((_DWORD *)a3 + 1) + v14;
    v15 = this[14];
    v16 = *(_DWORD *)a3 + LODWORD(v15[v12 + 79]);
  }
  LODWORD(v15[v12 + 80]) = v16;
  v17 = (DXGDODPRESENT *)this[33];
  if ( v17 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v17, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)&this[14][v12 + 126] + 4));
  v18 = bTracingEnabled == 0;
  LODWORD(this[14][v12 + 138]) = -1;
  HIDWORD(this[14][v12 + 138]) = -1;
  if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    McTemplateK0pqqqqqqqqqqqq(
      *((_BYTE *)a3 + 36) & 1,
      v6,
      v8,
      this,
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
