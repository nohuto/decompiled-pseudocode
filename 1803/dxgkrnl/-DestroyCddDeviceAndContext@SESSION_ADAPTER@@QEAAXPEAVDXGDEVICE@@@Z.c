/*
 * XREFs of ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01CF160
 * Callers:
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01CE5F0 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01D0E8C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::DestroyCddDeviceAndContext(SESSION_ADAPTER *this, struct DXGDEVICE *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v9; // r13
  struct DXGDEVICE *v10; // rax
  _QWORD *i; // rdi
  __int64 v12; // rcx
  __int64 *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdi
  struct DXGDEVICE *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r9
  _QWORD v30[2]; // [rsp+40h] [rbp-C8h] BYREF
  char v31; // [rsp+50h] [rbp-B8h]
  _QWORD v32[2]; // [rsp+58h] [rbp-B0h] BYREF
  char v33; // [rsp+68h] [rbp-A0h]
  _QWORD v34[2]; // [rsp+70h] [rbp-98h] BYREF
  char v35; // [rsp+80h] [rbp-88h]
  _BYTE v36[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h]
  char v38; // [rsp+98h] [rbp-70h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v40[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v41[2]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v42[3]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v43[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v44[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v45[56]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v46[8]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v47[32]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v48[56]; // [rsp+170h] [rbp+68h] BYREF
  PERESOURCE *v49; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v50[32]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v51[56]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v52[8]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE v53[32]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v54[56]; // [rsp+230h] [rbp+128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+268h] [rbp+160h] BYREF
  char v56; // [rsp+298h] [rbp+190h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v56 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v9 = *(_QWORD *)(v2 + 18600);
  if ( v9 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9 + 184, 0LL);
    *(_QWORD *)(v9 + 192) = KeGetCurrentThread();
    v10 = (struct DXGDEVICE *)*((_QWORD *)this + 7);
    if ( v10 && v10 == a2 )
    {
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18592LL));
      for ( i = (_QWORD *)*((_QWORD *)this + 11); i != (_QWORD *)((char *)this + 88); i = (_QWORD *)*i )
      {
        memset(i + 7, 0, 0x200uLL);
        i[71] = 0LL;
      }
      v5 = *((_QWORD *)this + 8);
      v6 = *((_QWORD *)this + 9);
      v3 = *((_QWORD *)this + 7);
      v4 = *((unsigned int *)this + 13);
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
    }
    *(_QWORD *)(v9 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)v4 <= 1 )
    {
      if ( v5 )
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v5 + 32)) )
        {
          v18 = *(_QWORD *)(v5 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
            (struct DXGDEVICE *)v18);
          v19 = *(_QWORD *)(v5 + 16);
          v33 = 0;
          v32[1] = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, v18, 2, v20, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v46);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((PERESOURCE *)v18, (struct DXGCONTEXT *)v5, (struct COREDEVICEACCESS *)v46);
          COREACCESS::~COREACCESS((COREACCESS *)v48);
          COREACCESS::~COREACCESS((COREACCESS *)v47);
          if ( v33 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
          if ( v40[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(v18 + 64)) )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
        }
        if ( v6 )
        {
          v21 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 56));
          if ( v21 < 0 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v12);
            *(_QWORD *)(v22 + 24) = 91LL;
            WdLogEvent5_WdAssertion(v22);
          }
          if ( !v21 )
          {
            v23 = *(_QWORD *)(v6 + 16);
            v24 = *(struct DXGDEVICE **)(v23 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v24);
            v25 = *((_QWORD *)v24 + 2);
            v35 = 0;
            v34[1] = *(_QWORD *)(v25 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v49, (__int64)v24, 2, v26, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v49);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 176LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v23, (struct DXGHWQUEUE *)v6, &v49);
            COREACCESS::~COREACCESS((COREACCESS *)v51);
            COREACCESS::~COREACCESS((COREACCESS *)v50);
            if ( v35 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
            if ( v41[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)(v23 + 32)) )
            {
              v27 = *(_QWORD *)(v23 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
                (struct DXGDEVICE *)v27);
              v28 = *(_QWORD *)(v23 + 16);
              v38 = 0;
              v37 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v27, 2, v29, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v52);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 176LL) != 4 )
                DXGDEVICE::DestroyContext((PERESOURCE *)v27, (struct DXGCONTEXT *)v23, (struct COREDEVICEACCESS *)v52);
              COREACCESS::~COREACCESS((COREACCESS *)v54);
              COREACCESS::~COREACCESS((COREACCESS *)v53);
              if ( v38 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
              if ( v42[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)(v27 + 64)) )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
            }
          }
        }
      }
    }
    else
    {
      v13 = (__int64 *)v5;
      do
      {
        v14 = *v13;
        if ( *v13 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v15 = *(_QWORD *)(v14 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v39,
            (struct DXGDEVICE *)v15);
          v16 = *(_QWORD *)(v14 + 16);
          v31 = 0;
          v30[1] = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, v15, 2, v17, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v43);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((PERESOURCE *)v15, (struct DXGCONTEXT *)v14, (struct COREDEVICEACCESS *)v43);
          COREACCESS::~COREACCESS((COREACCESS *)v45);
          COREACCESS::~COREACCESS((COREACCESS *)v44);
          if ( v31 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
          if ( v39[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
        }
        ++v13;
        --v4;
      }
      while ( v4 );
      operator delete[]((void *)v5);
    }
    if ( v3 && !_InterlockedDecrement64((volatile signed __int64 *)(v3 + 64)) )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v3 + 16), (struct DXGDEVICE *)v3);
    if ( v56 )
      KeUnstackDetachProcess(&ApcState);
  }
}
