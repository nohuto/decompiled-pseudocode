/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1C01AFF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C00287B0 (McTemplateK0ppp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0 (-DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  ULONG64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  struct DXGDEVICE *v24; // rcx
  bool v25; // zf
  bool v26; // zf
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  _QWORD v40[2]; // [rsp+60h] [rbp-128h] BYREF
  struct DXGADAPTERSYNCOBJECT *v41; // [rsp+70h] [rbp-118h] BYREF
  PVOID Object; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v43[8]; // [rsp+80h] [rbp-108h] BYREF
  char v44; // [rsp+88h] [rbp-100h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-F8h]
  void *v46[2]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v47[4]; // [rsp+B0h] [rbp-D8h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-C8h]
  __int128 v49; // [rsp+D0h] [rbp-B8h]
  __int64 v50; // [rsp+E0h] [rbp-A8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F0h] [rbp-98h] BYREF
  _BYTE v52[136]; // [rsp+100h] [rbp-88h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v53; // [rsp+198h] [rbp+10h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v54; // [rsp+198h] [rbp+10h]
  struct DXGDEVICE *v55; // [rsp+1A0h] [rbp+18h] BYREF
  struct DXGDEVICE *v56; // [rsp+1A8h] [rbp+20h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2086);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C005F010;
    v11 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v9, 2086);
    return 3221225485LL;
  }
  v13 = v3;
  if ( v3 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v13;
  *(_OWORD *)v46 = *(_OWORD *)(v13 + 16);
  *(_OWORD *)v47 = *(_OWORD *)(v13 + 32);
  v48 = *(_OWORD *)(v13 + 48);
  v49 = *(_OWORD *)(v13 + 64);
  v50 = *(_QWORD *)(v13 + 80);
  LODWORD(v46[0]) = 0;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Handle, 12));
  v53.hSyncObject = v14;
  if ( (v14 & 0x7FFFFF00) != 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v6);
    *(_QWORD *)(v15 + 24) = 1174LL;
    WdLogEvent5_WdWarning(v15);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, 2086);
    return 3221225485LL;
  }
  if ( (v14 & 0x10) != 0 || (v14 & 0x20) != 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v6);
    *(_QWORD *)(v18 + 24) = 1181LL;
    WdLogEvent5_WdWarning(v18);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v55,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v56);
  v20 = (__int64)v56;
  if ( !v56 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = LODWORD(Handle[1]);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    if ( v55 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    }
    v11 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v20, 0, v22, 0);
  LODWORD(v20) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v52);
  if ( (int)v20 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    v24 = v55;
    if ( !v55 )
      goto LABEL_32;
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_30;
  }
  v27 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v20 = v27;
  if ( v27 == -1073741788 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(HANDLE *)(v31 + 24) = Handle[0];
    LODWORD(v20) = -1073741788;
    *(_QWORD *)(v31 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v31);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    v24 = (struct DXGDEVICE *)qword_1C005F010;
    v26 = (qword_1C005F010 & 2) == 0;
    goto LABEL_33;
  }
  if ( v27 >= 0 )
  {
    v33 = v53.hSyncObject & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                                 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
    v41 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v29);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v43);
    LODWORD(v20) = DXGSYNCOBJECT::Open(
                     *(DXGSYNCOBJECT **)Object,
                     *((struct ADAPTER_RENDER **)v56 + 2),
                     v56,
                     0LL,
                     (unsigned int *)v46,
                     &v46[1],
                     (unsigned __int64 *)v47,
                     v47[2],
                     &v41,
                     1,
                     (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v33);
    v54.hSyncObject = v20;
    if ( (int)v20 >= 0 )
    {
      if ( v44 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
      if ( bTracingEnabled )
      {
        v36 = v41 ? *((_QWORD *)v41 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp((__int64)v56, &EventOpenSyncObject, v35, v36, LODWORD(v46[0]), v56);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      if ( v40[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Handle;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v46;
      *(_OWORD *)(v3 + 32) = *(_OWORD *)v47;
      *(_OWORD *)(v3 + 48) = v48;
      *(_OWORD *)(v3 + 64) = v49;
      *(_QWORD *)(v3 + 80) = v50;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
      v37 = (LODWORD(v46[0]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v37 < *((_DWORD *)Current + 60) )
      {
        v38 = *((_QWORD *)Current + 28);
        if ( ((LODWORD(v46[0]) >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
          && (*(_DWORD *)(v38 + 16 * v37 + 8) & 0x1F) != 0 )
        {
          v20 = 2 * (((unsigned __int64)v46[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v38 + 16 * (((unsigned __int64)v46[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v39 = WdLogNewEntry5_WdAssertion((LODWORD(v46[0]) >> 25) & 0x60);
            *(_QWORD *)(v39 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v39);
          }
          *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v20 + 8) &= ~0x2000u;
          LODWORD(v20) = v54;
        }
      }
      *((_QWORD *)Current + 26) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( v44 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      if ( v40[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(HANDLE *)(v32 + 24) = Handle[0];
    *(_QWORD *)(v32 + 32) = v20;
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
    if ( v40[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  }
  if ( v55 )
  {
    v24 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v25 = v24 == (struct DXGDEVICE *)1;
LABEL_30:
    if ( v25 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
  }
LABEL_32:
  v26 = (qword_1C005F010 & 2) == 0;
LABEL_33:
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v24, &EventProfilerExit, v23, 2086);
  return (unsigned int)v20;
}
