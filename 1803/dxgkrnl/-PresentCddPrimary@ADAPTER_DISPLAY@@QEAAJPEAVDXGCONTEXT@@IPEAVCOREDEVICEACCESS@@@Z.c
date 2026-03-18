/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01560D4
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0153F70 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0027DE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
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
  int v21; // eax
  _QWORD *v23; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[6]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v27[16]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a4 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 1483LL;
      WdLogEvent5_WdAssertion(v9);
    }
    COREDEVICEACCESS::Release(a4);
    v10 = COREDEVICEACCESS::AcquireExclusive((__int64)a4);
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
    memset(v25, 0, sizeof(v25));
    v16 = *((_QWORD *)CddPrimaryAllocation + 1);
    v23 = v25;
    v25[0] = *((_QWORD *)a2 + 23);
    v25[1] = *((_QWORD *)CddPrimaryAllocation + 2);
    v17 = *(_QWORD **)(*((_QWORD *)this + 2) + 2464LL);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *))(*(_QWORD *)(v17[68] + 8LL) + 216LL))(
      v17[69],
      v16,
      &v25[2],
      &v25[3]);
    memset(v27, 0, sizeof(v27));
    LODWORD(v27[2]) = 3;
    v24 = v27;
    HIDWORD(v27[3]) = 1;
    v27[4] = &v23;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)this, v5);
    *(_QWORD *)((char *)&v27[7] + 4) = 0LL;
    *(_QWORD *)((char *)&v27[8] + 4) = *(_QWORD *)&CddDisplayMode->Width;
    HIDWORD(v27[13]) = 1;
    *(_OWORD *)((char *)&v27[11] + 4) = *(_OWORD *)((char *)&v27[7] + 4);
    *(_OWORD *)((char *)&v27[9] + 4) = *(_OWORD *)((char *)&v27[7] + 4);
    memset(v26, 0, sizeof(v26));
    LODWORD(v26[0]) = v5;
    v26[2] = &v24;
    HIDWORD(v26[1]) = 1;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v17[65] + 8LL) + 832LL))(v17[66], v26);
    v12 = v19;
    if ( v19 < 0 || (v21 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, v5, 1u, 0x20u, 1u), v12 = v21, v21 < 0) )
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
