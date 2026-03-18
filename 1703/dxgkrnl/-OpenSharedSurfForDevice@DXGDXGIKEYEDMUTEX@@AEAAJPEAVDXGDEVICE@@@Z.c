/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADE74
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADAB8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // rbx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  unsigned int v17; // r13d
  unsigned int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *PoolWithTag; // rcx
  __int64 v23; // r15
  __int64 v24; // r9
  unsigned int v25; // r8d
  PVOID v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r14d
  __int64 v30; // r15
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // edx
  struct _EX_RUNDOWN_REF *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _EX_RUNDOWN_REF *v37; // rax
  char v38; // r14
  _QWORD *v39; // rdi
  ULONG_PTR Count; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+30h] [rbp-D0h]
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v69; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  unsigned int v71[8]; // [rsp+80h] [rbp-80h] BYREF
  char v72[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v73[14]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v74; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v75[320]; // [rsp+128h] [rbp+28h] BYREF
  int v76; // [rsp+268h] [rbp+168h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 211LL;
    WdLogEvent5_WdAssertion(v8);
  }
  memset(v71, 0, sizeof(v71));
  v71[1] = *((_DWORD *)this + 1);
  LODWORD(v11) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)a2, v71, v71[1]);
  if ( (int)v11 < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v10);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return (unsigned int)v11;
  }
  v14 = v71[5];
  v15 = v71[6];
  v16 = v71[5] + v71[6];
  if ( v71[5] + v71[6] < v71[5] )
  {
    v62 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v62 + 24) = 228LL;
  }
  else
  {
    v17 = v71[4];
    v18 = v16 + v71[4];
    if ( v16 + v71[4] >= v16 )
    {
      v19 = v18;
      P = operator new(v18, 0x674D444Fu, PagedPool);
      if ( !P )
      {
        v21 = WdLogNewEntry5_WdLowResource(v20);
        *(_QWORD *)(v21 + 24) = this;
        *(_QWORD *)(v21 + 32) = v19;
        WdLogEvent5_WdLowResource(v21);
        return 3221225495LL;
      }
      memset(v73, 0, 0x48uLL);
      v74 = 0LL;
      v76 = 0;
      v23 = v71[7];
      if ( v71[7] <= 4 )
      {
        PoolWithTag = v75;
        v74 = v75;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v71[7] < 0x50 )
          goto LABEL_51;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v71[7], 0x4B677844u);
        v74 = PoolWithTag;
      }
      v76 = v23;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v23);
        PoolWithTag = v74;
        if ( v74 )
        {
          v25 = *((_DWORD *)this + 1);
          LODWORD(v73[0]) = *((_DWORD *)a2 + 83);
          v26 = (PVOID)v73[7];
          v73[2] = v74;
          if ( (_DWORD)v14 )
            v26 = P;
          HIDWORD(v73[0]) = v25;
          v73[7] = v26;
          LODWORD(v73[1]) = v23;
          LODWORD(v73[8]) = v14;
          if ( v15 )
            v73[5] = (char *)P + v14;
          LODWORD(v73[6]) = v15;
          if ( v17 )
            v73[3] = (char *)P + v16;
          LODWORD(v73[4]) = v17;
          LODWORD(v11) = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                           a2,
                           (__int64)v73,
                           v25,
                           v24,
                           0,
                           0LL,
                           v64,
                           0LL,
                           0LL,
                           0LL);
          if ( (int)v11 < 0 )
          {
            v60 = WdLogNewEntry5_WdEvent(v27);
            *(_QWORD *)(v60 + 24) = this;
            *(_QWORD *)(v60 + 32) = *((unsigned int *)this + 1);
            WdLogEvent5_WdEvent(v60);
          }
          else
          {
            v28 = *((_QWORD *)this + 2);
            v29 = HIDWORD(v73[8]);
            *((_DWORD *)this + 24) = HIDWORD(v73[8]);
            v30 = *(_QWORD *)(v28 + 40);
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 168));
            v31 = (v29 >> 6) & 0xFFFFFF;
            if ( v31 < *(_DWORD *)(v30 + 208)
              && (v32 = *(_QWORD *)(v30 + 192),
                  v33 = *(_DWORD *)(v32 + 16LL * v31 + 8),
                  ((v29 >> 26) & 0x30) == (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0x30))
              && (v33 & 0x1000) == 0
              && (v33 & 0xF) != 0
              && (*(_BYTE *)(v32 + 16LL * v31 + 8) & 0xF) == 4 )
            {
              v34 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * v31);
            }
            else
            {
              v34 = 0LL;
            }
            DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v69, v34);
            ExReleasePushLockSharedEx(v30 + 168, 0LL);
            KeLeaveCriticalRegion();
            v37 = v69;
            if ( v69 )
            {
              v38 = 0;
              *((_DWORD *)this + 25) = *(_DWORD *)(v69[3].Count + 16);
              v39 = (_QWORD *)*((_QWORD *)a2 + 2);
              v66 = 0LL;
              v65 = 0LL;
              v68 = 0LL;
              Count = v37[3].Count;
              if ( DXGDEVICE::UmdManagesResidency(a2) || (*(_DWORD *)(v39[2] + 1676LL) & 0x40) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v39[54] + 8LL) + 960LL))(
                  *((_QWORD *)a2 + 74),
                  (*(_DWORD *)(Count + 72) >> 12) & 0x3F,
                  &v65,
                  &v68);
              if ( DXGDEVICE::UmdManagesResidency(a2) )
              {
                v41 = v39[54];
                v42 = v39[55];
                v67 = 0LL;
                v43 = (*(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR, __int64, int, __int64 *, char *))(*(_QWORD *)(v41 + 8) + 768LL))(
                        v42,
                        v65,
                        Count + 24,
                        1LL,
                        3,
                        &v67,
                        v72);
                v11 = v43;
                if ( v43 >= 0 )
                {
                  if ( v43 == 259 )
                  {
                    v38 = 1;
                    v66 = v67;
                    LODWORD(v11) = 0;
                  }
                }
                else
                {
                  v48 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
                  *(_QWORD *)(v48 + 24) = v11;
                  WdLogEvent5_WdWarning(v48);
                }
              }
              if ( (int)v11 >= 0 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1676LL) & 0x40) != 0 )
                {
                  memset(v73, 0, 0x68uLL);
                  v73[7] |= 1uLL;
                  v49 = v39[2];
                  v50 = *(_QWORD *)(Count + 24);
                  v73[2] = *(_QWORD *)(v49 + 2160);
                  v51 = *(_QWORD *)(v49 + 2168);
                  v52 = v39[55];
                  v73[3] = v51;
                  LOBYTE(v63) = 1;
                  v53 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, unsigned int, int))(*(_QWORD *)(v39[54] + 8LL) + 792LL))(
                          v52,
                          v65,
                          v50,
                          v73,
                          v63,
                          -2);
                  v11 = v53;
                  if ( v53 >= 0 )
                  {
                    if ( v53 == 259 )
                    {
                      v38 = 1;
                      v66 = v73[12];
                      LODWORD(v11) = 0;
                    }
                  }
                  else
                  {
                    v58 = WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
                    *(_QWORD *)(v58 + 24) = v11;
                    WdLogEvent5_WdWarning(v58);
                  }
                }
                if ( v38 )
                  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(v39[54] + 8LL) + 968LL))(
                    v39[55],
                    &v68,
                    &v66,
                    1LL);
              }
            }
            else
            {
              v59 = WdLogNewEntry5_WdError(v36, v35);
              *(_QWORD *)(v59 + 24) = this;
              *(_QWORD *)(v59 + 32) = *((unsigned int *)this + 24);
              WdLogEvent5_WdError(v59);
              LODWORD(v11) = -1073741811;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v69);
          }
          ExFreePoolWithTag(P, 0);
          goto LABEL_52;
        }
      }
LABEL_51:
      v61 = WdLogNewEntry5_WdLowResource(PoolWithTag);
      *(_QWORD *)(v61 + 24) = 255LL;
      WdLogEvent5_WdLowResource(v61);
      LODWORD(v11) = -1073741801;
LABEL_52:
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v74);
      return (unsigned int)v11;
    }
    v62 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v62 + 24) = 234LL;
  }
  WdLogEvent5_WdError(v62);
  return 3221225621LL;
}
