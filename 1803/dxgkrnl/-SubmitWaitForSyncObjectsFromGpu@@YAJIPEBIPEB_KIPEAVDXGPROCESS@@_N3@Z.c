/*
 * XREFs of ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C01A4960
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C01A72C0 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00097E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C001A428 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C00330DC (McTemplateK0pqPR1XR1.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D1EB4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall SubmitWaitForSyncObjectsFromGpu(
        unsigned int a1,
        const unsigned int *a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        struct _KTHREAD **a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGHWQUEUE *v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  PERESOURCE *Global; // rax
  const unsigned int *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // ebx
  struct _KTHREAD *v23; // r8
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  unsigned int v28; // ebx
  __int64 v29; // rax
  unsigned int v30; // ebx
  struct _KTHREAD *v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rcx
  struct _VIDSCH_SYNC_OBJECT *v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _BYTE *v39; // rcx
  PVOID v40; // rcx
  size_t v41; // r8
  unsigned int v42; // esi
  const unsigned __int64 *v43; // r12
  _BYTE *v44; // rax
  struct DXGSYNCOBJECT *v45; // rbx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // [rsp+20h] [rbp-1A8h]
  char v51[8]; // [rsp+40h] [rbp-188h] BYREF
  char v52; // [rsp+48h] [rbp-180h]
  __int64 v53; // [rsp+50h] [rbp-178h] BYREF
  int v54; // [rsp+58h] [rbp-170h]
  _BYTE *Elements; // [rsp+60h] [rbp-168h]
  const unsigned int *v56; // [rsp+68h] [rbp-160h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v58[16]; // [rsp+78h] [rbp-150h] BYREF
  _QWORD v59[2]; // [rsp+88h] [rbp-140h] BYREF
  struct DXGHWQUEUE *v60; // [rsp+98h] [rbp-130h]
  struct DXGHWQUEUE *v61; // [rsp+A0h] [rbp-128h] BYREF
  const unsigned __int64 *v62; // [rsp+A8h] [rbp-120h]
  struct _KTHREAD **v63; // [rsp+B0h] [rbp-118h]
  PVOID v64[5]; // [rsp+B8h] [rbp-110h] BYREF
  int v65; // [rsp+E0h] [rbp-E8h]
  _BYTE v66[96]; // [rsp+F0h] [rbp-D8h] BYREF
  PVOID P; // [rsp+150h] [rbp-78h] BYREF
  _BYTE v68[32]; // [rsp+158h] [rbp-70h] BYREF
  unsigned int v69; // [rsp+178h] [rbp-50h]

  v7 = a4;
  v8 = (__int64)a3;
  v56 = a2;
  v62 = a3;
  v63 = a5;
  v10 = 0;
  v64[0] = 0LL;
  v65 = 0;
  Elements = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(v64, a1);
  if ( !Elements )
  {
    LODWORD(v11) = -1073741801;
    goto LABEL_43;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v58, v7, a5, &v61, a7);
  v14 = v61;
  v60 = v61;
  if ( !v61 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v15[3] = a5;
    v15[4] = v7;
    LODWORD(v11) = -1073741811;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_5:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v58);
    goto LABEL_43;
  }
  v16 = *(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL);
  v53 = v16;
  v54 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, v16, 0, v13, a7);
  if ( !a7 )
  {
    LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66);
    if ( (int)v11 < 0 )
    {
LABEL_8:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
      goto LABEL_5;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v51, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v51);
  if ( !a1 )
  {
LABEL_44:
    v39 = 0LL;
    P = 0LL;
    v69 = 0;
    if ( a6 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, a1);
      v40 = P;
      if ( !P )
      {
        P = 0LL;
        v69 = 0;
        if ( v52 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
        if ( v16 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v58);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v64);
        return 3221225495LL;
      }
      v41 = 8LL * v69;
      if ( v8 + v41 < v8 || v8 + v41 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v40, (const void *)v8, v41);
      v39 = P;
      v8 = (__int64)P;
      v62 = (const unsigned __int64 *)P;
    }
    v42 = 0;
    if ( !a1 )
    {
LABEL_63:
      if ( v39 != v68 && v39 )
        ExFreePoolWithTag(v39, 0);
      P = 0LL;
      v69 = 0;
      if ( v52 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v58);
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v64);
      return 0LL;
    }
    v43 = (const unsigned __int64 *)v8;
    v44 = &Elements[-v8];
    Elements -= v8;
    while ( 1 )
    {
      v45 = *(struct DXGSYNCOBJECT **)((char *)v43 + (_QWORD)v44);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v59, v45);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v59);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           v45,
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)v60 + 2) + 16LL) + 16LL));
      v46 = _guard_dispatch_icall_fptr();
      v11 = v46;
      if ( v46 < 0 )
        break;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v50) = 1;
        McTemplateK0pqPR1XR1(
          v8 + 8LL * v42,
          &EventWaitForSynchronizationObjectFromGpu,
          v48,
          v60,
          v50,
          &VidSchSyncObject,
          v8 + 8LL * v42);
      }
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v59);
      ++v42;
      ++v43;
      v44 = Elements;
      if ( v42 >= a1 )
      {
        v39 = P;
        goto LABEL_63;
      }
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v47);
    v49[3] = a5;
    v49[4] = v56[v42];
    v49[5] = v42;
    v49[6] = v11;
    WdLogEvent5_WdError(v49);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v59);
    if ( P != v68 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v69 = 0;
    if ( v52 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
    goto LABEL_8;
  }
  VidSchSyncObject = 0LL;
  v19 = v56;
  v59[0] = v56;
  while ( 1 )
  {
    v20 = *v19;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a5 + 26));
    v21 = (v20 >> 6) & 0xFFFFFF;
    v22 = v20 >> 30;
    if ( (unsigned int)v21 < *((_DWORD *)a5 + 62)
      && (v23 = a5[29], v24 = *((_DWORD *)v23 + 4 * v21 + 2), v22 == ((v24 >> 5) & 3))
      && (v24 & 0x2000) == 0
      && (v24 & 0x1F) == 0xB )
    {
      v25 = *((_QWORD *)v23 + 2 * (unsigned int)v21);
    }
    else
    {
      v25 = 0LL;
    }
    ExReleasePushLockSharedEx(a5 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( !v25 )
      break;
    if ( *(_QWORD *)(v25 + 16) != *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v36[3] = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      v37 = *(_QWORD *)(v25 + 16);
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(v25 + 64) & 0x20) != 0 )
    {
      v35 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v35 + 24) = v56[v10];
      WdLogEvent5_WdError(v35);
      if ( v52 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v58);
      LODWORD(v11) = -1073741790;
      goto LABEL_43;
    }
    v27 = *(_QWORD *)(v25 + 32);
LABEL_29:
    v34 = VidSchSyncObject;
    *(_QWORD *)&Elements[(_QWORD)VidSchSyncObject] = v27;
    ++v10;
    v19 = (const unsigned int *)(v59[0] + 4LL);
    v59[0] += 4LL;
    VidSchSyncObject = (struct _VIDSCH_SYNC_OBJECT *)((char *)v34 + 8);
    if ( v10 >= a1 )
      goto LABEL_44;
  }
  v28 = *(_DWORD *)v59[0];
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a5 + 26));
  v29 = (v28 >> 6) & 0xFFFFFF;
  v30 = v28 >> 30;
  if ( (unsigned int)v29 < *((_DWORD *)a5 + 62)
    && (v31 = a5[29], v32 = *((_DWORD *)v31 + 4 * v29 + 2), v30 == ((v32 >> 5) & 3))
    && (v32 & 0x2000) == 0
    && (v32 & 0x1F) == 8 )
  {
    v27 = *((_QWORD *)v31 + 2 * (unsigned int)v29);
  }
  else
  {
    v27 = 0LL;
  }
  ExReleasePushLockSharedEx(a5 + 26, 0LL);
  KeLeaveCriticalRegion();
  if ( v27 )
    goto LABEL_29;
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v33);
  v36[3] = a5;
  v37 = v56[v10];
  v36[5] = v10;
LABEL_38:
  v36[4] = v37;
  WdLogEvent5_WdError(v36);
  if ( v52 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v51);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
  if ( v16 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v53);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v58);
  LODWORD(v11) = -1073741811;
LABEL_43:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v64);
  return (unsigned int)v11;
}
