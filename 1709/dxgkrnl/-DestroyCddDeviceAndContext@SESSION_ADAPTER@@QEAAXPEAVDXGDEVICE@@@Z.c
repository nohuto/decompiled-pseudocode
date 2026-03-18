/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00B3394
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00B331C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01CB260 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // r15
  struct DXGDEVICE *v9; // rax
  _QWORD *i; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r9
  _QWORD v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  char v21; // [rsp+50h] [rbp-B8h]
  _QWORD v22[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  _QWORD v24[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v25[3]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v26[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v27[32]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v28[56]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v29[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v30[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v31[56]; // [rsp+120h] [rbp+18h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp+50h] BYREF
  char v33; // [rsp+188h] [rbp+80h]

  v2 = *(_QWORD *)this;
  v33 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(v2 + 18600);
  if ( v8 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8 + 176, 0LL);
    *(_QWORD *)(v8 + 184) = KeGetCurrentThread();
    v9 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v9 && v9 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18592LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 10); i != (_QWORD *)((char *)this + 80); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v7 = *((_QWORD *)this + 8);
      v5 = *((_QWORD *)this + 7);
      v6 = *((_DWORD *)this + 13);
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v8 + 184) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 176, 0LL);
    KeLeaveCriticalRegion();
    if ( v6 > 1 )
    {
      v14 = (__int64 *)v7;
      v15 = v6;
      do
      {
        v16 = *v14;
        if ( *v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v17 = *(_QWORD *)(v16 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v24,
            (struct DXGDEVICE *)v17);
          v18 = *(_QWORD *)(v16 + 16);
          v21 = 0;
          v20[1] = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, v17, 2, v19, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((PERESOURCE *)v17, (struct DXGCONTEXT *)v16, (struct COREDEVICEACCESS *)v26);
          COREACCESS::~COREACCESS((COREACCESS *)v28);
          COREACCESS::~COREACCESS((COREACCESS *)v27);
          if ( v21 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
          if ( v24[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
        }
        ++v14;
        --v15;
      }
      while ( v15 );
      if ( v7 )
        ExFreePoolWithTag((PVOID)v7, 0);
    }
    else if ( v7 && !_InterlockedDecrement64((volatile signed __int64 *)(v7 + 32)) )
    {
      v11 = *(_QWORD *)(v7 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v25,
        (struct DXGDEVICE *)v11);
      v12 = *(_QWORD *)(v7 + 16);
      LOBYTE(v23) = 0;
      v22[1] = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, v11, 2, v13, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v29);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v11, (struct DXGCONTEXT *)v7, (struct COREDEVICEACCESS *)v29);
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      if ( (_BYTE)v23 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
      if ( v25[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v11 + 64)) )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
    }
    if ( v5 && !_InterlockedDecrement64((volatile signed __int64 *)(v5 + 64)) )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    if ( v33 )
      KeUnstackDetachProcess(&ApcState);
  }
}
