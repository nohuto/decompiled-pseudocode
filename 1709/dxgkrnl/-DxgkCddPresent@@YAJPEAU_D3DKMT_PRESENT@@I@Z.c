/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0186EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_PRESENT *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  ULONG BroadcastContextCount; // edi
  __int64 v23; // rax
  unsigned int v24; // edi
  struct DXGCONTEXT **PoolWithTag; // rax
  unsigned int v26; // edi
  D3DKMT_HANDLE v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  struct DXGCONTEXT *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r9
  struct DXGCONTEXT **v34; // rdx
  struct DXGCONTEXT *v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  __int64 v56; // rax
  struct DXGCONTEXT **v58; // [rsp+30h] [rbp-D0h] BYREF
  char v59; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-A8h]
  _BYTE v61[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  char v63; // [rsp+70h] [rbp-90h]
  _BYTE v64[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v65[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v66[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v67[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v68[56]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v69[14]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v70; // [rsp+188h] [rbp+88h]
  struct DXGCONTEXT *v71; // [rsp+190h] [rbp+90h] BYREF

  v70 = a2;
  v3 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3008);
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v7 = Current;
  if ( Current )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v65, a1->hDevice, Current, &v71, 0);
    v15 = (__int64 *)v71;
    if ( !v71 )
    {
      LODWORD(v8) = -1073741811;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[3] = -1073741811LL;
      v16[4] = PsGetCurrentProcess(v18, v17);
      v16[5] = a1->hDevice;
      WdLogEvent5_WdError(v16);
LABEL_45:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v65);
      goto LABEL_46;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v64,
      *((struct DXGDEVICE **)v71 + 2));
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      LODWORD(v8) = -1073741811;
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
      v20 = v24;
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
      *v58 = (struct DXGCONTEXT *)v15;
      v26 = 0;
      if ( a1->BroadcastContextCount )
      {
        while ( 1 )
        {
          v27 = a1->BroadcastContext[v26];
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v7 + 200));
          v28 = (v27 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v28 < *((_DWORD *)v7 + 60)
            && (v29 = *((_QWORD *)v7 + 28),
                v30 = *(_DWORD *)(v29 + 16 * v28 + 8),
                ((v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60))
            && (v30 & 0x2000) == 0
            && (v30 & 0x1F) != 0
            && (*(_BYTE *)(v29 + 16LL * (unsigned int)v28 + 8) & 0x1F) == 7 )
          {
            v31 = *(struct DXGCONTEXT **)(v29 + 16LL * (unsigned int)v28);
          }
          else
          {
            v31 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)v7 + 200, 0LL);
          KeLeaveCriticalRegion();
          v33 = v26 + 1;
          v58[v33] = v31;
          v34 = v58;
          v35 = v58[v33];
          if ( !v35 || *((_QWORD *)v35 + 2) != v15[2] )
            break;
          ++v26;
          if ( (unsigned int)v33 >= a1->BroadcastContextCount )
          {
            v3 = v70;
            goto LABEL_29;
          }
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v37 = v26;
        LODWORD(v8) = -1073741811;
        v36[3] = v15;
        v36[4] = a1->BroadcastContext[v37];
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
        *(_QWORD *)(v41 + 24) = 2183LL;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v8) = -1073741801;
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
      v8 = v44;
      if ( v44 >= 0 )
      {
        v50 = DXGCONTEXT::PresentFromCdd(
                (DXGCONTEXT *)v15,
                a1,
                v3,
                (struct COREDEVICEACCESS *)v66,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v61,
                v58);
        v8 = v50;
        if ( v50 >= 0 )
          goto LABEL_39;
        if ( v50 != -1071775482 )
        {
          if ( v50 != -1071774910 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v52);
            v55[3] = v8;
            v55[4] = v15;
            v55[5] = v7;
            WdLogEvent5_WdError(v55);
          }
          goto LABEL_39;
        }
        v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51, v53, v54);
        v49[3] = -1071775482LL;
      }
      else
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, v45, v47, v48);
        v49[3] = v8;
      }
      v49[4] = v15;
      v49[5] = v7;
      WdLogEvent5_WdEvent(v49);
LABEL_39:
      COREACCESS::~COREACCESS((COREACCESS *)v68);
      COREACCESS::~COREACCESS((COREACCESS *)v67);
      if ( v63 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
      goto LABEL_41;
    }
LABEL_42:
    v56 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v56 + 24) = 2144LL;
    WdLogEvent5_WdWarning(v56);
    LODWORD(v8) = -1073741801;
    goto LABEL_43;
  }
  LODWORD(v8) = -1073741811;
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
  WdLogEvent5_WdError(v9);
LABEL_46:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, 3008);
  return (unsigned int)v8;
}
