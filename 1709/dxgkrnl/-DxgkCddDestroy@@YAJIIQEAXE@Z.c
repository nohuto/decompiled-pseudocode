/*
 * XREFs of ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00E64A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShutdownBootGraphics @ 0x1C00E87C0 (DxgkShutdownBootGraphics.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01CB260 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, __int64 a2, char *a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // esi
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r9
  _BYTE v29[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v30; // [rsp+40h] [rbp-51h]
  char v31; // [rsp+48h] [rbp-49h]
  _QWORD v32[3]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v33[8]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v34[32]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v35[56]; // [rsp+90h] [rbp-1h] BYREF

  v6 = (unsigned int)a2;
  v7 = (unsigned int)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 3001);
  if ( !a3 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(a1);
LABEL_33:
    v21 = -1073741811;
    v23[3] = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_25;
  }
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v24 + 24) = 293LL;
    WdLogEvent5_WdAssertion(v24);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v10 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)Current + 60)
    && (v11 = *((_QWORD *)Current + 28),
        v12 = *(_DWORD *)(v11 + 16 * v10 + 8),
        (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0
    && (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0x1F) == 3 )
  {
    v13 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v23[4] = v7;
    v23[5] = Current;
    goto LABEL_33;
  }
  DxgkShutdownBootGraphics(v13, 0LL);
  if ( a4 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a3 + 268), (struct DXGDEVICE *)v13);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v15 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)Current + 60)
    && (v16 = *((_QWORD *)Current + 28),
        v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
        (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0
    && (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x1F) == 7 )
  {
    v18 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v26 = *(_QWORD *)(v18 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v32,
        (struct DXGDEVICE *)v26);
      v27 = *(_QWORD *)(v18 + 16);
      v31 = 0;
      v30 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, v26, 2, v28, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v33);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v26, (struct DXGCONTEXT *)v18, (struct COREDEVICEACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      if ( v31 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      if ( v32[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v26 + 16), (struct DXGDEVICE *)v26);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
    v21 = 0;
  }
  else
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21 = -1073741811;
    v25[3] = -1073741811LL;
    v25[4] = v6;
    v25[5] = Current;
    WdLogEvent5_WdError(v25);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
  }
LABEL_25:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, 3001);
  return v21;
}
