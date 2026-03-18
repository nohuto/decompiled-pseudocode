/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01722B0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000B508 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentCddPrimary(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r14
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v29; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v31[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v32[6]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[16]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a4 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = 1037LL;
      WdLogEvent5_WdAssertion(v12);
    }
    COREDEVICEACCESS::Release(a4);
    v13 = COREDEVICEACCESS::AcquireExclusive((__int64)a4, 1LL);
    v16 = v13;
    if ( v13 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v17[3] = *((_QWORD *)this + 2);
      v17[4] = v16;
LABEL_11:
      WdLogEvent5_WdError(v17);
      return (unsigned int)v16;
    }
  }
  CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation((DXGADAPTER **)this, (unsigned int)v5, 0LL, v11);
  if ( CddPrimaryAllocation )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD **)a2 + 2), 1);
    memset(v31, 0, sizeof(v31));
    v19 = *((_QWORD *)CddPrimaryAllocation + 1);
    v29 = v31;
    v31[0] = *((_QWORD *)a2 + 23);
    v31[1] = *((_QWORD *)CddPrimaryAllocation + 2);
    v20 = *(_QWORD **)(*((_QWORD *)this + 2) + 2288LL);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, _QWORD *))(*(_QWORD *)(v20[54] + 8LL) + 216LL))(
      v20[55],
      v19,
      &v31[2],
      &v31[3]);
    memset(v33, 0, sizeof(v33));
    LODWORD(v33[2]) |= 3u;
    v30 = v33;
    HIDWORD(v33[3]) = 1;
    v33[4] = &v29;
    CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)this, v5);
    *(_QWORD *)((char *)&v33[7] + 4) = 0LL;
    *(_QWORD *)((char *)&v33[8] + 4) = *(_QWORD *)&CddDisplayMode->Width;
    HIDWORD(v33[13]) = 1;
    *(_OWORD *)((char *)&v33[11] + 4) = *(_OWORD *)((char *)&v33[7] + 4);
    *(_OWORD *)((char *)&v33[9] + 4) = *(_OWORD *)((char *)&v33[7] + 4);
    memset(v32, 0, sizeof(v32));
    LODWORD(v32[0]) = v5;
    v32[2] = &v30;
    HIDWORD(v32[1]) = 1;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v20[51] + 8LL) + 720LL))(v20[52], v32);
    v16 = v22;
    if ( v22 < 0
      || (LOBYTE(v25) = 1,
          v26 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(this, (unsigned int)v5, v25, 32LL, 1u),
          v16 = v26,
          v26 < 0) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      v17[3] = v5;
      v27 = *((_QWORD *)this + 2);
      v17[5] = v16;
      v17[4] = v27;
      goto LABEL_11;
    }
  }
  else
  {
    LODWORD(v16) = -1073741811;
  }
  return (unsigned int)v16;
}
