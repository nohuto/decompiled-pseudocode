/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C01BAD20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0002664 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0016B88 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BA598 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BA850 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C01BAA88 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG64 v14; // rax
  char *v15; // r13
  size_t v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  size_t v20; // r14
  unsigned int v21; // r12d
  struct DXGSYNCOBJECT *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edi
  void *v26; // rdx
  __int64 v27; // rcx
  struct DXGDEVICE *v28; // r13
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r12
  __int64 v33; // rax
  PERESOURCE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int v37; // ecx
  __int64 v38; // rdi
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  signed __int32 v47; // ecx
  bool v48; // cc
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // edi
  __int64 v52; // rax
  _DWORD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  PVOID v56; // rcx
  PERESOURCE *Global; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // [rsp+40h] [rbp-108h] BYREF
  __int64 v61; // [rsp+48h] [rbp-100h]
  PVOID P; // [rsp+50h] [rbp-F8h] BYREF
  void *v63; // [rsp+58h] [rbp-F0h] BYREF
  void *v64; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v65[16]; // [rsp+68h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-D0h]
  size_t Size[2]; // [rsp+88h] [rbp-C0h]
  size_t NumberOfBytes; // [rsp+98h] [rbp-B0h] BYREF
  _BYTE v69[16]; // [rsp+A0h] [rbp-A8h] BYREF
  void *v70; // [rsp+B0h] [rbp-98h]
  struct DXGDEVICE *v71; // [rsp+B8h] [rbp-90h] BYREF
  _BYTE v72[136]; // [rsp+C0h] [rbp-88h] BYREF
  char v74; // [rsp+158h] [rbp+10h] BYREF
  struct DXGSYNCOBJECT *v75; // [rsp+160h] [rbp+18h] BYREF
  struct DXGPROCESS *Current; // [rsp+168h] [rbp+20h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v61 = 0LL;
  v60 = 2148;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2148);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2148);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v60);
    return 3221225485LL;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v14;
  *(_OWORD *)Size = *(_OWORD *)(v14 + 16);
  NumberOfBytes = *(_QWORD *)(v14 + 32);
  HIDWORD(NumberOfBytes) = 0;
  v15 = (char *)Src[1];
  v16 = LODWORD(Size[0]);
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_21;
LABEL_18:
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9);
    v17[3] = v15;
    v18 = (unsigned int)v16;
LABEL_19:
    v17[4] = v18;
LABEL_20:
    v17[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_8;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_18;
LABEL_21:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9);
    v19 = (unsigned int)v16;
LABEL_23:
    v17[3] = v19;
    v17[4] = 0x2000000LL;
    goto LABEL_20;
  }
  v20 = Size[1];
  v70 = (void *)Size[1];
  v21 = NumberOfBytes;
  if ( Size[1] )
  {
    if ( (_DWORD)NumberOfBytes )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( (_DWORD)NumberOfBytes )
  {
LABEL_28:
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9);
    v17[3] = v20;
    v18 = v21;
    goto LABEL_19;
  }
