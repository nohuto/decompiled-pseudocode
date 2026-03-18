/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C01BC230
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C00032B8 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001DF9C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BBAC8 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C01BBFF0 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  ULONG64 v14; // rax
  const void *v15; // r13
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // r12d
  struct DXGSYNCOBJECT *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // r8
  void *v26; // rdx
  __int64 v27; // rcx
  struct DXGDEVICE *v28; // r13
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r12
  __int64 v33; // rax
  struct DXGGLOBAL *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
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
  __int64 v53; // r8
  _DWORD *v54; // rdx
  PVOID v55; // rcx
  PERESOURCE *Global; // rax
  struct DXGPROCESS *Current; // [rsp+40h] [rbp-108h]
  PVOID v58; // [rsp+48h] [rbp-100h] BYREF
  PVOID P; // [rsp+50h] [rbp-F8h] BYREF
  PVOID v60; // [rsp+58h] [rbp-F0h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-E8h]
  size_t Size[2]; // [rsp+70h] [rbp-D8h]
  size_t NumberOfBytes; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v64[16]; // [rsp+88h] [rbp-C0h] BYREF
  void *v65; // [rsp+98h] [rbp-B0h]
  struct DXGDEVICE *v66; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v67[152]; // [rsp+B0h] [rbp-98h] BYREF
  char v69; // [rsp+158h] [rbp+10h] BYREF
  char v70; // [rsp+160h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v71; // [rsp+168h] [rbp+20h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 57LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2148);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C005F010;
    v12 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v10, 2148);
    return 3221225485LL;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v14;
  *(_OWORD *)Size = *(_OWORD *)(v14 + 16);
  NumberOfBytes = *(_QWORD *)(v14 + 32);
  HIDWORD(NumberOfBytes) = 0;
  v15 = Src[1];
  v16 = LODWORD(Size[0]);
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_22;
LABEL_18:
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    *(void **)(v17 + 24) = Src[1];
    v18 = (unsigned int)v16;
LABEL_19:
    *(_QWORD *)(v17 + 32) = v18;
LABEL_20:
    *(_QWORD *)(v17 + 40) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
LABEL_21:
    v12 = (qword_1C005F010 & 2) == 0;
    goto LABEL_8;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_18;
