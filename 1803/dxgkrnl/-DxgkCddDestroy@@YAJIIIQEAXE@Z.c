/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00DC610
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C00DC830 (DxgkShutdownBootGraphics.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01D0E8C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, __int64 a3, char *a4, char a5)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // r15
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r13
  struct DXGDEVICE *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r9
  _QWORD v50[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v51[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v52; // [rsp+58h] [rbp-B0h]
  _QWORD v53[2]; // [rsp+60h] [rbp-A8h] BYREF
  char v54; // [rsp+70h] [rbp-98h]
  _QWORD v55[2]; // [rsp+78h] [rbp-90h] BYREF
  char v56; // [rsp+88h] [rbp-80h]
  _BYTE v57[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-70h]
  char v59; // [rsp+A0h] [rbp-68h]
  _QWORD v60[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v61[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v62[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v63[2]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v64[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v65[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v66[56]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v67[8]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v68[32]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v69[56]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v70[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v71[32]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v72[56]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v73[8]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE v74[32]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v75[56]; // [rsp+230h] [rbp+128h] BYREF

  v50[1] = 0LL;
  v6 = (unsigned int)a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  LODWORD(v50[0]) = 3001;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3001);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v50, 3001);
  if ( !a4 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v9);
LABEL_30:
    v22 = -1073741811;
    v26[3] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_24;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v12 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *((_DWORD *)Current + 62)
    && (v13 = *((_QWORD *)Current + 29),
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
        (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
    && (v14 & 0x2000) == 0
    && (v14 & 0x1F) == 3 )
  {
    v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
  }
  else
  {
    v15 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v26[4] = v8;
    v26[5] = Current;
    goto LABEL_30;
  }
  DxgkShutdownBootGraphics(v15, 0LL);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 268), (struct DXGDEVICE *)v15);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v17 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *((_DWORD *)Current + 62)
    && (v18 = *((_QWORD *)Current + 29),
        v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
        (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) == 7 )
  {
    v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
  }
  else
  {
    v20 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    if ( !(_DWORD)v6 )
    {
LABEL_20:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v47 = *(_QWORD *)(v20 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v63,
          (struct DXGDEVICE *)v47);
        v48 = *(_QWORD *)(v20 + 16);
        v59 = 0;
        v58 = *(_QWORD *)(*(_QWORD *)(v48 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, v47, 2, v49, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v73);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v47, (struct DXGCONTEXT *)v20, (struct COREDEVICEACCESS *)v73);
        COREACCESS::~COREACCESS((COREACCESS *)v75);
        COREACCESS::~COREACCESS((COREACCESS *)v74);
        if ( v59 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
        if ( v63[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v47 + 16), (struct DXGDEVICE *)v47);
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
      v22 = 0;
      goto LABEL_24;
    }
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v29 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *((_DWORD *)Current + 62)
      && (v30 = *((_QWORD *)Current + 29),
          v31 = *(_DWORD *)(v30 + 16 * v29 + 8),
          (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60))
      && (v31 & 0x2000) == 0
      && (v31 & 0x1F) == 0xF )
    {
      v32 = *(_QWORD *)(v30 + 16LL * (unsigned int)v29);
    }
    else
    {
      v32 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v32 )
    {
      v38 = _InterlockedDecrement64((volatile signed __int64 *)(v32 + 56));
      if ( v38 < 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v39 + 24) = 91LL;
        WdLogEvent5_WdAssertion(v39);
      }
      if ( !v38 )
      {
        v40 = *(_QWORD *)(v32 + 16);
        v41 = *(struct DXGDEVICE **)(v40 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61, v41);
        v42 = *((_QWORD *)v41 + 2);
        v54 = 0;
        v53[1] = *(_QWORD *)(v42 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v41, 2, v43, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v67);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 176LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v40, (struct DXGHWQUEUE *)v32, (struct COREDEVICEACCESS *)v67);
        COREACCESS::~COREACCESS((COREACCESS *)v69);
        COREACCESS::~COREACCESS((COREACCESS *)v68);
        if ( v54 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v53);
        if ( v61[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v44 = *(_QWORD *)(v40 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v62,
            (struct DXGDEVICE *)v44);
          v45 = *(_QWORD *)(v40 + 16);
          v56 = 0;
          v55[1] = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v44, 2, v46, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v70);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v44, (struct DXGCONTEXT *)v40, (struct COREDEVICEACCESS *)v70);
          COREACCESS::~COREACCESS((COREACCESS *)v72);
          COREACCESS::~COREACCESS((COREACCESS *)v71);
          if ( v56 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
          if ( v62[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v44 + 16), (struct DXGDEVICE *)v44);
        }
      }
      goto LABEL_20;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v22 = -1073741811;
    v34[3] = -1073741811LL;
    v34[4] = v6;
    v34[5] = Current;
    WdLogEvent5_WdError(v34);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v35 = *(_QWORD *)(v20 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v60,
        (struct DXGDEVICE *)v35);
      v36 = *(_QWORD *)(v20 + 16);
      v52 = 0;
      v51[1] = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, v35, 2, v37, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v64);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v35, (struct DXGCONTEXT *)v20, (struct COREDEVICEACCESS *)v64);
      COREACCESS::~COREACCESS((COREACCESS *)v66);
      COREACCESS::~COREACCESS((COREACCESS *)v65);
      if ( v52 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      if ( v60[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v35 + 16), (struct DXGDEVICE *)v35);
    }
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v22 = -1073741811;
    v28[3] = -1073741811LL;
    v28[4] = v7;
    v28[5] = Current;
    WdLogEvent5_WdError(v28);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v50);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v50[0]);
  return v22;
}
