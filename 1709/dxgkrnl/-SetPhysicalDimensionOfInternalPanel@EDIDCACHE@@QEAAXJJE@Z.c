/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C01210C0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C0121038 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012113C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EDIDCACHE::SetPhysicalDimensionOfInternalPanel(EDIDCACHE *this, int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int updated; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rax

  *((_BYTE *)this + 624) = a4;
  v4 = a3;
  v5 = a2;
  *((_DWORD *)this + 155) = a3;
  *((_DWORD *)this + 154) = a2;
  updated = ZwUpdateWnfStateData(&DeviceObject.Queue, (char *)this + 616, 8LL, 0LL, 0LL, 0, 0);
  v9 = updated;
  if ( updated < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v11[3] = v9;
    v11[4] = v5;
    v11[5] = v4;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    v10 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v10 + 24) = v5;
    *(_QWORD *)(v10 + 32) = v4;
  }
}