LABEL_29:
  if ( (unsigned int)NumberOfBytes > 0x2000000 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9);
    v19 = v21;
    goto LABEL_23;
  }
  v63 = 0LL;
  v64 = 0LL;
  v22 = 0LL;
  v75 = 0LL;
  P = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v63 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    if ( !v63 )
    {
LABEL_33:
      v24 = WdLogNewEntry5_WdLowResource(v23);
      *(_QWORD *)(v24 + 24) = v16;
      v25 = -1073741801;
      *(_QWORD *)(v24 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v24);
LABEL_86:
      v56 = P;
      if ( P )
        DXGPROTECTEDSESSION::DestroyProtectedSession(P, HIDWORD(NumberOfBytes));
      if ( v22 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v56);
        DXGGLOBAL::DestroySyncObject(Global, v22, 0);
      }
      if ( v63 )
        operator delete[](v63);
      if ( v64 )
        operator delete[](v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v58, &EventProfilerExit, v59, v60);
      return (unsigned int)v25;
    }
    if ( &v15[v16] < v15 || (unsigned __int64)&v15[v16] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v63, v15, v16);
  }
  if ( v21 )
  {
    v16 = v21;
    v64 = operator new[](v21, 0x4B677844u, PagedPool);
    if ( !v64 )
      goto LABEL_33;
    v26 = v70;
    if ( (char *)v70 + v21 < v70 || (unsigned __int64)v70 + v21 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v64, v26, v21);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v74,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v71);
  v28 = v71;
  if ( !v71 )
  {
    v29 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v29 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
    goto LABEL_8;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v65, v71);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)v28, 1, v30, 0);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72);
  if ( v25 < 0 )
  {
LABEL_47:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v65);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
    goto LABEL_86;
  }
  v32 = *((_QWORD *)v28 + 211);
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v33 + 24) = v28;
    v25 = -1073741637;
    *(_QWORD *)(v33 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_47;
  }
  v34 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v31);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v69, v34);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v69);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v35 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 < *((_DWORD *)Current + 62)
    && (v36 = *((_QWORD *)Current + 29), v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
                                         HIDWORD(Src[0]) >> 30 == ((v37 >> 5) & 3))
    && (v37 & 0x2000) == 0
    && (v37 & 0x1F) == 0xB )
  {
    v38 = *(_QWORD *)(v36 + 16LL * (unsigned int)v35);
  }
  else
  {
    v38 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v38 )
    goto LABEL_57;
  if ( *(struct DXGDEVICE **)(v38 + 16) != v28 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v40[3] = HIDWORD(Src[0]);
    v41 = *(_QWORD *)(v38 + 16);
    v40[5] = v28;
    goto LABEL_58;
  }
  v75 = *(struct DXGSYNCOBJECT **)(v38 + 32);
  _InterlockedIncrement((volatile signed __int32 *)v75 + 6);
  v22 = v75;
  if ( *((_DWORD *)v75 + 42) != 5 )
  {
LABEL_57:
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v40[3] = Current;
    v41 = HIDWORD(Src[0]);
LABEL_58:
    v40[4] = v41;
LABEL_59:
    WdLogEvent5_WdError(v40);
    v25 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v69);
    goto LABEL_47;
  }
  if ( (*((_DWORD *)v75 + 43) & 2) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v40[3] = v22;
    v40[4] = -1073741811LL;
    goto LABEL_59;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v69);
  v25 = ADAPTER_DISPLAY::CreateProtectedSession(
          *(DXGADAPTER ***)(v32 + 2456),
          &v75,
          &v63,
          Size[0],
          &v64,
          NumberOfBytes,
          (struct DXGPROTECTEDSESSION **)&P);
  if ( v25 < 0 )
  {
    if ( P )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v43 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v43);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v65);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
    v22 = v75;
    goto LABEL_86;
  }
  v22 = v75;
  if ( v75 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v44 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v63 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v45 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( v64 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v46 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v25 = DXGPROTECTEDSESSION::Open((DXGPROTECTEDSESSION *)P, (unsigned int *)&NumberOfBytes + 1);
  if ( v25 < 0 )
    goto LABEL_47;
  v47 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF);
  v48 = v47 <= 1;
  v49 = (unsigned int)(v47 - 1);
  if ( v48 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v49);
    *(_QWORD *)(v50 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v51 = HIDWORD(NumberOfBytes);
  if ( !HIDWORD(NumberOfBytes) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v49);
    *(_QWORD *)(v52 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v52);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v65);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v74);
  v53 = (_DWORD *)(a1 + 36);
  if ( a1 + 36 >= MmUserProbeAddress )
    v53 = (_DWORD *)MmUserProbeAddress;
  *v53 = v51;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v54, &EventProfilerExit, v55, v60);
  return 0LL;
}
