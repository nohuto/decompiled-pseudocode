/*
 * XREFs of ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DCE0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006D44 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DelayCreateCddAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        struct COREDEVICEACCESS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  ADAPTER_DISPLAY *v21; // rbx
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int CddAllocations; // eax
  __int64 v24; // rcx

  v7 = a3;
  if ( a3 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 1389LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 1390LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(this[2]) )
    return 3221225659LL;
  v14 = 3760 * v7;
  if ( *((_QWORD *)this[14] + 470 * v7 + 11) )
  {
    if ( !ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)this, v7) )
      return 3221225659LL;
  }
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v7)
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v7) != 3 )
  {
    return 3221225659LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    if ( !a6 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v16 + 24) = 1411LL;
      WdLogEvent5_WdAssertion(v16);
    }
    COREDEVICEACCESS::Release(a6);
    v17 = COREDEVICEACCESS::AcquireExclusive((__int64)a6, 1LL);
    v19 = v17;
    if ( v17 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v20[3] = a2;
      v20[4] = v19;
LABEL_17:
      WdLogEvent5_WdError(v20);
      return (unsigned int)v19;
    }
  }
  v21 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 288);
  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(this, v7);
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(v21, a2, v7, DisplayModeInfo, a6);
  v19 = CddAllocations;
  if ( CddAllocations < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v20[3] = this[2];
    v20[4] = v7;
    v20[5] = v19;
    goto LABEL_17;
  }
  *a4 = *(_DWORD *)(*(_QWORD *)((char *)this[14] + v14 + 88) + 16LL);
  *a5 = *(_DWORD *)(*(_QWORD *)((char *)this[14] + v14 + 600) + 16LL);
  return 0LL;
}