LABEL_22:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    v19 = LODWORD(Size[0]);
LABEL_24:
    *(_QWORD *)(v17 + 24) = v19;
    *(_QWORD *)(v17 + 32) = 0x2000000LL;
    goto LABEL_20;
  }
  v65 = (void *)Size[1];
  v20 = NumberOfBytes;
  if ( Size[1] )
  {
    if ( (_DWORD)NumberOfBytes )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( (_DWORD)NumberOfBytes )
  {
LABEL_29:
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    *(_QWORD *)(v17 + 24) = Size[1];
    v18 = v20;
    goto LABEL_19;
  }
LABEL_30:
  if ( (unsigned int)NumberOfBytes > 0x2000000 )
  {
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    v19 = (unsigned int)NumberOfBytes;
    goto LABEL_24;
  }
  P = 0LL;
  v60 = 0LL;
  v21 = 0LL;
  v71 = 0LL;
  v58 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    P = operator new(LODWORD(Size[0]), 0x4B677844u, PagedPool);
    if ( !P )
    {
LABEL_34:
      v23 = WdLogNewEntry5_WdLowResource(v22);
      *(_QWORD *)(v23 + 24) = v16;
      v24 = -1073741801;
      *(_QWORD *)(v23 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v23);
LABEL_88:
      v55 = v58;
      if ( v58 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(v58, HIDWORD(NumberOfBytes));
      if ( v21 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v55);
        DXGGLOBAL::DestroySyncObject(Global, v21, 0);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v60 )
        ExFreePoolWithTag(v60, 0);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v55, &EventProfilerExit, v25, 2148);
      return (unsigned int)v24;
    }
    if ( (char *)Src[1] + LODWORD(Size[0]) < Src[1] || (char *)Src[1] + LODWORD(Size[0]) > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(P, v15, v16);
  }
  if ( v20 )
  {
    v16 = v20;
    v60 = operator new(v20, 0x4B677844u, PagedPool);
    if ( !v60 )
      goto LABEL_34;
    v26 = v65;
    if ( (char *)v65 + v20 < v65 || (unsigned __int64)v65 + v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v60, v26, v20);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v69,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v66);
  v28 = v66;
  if ( !v66 )
  {
    v29 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v29 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v69);
    goto LABEL_21;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v70, v66);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v28, 1, v30, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67);
  if ( v24 < 0 )
  {
LABEL_48:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v70);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v69);
    goto LABEL_88;
  }
  v32 = *((_QWORD *)v28 + 209);
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v33 + 24) = v28;
    v24 = -1073741637;
    *(_QWORD *)(v33 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_48;
  }
  v34 = DXGGLOBAL::GetGlobal(v31);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, v34);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v35 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 < *((_DWORD *)Current + 60)
    && (v36 = *((_QWORD *)Current + 28), v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
                                         HIDWORD(Src[0]) >> 30 == ((v37 >> 5) & 3))
    && (v37 & 0x2000) == 0
    && (v37 & 0x1F) != 0
    && (*(_BYTE *)(v36 + 16LL * (unsigned int)v35 + 8) & 0x1F) == 0xB )
  {
    v38 = *(_QWORD *)(v36 + 16LL * (unsigned int)v35);
  }
  else
  {
    v38 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v38 )
    goto LABEL_59;
  if ( *(struct DXGDEVICE **)(v38 + 16) != v28 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v40[3] = HIDWORD(Src[0]);
    v41 = *(_QWORD *)(v38 + 16);
    v40[5] = v28;
    goto LABEL_60;
  }
  v71 = *(struct DXGSYNCOBJECT **)(v38 + 32);
  _InterlockedIncrement((volatile signed __int32 *)v71 + 6);
  v21 = v71;
  if ( *((_DWORD *)v71 + 40) != 5 )
  {
LABEL_59:
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v40[3] = Current;
    v41 = HIDWORD(Src[0]);
LABEL_60:
    v40[4] = v41;
LABEL_61:
    WdLogEvent5_WdError(v40);
    v24 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
    goto LABEL_48;
  }
  if ( (*((_DWORD *)v71 + 41) & 2) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v40[3] = v21;
    v40[4] = -1073741811LL;
    goto LABEL_61;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
  v24 = ADAPTER_DISPLAY::CreateProtectedSession(
          *(DXGADAPTER ***)(v32 + 2304),
          &v71,
          &P,
          Size[0],
          &v60,
          NumberOfBytes,
          (struct DXGPROTECTEDSESSION **)&v58);
  if ( v24 < 0 )
  {
    if ( v58 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v43 + 24) = 302LL;
      WdLogEvent5_WdAssertion(v43);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v70);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v69);
    v21 = v71;
    goto LABEL_88;
  }
  v21 = v71;
  if ( v71 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v44 + 24) = 309LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( P )
  {
    v45 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v45 + 24) = 310LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( v60 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v46 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v24 = DXGPROTECTEDSESSION::Open((DXGPROTECTEDSESSION *)v58, (unsigned int *)&NumberOfBytes + 1);
  if ( v24 < 0 )
    goto LABEL_48;
  v47 = _InterlockedExchangeAdd((volatile signed __int32 *)v58 + 18, 0xFFFFFFFF);
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v70);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v69);
  v54 = (_DWORD *)(a1 + 36);
  if ( a1 + 36 >= MmUserProbeAddress )
    v54 = (_DWORD *)MmUserProbeAddress;
  *v54 = v51;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(MmUserProbeAddress, &EventProfilerExit, v53, 2148);
  return 0LL;
}
