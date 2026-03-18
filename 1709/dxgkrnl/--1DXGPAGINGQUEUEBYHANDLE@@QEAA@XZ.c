/*
 * XREFs of ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0014DC8
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkReclaimAllocations2 @ 0x1C00EA1E0 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C00EBAF0 (DxgkMapGpuVirtualAddress.c)
 *     DxgkUpdateAllocationProperty @ 0x1C01B2B50 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00954A0 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(DXGPAGINGQUEUEBYHANDLE *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  _BYTE v7[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h]
  char v9; // [rsp+40h] [rbp-29h]
  _QWORD v10[3]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v11[8]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v12[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v13[56]; // [rsp+88h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(v1 + 48));
    if ( v2 < 0 )
    {
      v3 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v3 + 24) = 67LL;
      WdLogEvent5_WdAssertion(v3);
    }
    if ( !v2 )
    {
      v4 = *(_QWORD *)(v1 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v10,
        (struct DXGDEVICE *)v4);
      v5 = *(_QWORD *)(v4 + 16);
      v9 = 0;
      v8 = *(_QWORD *)(v5 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v11, v4, 2, v6, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v11);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v4, (struct DXGPAGINGQUEUE *)v1, (struct COREDEVICEACCESS *)v11);
      COREACCESS::~COREACCESS((COREACCESS *)v13);
      COREACCESS::~COREACCESS((COREACCESS *)v12);
      if ( v9 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
      if ( v10[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
    }
  }
}
