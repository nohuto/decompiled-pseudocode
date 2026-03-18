/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@I@Z @ 0x1C016EE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTBLTTOHWQUEUE *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  ULONG BroadcastContextCount; // r15d
  __int64 v23; // rax
  unsigned int v24; // r15d
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v26; // edi
  D3DKMT_HANDLE v27; // r15d
  __int64 v28; // rax
  struct _KTHREAD *v29; // r8
  int v30; // ecx
  struct DXGCONTEXT *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGCONTEXT **v34; // rdx
  struct DXGCONTEXT *v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  int v56; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+38h] [rbp-C8h]
  struct DXGCONTEXT **v58; // [rsp+40h] [rbp-C0h] BYREF
  char v59; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v60; // [rsp+68h] [rbp-98h]
  char v61[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h]
  char v63; // [rsp+80h] [rbp-80h]
  _BYTE v64[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v65[24]; // [rsp+98h] [rbp-68h] BYREF
  char v66[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v67[32]; // [rsp+B8h] [rbp-48h] BYREF
  char v68[56]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v69[14]; // [rsp+110h] [rbp+10h] BYREF
  struct DXGCONTEXT *v70; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v71; // [rsp+198h] [rbp+98h]

  v71 = a2;
  v3 = a2;
  v57 = 0LL;
  v56 = 3008;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3008);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v56, 3008);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v9 = Current;
  if ( Current )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v65, a1->PrivatePresentData.hDevice, Current, &v70, 0);
    v15 = (__int64 *)v70;
    if ( !v70 )
    {
      LODWORD(v10) = -1073741811;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[3] = -1073741811LL;
      v16[4] = PsGetCurrentProcess(v18, v17);
      v16[5] = a1->PrivatePresentData.hDevice;
      WdLogEvent5_WdError(v16);
LABEL_45:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v65);
      goto LABEL_46;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64,
      *((struct DXGDEVICE **)v70 + 2));
    BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v23 + 24) = v15;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
LABEL_44:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64);
      goto LABEL_45;
    }
    v24 = BroadcastContextCount + 1;
    v58 = 0LL;
    v60 = 0;
    if ( v24 <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v59;
    }
    else
    {
      v19 = 0xFFFFFFFFFFFFFFFFuLL % v24;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 8 )
        goto LABEL_42;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v24, 0x4B677844u);
    }
    v58 = PoolWithTag;
    v60 = v24;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v24);
      if ( v58 )
      {
        *v58 = (struct DXGCONTEXT *)v15;
        v26 = 0;
        if ( a1->PrivatePresentData.BroadcastContextCount )
        {
          while ( 1 )
          {
            v27 = a1->PrivatePresentData.BroadcastContext[v26];
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 26));
            v28 = (v27 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v28 < *((_DWORD *)v9 + 62)
              && (v29 = v9[29],
                  v30 = *((_DWORD *)v29 + 4 * v28 + 2),
                  ((v27 >> 25) & 0x60) == (*((_BYTE *)v29 + 16 * v28 + 8) & 0x60))
              && (v30 & 0x2000) == 0
              && (v30 & 0x1F) == 7 )
            {
              v31 = (struct DXGCONTEXT *)*((_QWORD *)v29 + 2 * (unsigned int)v28);
            }
            else
            {
              v31 = 0LL;
            }
            ExReleasePushLockSharedEx(v9 + 26, 0LL);
            KeLeaveCriticalRegion();
            v33 = v26 + 1;
            v58[v33] = v31;
            v34 = v58;
            v35 = v58[v33];
            if ( !v35 || *((_QWORD *)v35 + 2) != v15[2] )
              break;
            ++v26;
            if ( (unsigned int)v33 >= a1->PrivatePresentData.BroadcastContextCount )
            {
              v3 = v71;
              goto LABEL_29;
            }
          }
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v36[3] = v15;
          v36[4] = a1->PrivatePresentData.BroadcastContext[v26];
          v37 = v26;
          LODWORD(v10) = -1073741811;
          v36[5] = v37;
          v36[6] = -1073741811LL;
          WdLogEvent5_WdError(v36);
          goto LABEL_43;
        }
        v34 = v58;
LABEL_29:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v69,
          v34,
          v60);
        if ( !v69[0] )
        {
          v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
          *(_QWORD *)(v41 + 24) = 2236LL;
          WdLogEvent5_WdWarning(v41);
          LODWORD(v10) = -1073741801;
LABEL_41:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v69);
LABEL_43:
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v58);
          goto LABEL_44;
        }
        v42 = v15[2];
        v63 = 0;
        v62 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, v15[2], 2, v43, 0);
        v44 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66);
        v10 = v44;
        if ( v44 >= 0 )
        {
          v48 = DXGCONTEXT::PresentFromCdd(
                  (DXGCONTEXT *)v15,
                  a1,
                  v3,
                  (struct COREDEVICEACCESS *)v66,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)v61,
                  v58);
          v10 = v48;
          if ( v48 >= 0 )
            goto LABEL_39;
          if ( v48 != -1071775482 )
          {
            if ( v48 != -1071774910 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
              v51[3] = v10;
              v51[4] = v15;
              v51[5] = v9;
              WdLogEvent5_WdError(v51);
            }
            goto LABEL_39;
          }
          v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49);
          v47[3] = -1071775482LL;
        }
        else
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, v45);
          v47[3] = v10;
        }
        v47[4] = v15;
        v47[5] = v9;
        WdLogEvent5_WdEvent(v47);
LABEL_39:
        COREACCESS::~COREACCESS((COREACCESS *)v68);
        COREACCESS::~COREACCESS((COREACCESS *)v67);
        if ( v63 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
        goto LABEL_41;
      }
    }
LABEL_42:
    v52 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v52 + 24) = 2197LL;
    WdLogEvent5_WdWarning(v52);
    LODWORD(v10) = -1073741801;
    goto LABEL_43;
  }
  LODWORD(v10) = -1073741811;
  v11 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12);
  WdLogEvent5_WdError(v11);
LABEL_46:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v53, &EventProfilerExit, v54, v56);
  return (unsigned int)v10;
}
