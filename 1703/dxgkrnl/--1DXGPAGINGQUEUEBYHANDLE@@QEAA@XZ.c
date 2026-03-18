/*
 * XREFs of ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C0091C30 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0092C50 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00A36F0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00CAEC0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1C019C080 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1D74 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(
        DXGPAGINGQUEUEBYHANDLE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  _BYTE v10[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h]
  char v12; // [rsp+40h] [rbp-29h]
  _QWORD v13[3]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v14[8]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v15[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v16[56]; // [rsp+88h] [rbp+1Fh] BYREF

  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v5 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 48));
    if ( v5 < 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v6 + 24) = 67LL;
      WdLogEvent5_WdAssertion(v6);
    }
    if ( !v5 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v13,
        (struct DXGDEVICE *)v7);
      v8 = *(_QWORD *)(v7 + 16);
      v12 = 0;
      v11 = *(_QWORD *)(v8 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v14, v7, 2LL, v9, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v14);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v7, (struct DXGPAGINGQUEUE *)v4, (struct COREDEVICEACCESS *)v14);
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      COREACCESS::~COREACCESS((COREACCESS *)v15);
      if ( v12 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
      if ( v13[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v7 + 16), (struct DXGDEVICE *)v7);
    }
  }
}
