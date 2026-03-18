/*
 * XREFs of ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0096940
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     DxgkShutdownBootGraphics @ 0x1C0098E90 (DxgkShutdownBootGraphics.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, char *a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // esi
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r9
  _BYTE v36[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v37; // [rsp+40h] [rbp-51h]
  char v38; // [rsp+48h] [rbp-49h]
  _QWORD v39[3]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v40[8]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v41[32]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v42[56]; // [rsp+90h] [rbp-1h] BYREF

  v6 = a2;
  v7 = (unsigned int)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3001);
  DxgkShutdownBootGraphics(a3, (unsigned int)v7);
  if ( !a3 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
LABEL_33:
    v28 = -1073741811;
    v30[3] = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_25;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
    *(_QWORD *)(v31 + 24) = 305LL;
    WdLogEvent5_WdAssertion(v31);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v15 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)Current + 52)
    && (v16 = *((_QWORD *)Current + 24),
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
        (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 3 )
  {
    v18 = *(_QWORD *)(v16 + 16LL * v15);
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v30[4] = v7;
    v30[5] = Current;
    goto LABEL_33;
  }
  if ( a4 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a3 + 268), (struct DXGDEVICE *)v18);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v21 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)Current + 52)
    && (v22 = *((_QWORD *)Current + 24),
        v23 = *(_DWORD *)(v22 + 16LL * v21 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30))
    && (v23 & 0x1000) == 0
    && (v23 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) == 7 )
  {
    v24 = *(_QWORD *)(v22 + 16LL * v21);
  }
  else
  {
    v24 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v33 = *(_QWORD *)(v24 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v39,
        (struct DXGDEVICE *)v33);
      v34 = *(_QWORD *)(v24 + 16);
      v38 = 0;
      v37 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, v33, 2LL, v35, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v40);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v33, (struct DXGCONTEXT *)v24, (struct COREDEVICEACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      COREACCESS::~COREACCESS((COREACCESS *)v41);
      if ( v38 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      if ( v39[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v33 + 16), (struct DXGDEVICE *)v33);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
    v28 = 0;
  }
  else
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v28 = -1073741811;
    v32[3] = -1073741811LL;
    v32[4] = v6;
    v32[5] = Current;
    WdLogEvent5_WdError(v32);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
  }
LABEL_25:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 3001);
  return v28;
}
