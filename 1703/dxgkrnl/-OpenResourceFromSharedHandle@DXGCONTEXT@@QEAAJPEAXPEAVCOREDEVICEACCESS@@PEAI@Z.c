/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C019F968
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00C27FC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        struct _EX_RUNDOWN_REF *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  PVOID v6; // r13
  void *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  SIZE_T v15; // rax
  __int64 v16; // rcx
  unsigned int *v17; // r12
  int v18; // r15d
  __int64 v19; // rax
  int v20; // r14d
  int v21; // edi
  DXGDEVICE *v22; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGPROCESS *Current; // r14
  unsigned int v32; // ebx
  __int64 v33; // r15
  unsigned int v34; // ecx
  __int64 v35; // r8
  int v36; // edx
  struct _EX_RUNDOWN_REF *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _EX_RUNDOWN_REF *v42; // rbx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r10
  __int64 v54; // rdx
  int v55; // eax
  int v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v60; // [rsp+58h] [rbp-A8h]
  struct COREDEVICEACCESS *v61; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  int v65; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v67; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v68; // [rsp+94h] [rbp-6Ch]
  unsigned int v69; // [rsp+9Ch] [rbp-64h]
  unsigned int *v70; // [rsp+A0h] [rbp-60h]
  _BYTE v71[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v72[14]; // [rsp+B0h] [rbp-50h] BYREF

  P = 0LL;
  v61 = a3;
  v4 = (unsigned int)a2;
  v59 = a2;
  v6 = 0LL;
  v70 = a4;
  v7 = 0LL;
  v66 = 0LL;
  v60 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0;
  memset(v72, 0, 0x48uLL);
  v8 = *((_QWORD *)this + 2);
  LODWORD(v66) = v4;
  v65 = *(_DWORD *)(v8 + 332);
  LODWORD(v11) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v8, &v65, v4);
  if ( (int)v11 < 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v12, v13);
    *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)v11;
  }
  v15 = 80LL * v69;
  if ( !is_mul_ok(v69, 0x50uLL) )
    v15 = -1LL;
  v17 = (unsigned int *)operator new(v15, 0x4B677844u, PagedPool);
  if ( !v17 )
  {
    LODWORD(v11) = -1073741670;
    return (unsigned int)v11;
  }
  v18 = v68;
  if ( !(_DWORD)v68 || (P = operator new((unsigned int)v68, 0x4B677844u, PagedPool)) != 0LL )
  {
    v20 = HIDWORD(v68);
    if ( !HIDWORD(v68) || (v6 = operator new(HIDWORD(v68), 0x4B677844u, PagedPool)) != 0LL )
    {
      v21 = HIDWORD(v67);
      if ( !HIDWORD(v67) || (v60 = operator new(HIDWORD(v67), 0x4B677844u, PagedPool), (v7 = v60) != 0LL) )
      {
        v22 = (DXGDEVICE *)*((_QWORD *)this + 2);
        v72[2] = v17;
        LODWORD(v72[8]) = v18;
        v72[5] = v6;
        LODWORD(v72[0]) = *((_DWORD *)v22 + 83);
        HIDWORD(v72[0]) = (_DWORD)v59;
        LODWORD(v72[1]) = v69;
        v72[7] = P;
        v72[3] = v60;
        LODWORD(v72[6]) = v20;
        LODWORD(v72[4]) = v21;
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16);
        v25 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                v22,
                (__int64)v72,
                (unsigned int)v59,
                v24,
                0,
                (PERESOURCE **)v61,
                v58,
                CurrentProcess,
                0LL,
                0LL);
        v11 = v25;
        if ( v25 < 0 )
        {
          v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          *(_QWORD *)(v30 + 24) = v11;
          WdLogEvent5_WdWarning(v30);
LABEL_34:
          v7 = v60;
          goto LABEL_35;
        }
        Current = DXGPROCESS::GetCurrent(v27);
        v32 = *v17;
        v33 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
        v34 = (v32 >> 6) & 0xFFFFFF;
        if ( v34 < *((_DWORD *)Current + 52)
          && (v35 = *((_QWORD *)Current + 24),
              v36 = *(_DWORD *)(v35 + 16LL * v34 + 8),
              ((v32 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x30))
          && (v36 & 0x1000) == 0
          && (v36 & 0xF) != 0
          && (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0xF) == 5 )
        {
          v37 = *(struct _EX_RUNDOWN_REF **)(v35 + 16LL * v34);
        }
        else
        {
          v37 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v59, v37);
        ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
        KeLeaveCriticalRegion();
        v42 = v59;
        if ( !v59 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
          *(_QWORD *)(v43 + 24) = 5204LL;
          WdLogEvent5_WdAssertion(v43);
          v42 = v59;
        }
        if ( *((_BYTE *)this + 368) )
        {
          memset(v72, 0, 0x68uLL);
          v72[7] |= 1uLL;
          LOBYTE(v57) = 0;
          v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, int, int))(*(_QWORD *)(*(_QWORD *)(v33 + 432) + 8LL)
                                                                                         + 792LL))(
                  *(_QWORD *)(v33 + 440),
                  0LL,
                  v42[3].Count,
                  v72,
                  v57,
                  (LODWORD(v42[9].Count) >> 12) & 0x3F);
          v11 = v44;
          if ( v44 < 0 )
          {
LABEL_27:
            v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
            *(_QWORD *)(v49 + 24) = v11;
            WdLogEvent5_WdWarning(v49);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59, v50, v51, v52);
            goto LABEL_34;
          }
        }
        if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
        {
          v63 = 0LL;
          v61 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v33 + 432) + 8LL)
                                                                                        + 960LL))(
            *(_QWORD *)(v53 + 592),
            0LL,
            &v63,
            &v61);
          v54 = *(_QWORD *)(v33 + 432);
          v64 = 0LL;
          v55 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(v54 + 8) + 768LL))(
                  *(_QWORD *)(v33 + 440),
                  v63,
                  v59 + 3,
                  1LL,
                  3,
                  &v64,
                  v71);
          v11 = v55;
          if ( v55 < 0 )
            goto LABEL_27;
          if ( v55 == 259 )
          {
            (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v33 + 432) + 8LL)
                                                                                           + 968LL))(
              *(_QWORD *)(v33 + 440),
              &v61,
              &v64,
              1LL);
            LODWORD(v11) = 0;
          }
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v59, v45, v47, v48);
        if ( (int)v11 >= 0 )
          *v70 = *v17;
        goto LABEL_34;
      }
    }
  }
  v19 = WdLogNewEntry5_WdLowResource(v16);
  *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 2);
  WdLogEvent5_WdLowResource(v19);
  LODWORD(v11) = -1073741670;
LABEL_35:
  ExFreePoolWithTag(v17, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v11;
}
