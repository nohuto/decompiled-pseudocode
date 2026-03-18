/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B6578
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0095E9C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int a5,
        struct DXGCONTEXT **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  void *v8; // r14
  unsigned int v9; // r12d
  void *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  SIZE_T v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r13
  int v22; // r15d
  __int64 v23; // rax
  int v24; // r14d
  __int64 v25; // rax
  int v26; // edi
  DXGDEVICE *v27; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  struct _EX_RUNDOWN_REF *v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v36; // rcx
  struct DXGPROCESS *v37; // r14
  unsigned int v38; // r12d
  __int64 v39; // rax
  DXGPUSHLOCK *v40; // r15
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // edx
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rcx
  struct _EX_RUNDOWN_REF *v47; // rbx
  __int64 v48; // rax
  unsigned int Count; // r14d
  int v50; // r15d
  unsigned int v51; // r14d
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r10
  __int64 v57; // rbx
  __int64 v58; // rdx
  int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned int v64; // [rsp+20h] [rbp-E0h]
  unsigned int v65; // [rsp+30h] [rbp-D0h]
  PVOID v66; // [rsp+50h] [rbp-B0h]
  PVOID v67; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v68; // [rsp+60h] [rbp-A0h] BYREF
  int v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+6Ch] [rbp-94h]
  PVOID v71; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+84h] [rbp-7Ch]
  SIZE_T v75; // [rsp+8Ch] [rbp-74h]
  SIZE_T NumberOfBytes; // [rsp+94h] [rbp-6Ch]
  unsigned int v77; // [rsp+9Ch] [rbp-64h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int *v82; // [rsp+C0h] [rbp-40h]
  unsigned int *v83; // [rsp+C8h] [rbp-38h]
  struct DXGPROCESS *v84; // [rsp+D0h] [rbp-30h]
  DXGPUSHLOCK *i; // [rsp+D8h] [rbp-28h]
  unsigned int *v86; // [rsp+E0h] [rbp-20h]
  _BYTE v87[8]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v88[14]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = 0LL;
  P = 0LL;
  v9 = (unsigned int)a2;
  v83 = a7;
  v86 = a8;
  v11 = 0LL;
  v71 = a3;
  v74 = 0LL;
  v75 = 0LL;
  NumberOfBytes = 0LL;
  v77 = 0;
  v82 = a4;
  v66 = 0LL;
  v67 = 0LL;
  memset(v88, 0, 0x48uLL);
  v12 = *((_QWORD *)this + 2);
  LODWORD(v74) = v9;
  v73 = *(_DWORD *)(v12 + 332);
  LODWORD(v15) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v12, &v73, v9);
  if ( (int)v15 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v16);
    *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v15;
  }
  v18 = 80LL * v77;
  if ( !is_mul_ok(v77, 0x50uLL) )
    v18 = -1LL;
  v21 = operator new(v18, 0x4B677844u, PagedPool);
  if ( !v21 )
  {
    LODWORD(v15) = -1073741670;
    return (unsigned int)v15;
  }
  v22 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes || (P = operator new((unsigned int)NumberOfBytes, 0x4B677844u, PagedPool)) != 0LL )
  {
    v24 = HIDWORD(NumberOfBytes);
    if ( HIDWORD(NumberOfBytes) && (v66 = operator new(HIDWORD(NumberOfBytes), 0x4B677844u, PagedPool)) == 0LL
      || (v26 = HIDWORD(v75)) != 0 && (v67 = operator new(HIDWORD(v75), 0x4B677844u, PagedPool), (v11 = v67) == 0LL) )
    {
      v25 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v25 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdLowResource(v25);
      LODWORD(v15) = -1073741670;
    }
    else
    {
      v27 = (DXGDEVICE *)*((_QWORD *)this + 2);
      HIDWORD(v88[0]) = v9;
      v88[2] = v21;
      LODWORD(v88[8]) = v22;
      LODWORD(v88[0]) = *((_DWORD *)v27 + 83);
      LODWORD(v88[1]) = v77;
      v88[7] = P;
      v88[5] = v66;
      v88[3] = v67;
      LODWORD(v88[6]) = v24;
      LODWORD(v88[4]) = v26;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v20, v19);
      v30 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
              v27,
              (__int64)v88,
              v9,
              v29,
              0,
              (PERESOURCE **)v71,
              v65,
              CurrentProcess,
              0LL,
              0LL);
      v15 = v30;
      if ( v30 < 0 )
      {
        v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        *(_QWORD *)(v34 + 24) = v15;
        WdLogEvent5_WdWarning(v34);
        goto LABEL_49;
      }
      Current = DXGPROCESS::GetCurrent(v32, v31);
      v36 = *((_QWORD *)this + 2);
      v37 = Current;
      v38 = v77;
      LODWORD(v15) = -1073741275;
      v84 = Current;
      v39 = 0LL;
      v70 = 0;
      v78 = *(_QWORD *)(v36 + 16);
      if ( v77 )
      {
        v40 = (struct DXGPROCESS *)((char *)v37 + 200);
        for ( i = (struct DXGPROCESS *)((char *)v37 + 200); ; v40 = i )
        {
          v71 = (PVOID)(80 * v39);
          v41 = v21[20 * v39];
          DXGPUSHLOCK::AcquireShared(v40);
          v42 = (v41 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v42 < *((_DWORD *)v37 + 60)
            && (v43 = *((_QWORD *)v37 + 28),
                v44 = *(_DWORD *)(v43 + 16 * v42 + 8),
                ((v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60))
            && (v44 & 0x2000) == 0
            && (v44 & 0x1F) != 0
            && (*(_BYTE *)(v43 + 16LL * (unsigned int)v42 + 8) & 0x1F) == 5 )
          {
            v45 = *(struct _EX_RUNDOWN_REF **)(v43 + 16LL * (unsigned int)v42);
          }
          else
          {
            v45 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v68, v45);
          ExReleasePushLockSharedEx(v40, 0LL);
          KeLeaveCriticalRegion();
          v47 = v68;
          if ( !v68 )
          {
            v48 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v48 + 24) = 5805LL;
            WdLogEvent5_WdAssertion(v48);
            v47 = v68;
          }
          Count = v47[9].Count;
          v50 = 0;
          v69 = 0;
          v51 = (Count >> 12) & 0x3F;
          if ( v51 == *((_DWORD *)this + 90) )
          {
            v69 = 1;
          }
          else
          {
            if ( !a5 )
              goto LABEL_44;
            while ( 1 )
            {
              v61 = (unsigned int)(v50 + 1);
              if ( v51 == *((_DWORD *)a6[v61] + 90) )
                break;
              ++v50;
              if ( (unsigned int)v61 >= a5 )
                goto LABEL_44;
            }
          }
          LODWORD(v15) = 0;
          if ( *((_BYTE *)this + 400) )
          {
            memset(v88, 0, 0x68uLL);
            v88[7] |= 1uLL;
            LOBYTE(v64) = 0;
            v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, unsigned int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v78 + 528) + 8LL) + 792LL))(
                    *(_QWORD *)(v78 + 536),
                    0LL,
                    v47[3].Count,
                    v88,
                    v64,
                    v51);
            v15 = v52;
            if ( v52 < 0 )
            {
LABEL_46:
              v62 = WdLogNewEntry5_WdWarning(v54, v53, v55);
              *(_QWORD *)(v62 + 24) = v15;
              WdLogEvent5_WdWarning(v62);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68);
              break;
            }
          }
          if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
          {
            v79 = 0LL;
            v81 = 0LL;
            v57 = v78;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v78 + 528) + 8LL)
                                                                         + 960LL))(
              *(_QWORD *)(v56 + 592),
              v51,
              &v79,
              &v81);
            v58 = *(_QWORD *)(v57 + 528);
            v80 = 0LL;
            v59 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(v58 + 8) + 768LL))(
                    *(_QWORD *)(v57 + 536),
                    v79,
                    v68 + 3,
                    1LL,
                    3,
                    &v80,
                    v87);
            v15 = v59;
            if ( v59 < 0 )
              goto LABEL_46;
            if ( v59 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v57 + 528) + 8LL)
                                                                            + 968LL))(
                *(_QWORD *)(v57 + 536),
                &v81,
                &v80,
                1LL);
              LODWORD(v15) = 0;
            }
          }
          if ( (int)v15 >= 0 )
          {
            v60 = *(_DWORD *)((char *)v21 + (_QWORD)v71);
            if ( v69 )
              *v82 = v60;
            else
              v83[v50] = v60;
          }
LABEL_44:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68);
          v39 = (unsigned int)(v70 + 1);
          v70 = v39;
          if ( (unsigned int)v39 >= v38 )
          {
            if ( (int)v15 >= 0 )
              *v86 = v38;
            break;
          }
          v37 = v84;
        }
      }
LABEL_49:
      v11 = v67;
    }
    v8 = v66;
    goto LABEL_51;
  }
  v23 = WdLogNewEntry5_WdLowResource(v20);
  *(_QWORD *)(v23 + 24) = *((_QWORD *)this + 2);
  WdLogEvent5_WdLowResource(v23);
  LODWORD(v15) = -1073741670;
LABEL_51:
  ExFreePoolWithTag(v21, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v15;
}
