/*
 * XREFs of ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C001B6B0
 * Callers:
 *     DxgkDestroyHwQueue @ 0x1C01A5600 (DxgkDestroyHwQueue.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGHWQUEUE::ReleaseReference(DXGHWQUEUE *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  struct DXGDEVICE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  _BYTE v11[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h]
  _BYTE v14[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  char v16; // [rsp+58h] [rbp-A8h]
  _QWORD v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v22[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v23[32]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v24[56]; // [rsp+108h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement64((volatile signed __int64 *)this + 7);
  if ( v2 < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 91LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !v2 )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(struct DXGDEVICE **)(v4 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, v5);
    v6 = *((_QWORD *)v5 + 2);
    v13 = 0;
    v12 = *(_QWORD *)(v6 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)v5, 2, v7, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v19);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL) + 176LL) != 4 )
      DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v4, this, (struct COREDEVICEACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    if ( v13 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(v4 + 32)) )
    {
      v8 = *(_QWORD *)(v4 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v18,
        (struct DXGDEVICE *)v8);
      v9 = *(_QWORD *)(v4 + 16);
      v16 = 0;
      v15 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, v8, 2, v10, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v22);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v8, (struct DXGCONTEXT *)v4, (struct COREDEVICEACCESS *)v22);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      COREACCESS::~COREACCESS((COREACCESS *)v23);
      if ( v16 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
      if ( v18[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v8 + 64)) )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
    }
  }
}
