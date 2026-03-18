/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00FB2EC
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00FB274 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001D90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  volatile signed __int64 *v5; // r14
  volatile signed __int64 *v6; // rdi
  __int64 v9; // r13
  struct DXGDEVICE *v10; // rax
  _QWORD *i; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  volatile signed __int64 *v16; // r12
  volatile signed __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  _QWORD v22[2]; // [rsp+40h] [rbp-C8h] BYREF
  char v23; // [rsp+50h] [rbp-B8h]
  _QWORD v24[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h]
  _QWORD v26[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v27[3]; // [rsp+80h] [rbp-88h] BYREF
  PERESOURCE *v28; // [rsp+98h] [rbp-70h] BYREF
  char v29[32]; // [rsp+A0h] [rbp-68h] BYREF
  char v30[56]; // [rsp+C0h] [rbp-48h] BYREF
  PERESOURCE *v31; // [rsp+F8h] [rbp-10h] BYREF
  char v32[32]; // [rsp+100h] [rbp-8h] BYREF
  char v33[56]; // [rsp+120h] [rbp+18h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp+50h] BYREF
  char v35; // [rsp+188h] [rbp+80h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v35 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v9 = *(_QWORD *)(v2 + 18592);
  if ( v9 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9 + 152, 0LL);
    *(_QWORD *)(v9 + 160) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v10 && v10 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18584LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 10); i != (_QWORD *)((char *)this + 80); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v5 = (volatile signed __int64 *)*((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = 0LL;
      v6 = v5;
      v3 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = 0LL;
      v4 = *((unsigned int *)this + 13);
    }
    *(_QWORD *)(v9 + 160) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 152, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)v4 > 1 )
    {
      v16 = v5;
      do
      {
        v17 = *v16;
        if ( *v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v18 = *(_QWORD *)(v17 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
            (struct DXGDEVICE *)v18);
          v19 = *(_QWORD *)(v17 + 16);
          v23 = 0;
          v22[1] = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v28, v18, 2LL, v20, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v28);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((PERESOURCE *)v18, (struct DXGCONTEXT *)v17, &v28, v21);
          COREACCESS::~COREACCESS((COREACCESS *)v30);
          COREACCESS::~COREACCESS((COREACCESS *)v29);
          if ( v23 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
          if ( v26[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
        }
        ++v16;
        --v4;
      }
      while ( v4 );
      if ( v5 )
        ExFreePoolWithTag((PVOID)v5, 0);
    }
    else if ( v6 && !_InterlockedDecrement64(v6 + 4) )
    {
      v12 = *((_QWORD *)v6 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v27,
        (struct DXGDEVICE *)v12);
      v13 = *((_QWORD *)v6 + 2);
      LOBYTE(v25) = 0;
      v24[1] = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v31, v12, 2LL, v14, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v31);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v12, (struct DXGCONTEXT *)v6, &v31, v15);
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      if ( (_BYTE)v25 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      if ( v27[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v12 + 64)) )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v12 + 16), (struct DXGDEVICE *)v12);
    }
    if ( v3 && !_InterlockedDecrement64((volatile signed __int64 *)(v3 + 64)) )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v3 + 16), (struct DXGDEVICE *)v3);
    if ( v35 )
      KeUnstackDetachProcess(&ApcState);
  }
}
