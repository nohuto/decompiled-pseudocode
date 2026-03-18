/*
 * XREFs of ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000B3F8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddDisplayMode(
        PERESOURCE **this,
        unsigned int a2,
        const struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = 4423LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = 4424LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v10 = this[14];
  v11 = 401 * v4;
  *(_OWORD *)&v10[v11 + 116] = *(_OWORD *)&a3->Width;
  *(_OWORD *)&v10[v11 + 118] = *(_OWORD *)&a3->RefreshRate.Numerator;
  v10[v11 + 120] = *(PERESOURCE *)&a3->DisplayFixedOutput;
  LODWORD(v10[v11 + 121]) = *((_DWORD *)&a3->Flags + 1);
}
