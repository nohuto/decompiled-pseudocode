/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0174900 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C00076C8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentCddPrimary(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r14
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  _QWORD *v24; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[6]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[16]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a4 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 1482LL;
      WdLogEvent5_WdAssertion(v9);
    }
    COREDEVICEACCESS::Release(a4);
    v10 = COREDEVICEACCESS::AcquireExclusive((__int64)a4, 1LL);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v13[3] = *((_QWORD *)this + 2);
      v13[4] = v12;
LABEL_14:
      WdLogEvent5_WdError(v13);
      return (unsigned int)v12;
    }
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v5) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v12 = -1071775738LL;
LABEL_13:
    v13[3] = v5;
    v13[4] = *((_QWORD *)this + 2);
    v13[5] = v12;
    goto LABEL_14;
  }
  CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation((DXGADAPTER **)this, v5, 0);
  if ( CddPrimaryAllocation )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD **)a2 + 2), 1u);
    memset(v26, 0, sizeof(v26));
    v16 = *((_QWORD *)CddPrimaryAllocation + 1);
    v24 = v26;
    v26[0] = *((_QWORD *)a2 + 23);
    v26[1] = *((_QWORD *)CddPrimaryAllocation + 2);
    v17 = *(_QWORD **)(*((_QWORD *)this + 2) + 2312LL);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *))(*(_QWORD *)(v17[66] + 8LL) + 216LL))(
      v17[67],
      v16,
      &v26[2],
      &v26[3]);
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[2]) |= 3u;
    v25 = v28;
    HIDWORD(v28[3]) = 1;
    v28[4] = &v24;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)this, v5);
    *(_QWORD *)((char *)&v28[7] + 4) = 0LL;
    *(_QWORD *)((char *)&v28[8] + 4) = *(_QWORD *)&CddDisplayMode->Width;
    HIDWORD(v28[13]) = 1;
    *(_OWORD *)((char *)&v28[11] + 4) = *(_OWORD *)((char *)&v28[7] + 4);
    *(_OWORD *)((char *)&v28[9] + 4) = *(_OWORD *)((char *)&v28[7] + 4);
    memset(v27, 0, sizeof(v27));
    LODWORD(v27[0]) = v5;
    v27[2] = &v25;
    HIDWORD(v27[1]) = 1;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v17[63] + 8LL) + 720LL))(v17[64], v27);
    v12 = v19;
    if ( v19 < 0
      || (LOBYTE(v21) = 1, v22 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, v5, v21, 32, 1u), v12 = v22, v22 < 0) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      goto LABEL_13;
    }
  }
  else
  {
    LODWORD(v12) = -1073741811;
  }
  return (unsigned int)v12;
}
