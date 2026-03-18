/*
 * XREFs of ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C008ACA0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AC8C (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D3888 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DelayCreateCddAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        struct COREDEVICEACCESS *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // rax
  ADAPTER_DISPLAY *v28; // rbx
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int CddAllocations; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGADAPTER *v33; // rdx
  __int64 v34; // rax

  v7 = (unsigned int)a3;
  if ( (unsigned int)a3 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 944LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v16 + 24) = 945LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(this[2]) )
    return 3221225659LL;
  v17 = 3208 * v7;
  if ( *((_QWORD *)this[14] + 401 * v7 + 11) )
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
      v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      *(_QWORD *)(v22 + 24) = 966LL;
      WdLogEvent5_WdAssertion(v22);
    }
    COREDEVICEACCESS::Release(a6);
    v23 = COREDEVICEACCESS::AcquireExclusive((__int64)a6, 1LL);
    v26 = v23;
    if ( v23 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v27[3] = a2;
      v27[4] = v26;
LABEL_17:
      WdLogEvent5_WdError(v27);
      return (unsigned int)v26;
    }
  }
  v28 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 285);
  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(this, v7);
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(v28, a2, v7, DisplayModeInfo, a6);
  v26 = CddAllocations;
  if ( CddAllocations < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v27[3] = this[2];
    v27[4] = v7;
    v27[5] = v26;
    goto LABEL_17;
  }
  v33 = this[14];
  v34 = *(_QWORD *)((char *)v33 + v17 + 600);
  *a4 = *(_DWORD *)(*(_QWORD *)((char *)v33 + v17 + 88) + 16LL);
  *a5 = *(_DWORD *)(v34 + 16);
  return 0LL;
}
