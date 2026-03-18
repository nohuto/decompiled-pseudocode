/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0199510
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     Template_pp @ 0x1C00385F4 (Template_pp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  ULONG64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  struct DXGDEVICE *v26; // rcx
  bool v27; // zf
  bool v28; // zf
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD v47[2]; // [rsp+60h] [rbp-128h] BYREF
  struct DXGADAPTERSYNCOBJECT *v48; // [rsp+70h] [rbp-118h] BYREF
  PVOID Object; // [rsp+78h] [rbp-110h] BYREF
  _BYTE v50[8]; // [rsp+80h] [rbp-108h] BYREF
  char v51; // [rsp+88h] [rbp-100h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-F8h]
  void *v53[2]; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned int v54[4]; // [rsp+B0h] [rbp-D8h] BYREF
  __int128 v55; // [rsp+C0h] [rbp-C8h]
  __int128 v56; // [rsp+D0h] [rbp-B8h]
  __int64 v57; // [rsp+E0h] [rbp-A8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F0h] [rbp-98h] BYREF
  _BYTE v59[136]; // [rsp+100h] [rbp-88h] BYREF
  int v60; // [rsp+198h] [rbp+10h]
  int v61; // [rsp+198h] [rbp+10h]
  struct DXGDEVICE *v62; // [rsp+1A0h] [rbp+18h] BYREF
  struct DXGDEVICE *v63; // [rsp+1A8h] [rbp+20h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C006E790;
    v12 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2086);
    return 3221225485LL;
  }
  v14 = v3;
  if ( v3 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v14;
  *(_OWORD *)v53 = *(_OWORD *)(v14 + 16);
  *(_OWORD *)v54 = *(_OWORD *)(v14 + 32);
  v55 = *(_OWORD *)(v14 + 48);
  v56 = *(_OWORD *)(v14 + 64);
  v57 = *(_QWORD *)(v14 + 80);
  LODWORD(v53[0]) = 0;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Handle, 12));
  v60 = v15;
  if ( (v15 & 0x7FFFFF00) != 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v6, v7);
    *(_QWORD *)(v16 + 24) = 938LL;
    WdLogEvent5_WdWarning(v16);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2086);
    return 3221225485LL;
  }
  if ( (v15 & 0x10) != 0 || (v15 & 0x20) != 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v6, v7);
    *(_QWORD *)(v19 + 24) = 945LL;
    WdLogEvent5_WdWarning(v19);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, LODWORD(Handle[1]), (struct _KTHREAD **)Current, &v63);
  v22 = (__int64)v63;
  if ( !v63 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v23 + 24) = LODWORD(Handle[1]);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    if ( v62 )
    {
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v11 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    }
    v12 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, v22, 0LL, v24, 0);
  LODWORD(v22) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v59);
  if ( (int)v22 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    if ( v47[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    v26 = v62;
    if ( !v62 )
      goto LABEL_32;
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_30;
  }
  v29 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v22 = v29;
  if ( v29 == -1073741788 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(HANDLE *)(v34 + 24) = Handle[0];
    LODWORD(v22) = -1073741788;
    *(_QWORD *)(v34 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    if ( v47[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    v26 = (struct DXGDEVICE *)qword_1C006E790;
    v28 = (qword_1C006E790 & 2) == 0;
    goto LABEL_33;
  }
  if ( v29 >= 0 )
  {
    v36 = v60 & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32
                                                                                     * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
    v48 = 0LL;
    Global = DXGGLOBAL::GetGlobal(v31, v30, v32, v33);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v50, Global, v38, v39);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v50);
    LODWORD(v22) = DXGSYNCOBJECT::Open(
                     *(DXGSYNCOBJECT **)Object,
                     *((struct ADAPTER_RENDER **)v63 + 2),
                     v63,
                     0LL,
                     (unsigned int *)v53,
                     &v53[1],
                     (unsigned __int64 *)v54,
                     v54[2],
                     &v48,
                     1,
                     (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v36);
    v61 = v22;
    if ( (int)v22 >= 0 )
    {
      if ( v51 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v50);
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Handle;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v53;
      *(_OWORD *)(v3 + 32) = *(_OWORD *)v54;
      *(_OWORD *)(v3 + 48) = v55;
      *(_OWORD *)(v3 + 64) = v56;
      *(_QWORD *)(v3 + 80) = v57;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
      v40 = (LODWORD(v53[0]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v40 < *((_DWORD *)Current + 52) )
      {
        v41 = *((_QWORD *)Current + 24);
        v42 = *(unsigned int *)(v41 + 16 * v40 + 8);
        if ( ((LODWORD(v53[0]) >> 26) & 0x30) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x30) && (v42 & 0xF) != 0 )
        {
          v22 = 2 * (((unsigned __int64)v53[0] >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v41 + 16 * (((unsigned __int64)v53[0] >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
          {
            v43 = WdLogNewEntry5_WdAssertion((LODWORD(v53[0]) >> 26) & 0x30, v42, v41, 0xFFFFFFLL);
            *(_QWORD *)(v43 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v43);
          }
          *(_DWORD *)(*((_QWORD *)Current + 24) + 8 * v22 + 8) &= ~0x1000u;
          LODWORD(v22) = v61;
        }
      }
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v46 = v48 ? *((_QWORD *)v48 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pp(v44, &EventOpenSyncObject, v45, v46, LODWORD(v53[0]));
      }
    }
    else if ( v51 )
    {
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v50);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    v35 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(HANDLE *)(v35 + 24) = Handle[0];
    *(_QWORD *)(v35 + 32) = v22;
    WdLogEvent5_WdWarning(v35);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
  if ( v47[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
  if ( v62 )
  {
    v26 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v27 = v26 == (struct DXGDEVICE *)1;
LABEL_30:
    if ( v27 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
  }
LABEL_32:
  v28 = (qword_1C006E790 & 2) == 0;
LABEL_33:
  if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v26, &EventProfilerExit, v25, 2086);
  return (unsigned int)v22;
}
