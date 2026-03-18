/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0182CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_PRESENT *a1, unsigned int a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG BroadcastContextCount; // edi
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 **PoolWithTag; // rax
  unsigned int v27; // edi
  D3DKMT_HANDLE v28; // r15d
  unsigned int v29; // ecx
  __int64 v30; // r8
  int v31; // edx
  __int64 *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 **v35; // rdx
  __int64 *v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 **P; // [rsp+38h] [rbp-D0h]
  _BYTE v56[32]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-A8h]
  _QWORD v58[2]; // [rsp+68h] [rbp-A0h] BYREF
  char v59; // [rsp+78h] [rbp-90h]
  _BYTE v60[16]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v61[24]; // [rsp+90h] [rbp-78h] BYREF
  char v62[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v63[32]; // [rsp+B0h] [rbp-58h] BYREF
  char v64[56]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v65[8]; // [rsp+108h] [rbp+0h] BYREF
  struct DXGCONTEXT *v66; // [rsp+188h] [rbp+80h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3008);
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v8 = Current;
  if ( Current )
  {
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61, a1->hDevice, Current, &v66, 0);
    v16 = (__int64 *)v66;
    if ( !v66 )
    {
      LODWORD(v9) = -1073741811;
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v17[3] = -1073741811LL;
      v17[4] = PsGetCurrentProcess(v18);
      v17[5] = a1->hDevice;
      WdLogEvent5_WdError(v17);
LABEL_47:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
      goto LABEL_48;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60,
      *((struct DXGDEVICE **)v66 + 2));
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v24 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v24 + 24) = v16;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
LABEL_46:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
      goto LABEL_47;
    }
    v25 = BroadcastContextCount + 1;
    P = 0LL;
    v57 = 0;
    if ( v25 <= 4 )
    {
      PoolWithTag = (__int64 **)v56;
    }
    else
    {
      v20 = v25;
      v19 = 0xFFFFFFFFFFFFFFFFuLL % v25;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
        goto LABEL_42;
      PoolWithTag = (__int64 **)ExAllocatePoolWithTag(PagedPool, 8LL * v25, 0x4B677844u);
    }
    P = PoolWithTag;
    v57 = v25;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v25);
      *P = v16;
      v27 = 0;
      if ( a1->BroadcastContextCount )
      {
        while ( 1 )
        {
          v28 = a1->BroadcastContext[v27];
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v8 + 168));
          v29 = (v28 >> 6) & 0xFFFFFF;
          if ( v29 < *((_DWORD *)v8 + 52)
            && (v30 = *((_QWORD *)v8 + 24),
                v31 = *(_DWORD *)(v30 + 16LL * v29 + 8),
                ((v28 >> 26) & 0x30) == (*(_BYTE *)(v30 + 16LL * v29 + 8) & 0x30))
            && (v31 & 0x1000) == 0
            && (v31 & 0xF) != 0
            && (*(_BYTE *)(v30 + 16LL * v29 + 8) & 0xF) == 7 )
          {
            v32 = *(__int64 **)(v30 + 16LL * v29);
          }
          else
          {
            v32 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)v8 + 168, 0LL);
          KeLeaveCriticalRegion();
          v34 = v27 + 1;
          P[v34] = v32;
          v35 = P;
          v36 = P[v34];
          if ( !v36 || v36[2] != v16[2] )
            break;
          ++v27;
          if ( (unsigned int)v34 >= a1->BroadcastContextCount )
            goto LABEL_29;
        }
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v33, P);
        v38 = v27;
        LODWORD(v9) = -1073741811;
        v37[3] = v16;
        v37[4] = a1->BroadcastContext[v38];
        v37[5] = v38;
        v37[6] = -1073741811LL;
        WdLogEvent5_WdError(v37);
        goto LABEL_43;
      }
      v35 = P;
LABEL_29:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v65,
        v35,
        v57);
      if ( !v65[0] )
      {
        v43 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
        *(_QWORD *)(v43 + 24) = 2148LL;
        WdLogEvent5_WdWarning(v43);
        LODWORD(v9) = -1073741801;
LABEL_41:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v65);
LABEL_43:
        if ( P != (__int64 **)v56 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_46;
      }
      v44 = v16[2];
      v59 = 0;
      v58[1] = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, v16[2], 2LL, v45, 0);
      v46 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62);
      v9 = v46;
      if ( v46 >= 0 )
      {
        v49 = DXGCONTEXT::PresentFromCdd(
                (DXGCONTEXT *)v16,
                a1,
                a2,
                (struct COREDEVICEACCESS *)v62,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v58,
                (struct DXGCONTEXT **)P);
        v9 = v49;
        if ( v49 >= 0 )
          goto LABEL_39;
        if ( v49 != -1071775482 )
        {
          if ( v49 != -1071774910 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
            v52[3] = v9;
            v52[4] = v16;
            v52[5] = v8;
            WdLogEvent5_WdError(v52);
          }
          goto LABEL_39;
        }
        v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v51);
        v48[3] = -1071775482LL;
      }
      else
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v47);
        v48[3] = v9;
      }
      v48[4] = v16;
      v48[5] = v8;
      WdLogEvent5_WdEvent(v48);
LABEL_39:
      COREACCESS::~COREACCESS((COREACCESS *)v64);
      COREACCESS::~COREACCESS((COREACCESS *)v63);
      if ( v59 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v58);
      goto LABEL_41;
    }
LABEL_42:
    v53 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v53 + 24) = 2109LL;
    WdLogEvent5_WdWarning(v53);
    LODWORD(v9) = -1073741801;
    goto LABEL_43;
  }
  LODWORD(v9) = -1073741811;
  v10 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v10 + 24) = -1073741811LL;
  *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v11);
  WdLogEvent5_WdError(v10);
LABEL_48:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 3008);
  return (unsigned int)v9;
}
