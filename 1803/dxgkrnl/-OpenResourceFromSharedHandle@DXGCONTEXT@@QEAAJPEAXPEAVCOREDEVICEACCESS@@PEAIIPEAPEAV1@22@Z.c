/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1C01B241C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00EA198 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
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
  unsigned int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // r13d
  SIZE_T v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r15d
  __int64 v21; // rax
  int v22; // r14d
  int v23; // edi
  DXGDEVICE *v24; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  struct _EX_RUNDOWN_REF *v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v32; // rcx
  struct DXGPROCESS *v33; // r14
  __int64 v34; // rax
  _DWORD *v35; // r12
  DXGPUSHLOCK *v36; // r15
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rcx
  struct _EX_RUNDOWN_REF *v43; // rbx
  __int64 v44; // rax
  unsigned int Count; // r14d
  int v46; // r15d
  unsigned int v47; // r14d
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r10
  __int64 v53; // rbx
  __int64 v54; // rdx
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v60; // [rsp+20h] [rbp-E0h]
  unsigned int v61; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+58h] [rbp-A8h]
  int v64; // [rsp+5Ch] [rbp-A4h]
  void *v65; // [rsp+60h] [rbp-A0h]
  struct COREDEVICEACCESS *v66; // [rsp+68h] [rbp-98h] BYREF
  void *v67; // [rsp+70h] [rbp-90h]
  void *v68; // [rsp+78h] [rbp-88h]
  void *v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-60h]
  unsigned int *v74; // [rsp+A8h] [rbp-58h]
  unsigned int *v75; // [rsp+B0h] [rbp-50h]
  struct DXGPROCESS *v76; // [rsp+B8h] [rbp-48h]
  DXGPUSHLOCK *i; // [rsp+C0h] [rbp-40h]
  unsigned int *v78; // [rsp+C8h] [rbp-38h]
  SIZE_T v79[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v80[16]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v81[14]; // [rsp+100h] [rbp+0h] BYREF

  v8 = (unsigned int)a2;
  v67 = 0LL;
  v65 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v75 = a7;
  v66 = a3;
  v74 = a4;
  v78 = a8;
  memset(v79, 0, sizeof(v79));
  memset(v81, 0, 0x48uLL);
  v10 = *((_QWORD *)this + 2);
  HIDWORD(v79[0]) = v8;
  LODWORD(v79[0]) = *(_DWORD *)(v10 + 332);
  LODWORD(v13) = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v10, v79, v8);
  if ( (int)v13 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdWarning(v15);
    goto LABEL_48;
  }
  v16 = HIDWORD(v79[3]);
  v17 = 80LL * HIDWORD(v79[3]);
  if ( !is_mul_ok(HIDWORD(v79[3]), 0x50uLL) )
    v17 = -1LL;
  v65 = operator new[](v17, 0x4B677844u, PagedPool);
  if ( !v65 )
  {
LABEL_7:
    LODWORD(v13) = -1073741670;
    goto LABEL_48;
  }
  v20 = HIDWORD(v79[2]);
  if ( HIDWORD(v79[2]) && (v67 = operator new[](HIDWORD(v79[2]), 0x4B677844u, PagedPool)) == 0LL
    || (v22 = v79[3]) != 0 && (v68 = operator new[](LODWORD(v79[3]), 0x4B677844u, PagedPool)) == 0LL
    || (v23 = v79[2]) != 0 && (v69 = operator new[](LODWORD(v79[2]), 0x4B677844u, PagedPool)) == 0LL )
  {
    v21 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v21 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v21);
    goto LABEL_7;
  }
  v24 = (DXGDEVICE *)*((_QWORD *)this + 2);
  HIDWORD(v81[0]) = v8;
  LODWORD(v81[1]) = v16;
  LODWORD(v81[8]) = v20;
  LODWORD(v81[0]) = *((_DWORD *)v24 + 83);
  v81[2] = v65;
  v81[7] = v67;
  v81[5] = v68;
  v81[3] = v69;
  LODWORD(v81[6]) = v22;
  LODWORD(v81[4]) = v23;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v19, v18);
  v27 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v24,
          (__int64)v81,
          v8,
          v26,
          0,
          (PERESOURCE **)v66,
          v61,
          CurrentProcess,
          0LL,
          0LL);
  v13 = v27;
  if ( v27 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v15 + 24) = v13;
    goto LABEL_3;
  }
  Current = DXGPROCESS::GetCurrent(v29, v28);
  v32 = *((_QWORD *)this + 2);
  v33 = Current;
  v76 = Current;
  LODWORD(v13) = -1073741275;
  v34 = 0LL;
  v64 = 0;
  v70 = *(_QWORD *)(v32 + 16);
  if ( !v16 )
    goto LABEL_48;
  v35 = v65;
  v36 = (struct DXGPROCESS *)((char *)v33 + 208);
  for ( i = (struct DXGPROCESS *)((char *)v33 + 208); ; v36 = i )
  {
    v73 = 80 * v34;
    v37 = v35[20 * v34];
    DXGPUSHLOCK::AcquireShared(v36);
    v38 = (v37 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < *((_DWORD *)v33 + 62)
      && (v39 = *((_QWORD *)v33 + 29),
          v40 = *(_DWORD *)(v39 + 16 * v38 + 8),
          ((v37 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60))
      && (v40 & 0x2000) == 0
      && (v40 & 0x1F) == 5 )
    {
      v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * (unsigned int)v38);
    }
    else
    {
      v41 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62, v41);
    ExReleasePushLockSharedEx(v36, 0LL);
    KeLeaveCriticalRegion();
    v43 = v62;
    if ( !v62 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v42);
      *(_QWORD *)(v44 + 24) = 5835LL;
      WdLogEvent5_WdAssertion(v44);
      v43 = v62;
    }
    Count = v43[9].Count;
    v46 = 0;
    v63 = 0;
    v47 = (Count >> 12) & 0x3F;
    if ( v47 == *((_DWORD *)this + 90) )
    {
      v63 = 1;
    }
    else
    {
      if ( !a5 )
        goto LABEL_43;
      while ( 1 )
      {
        v57 = (unsigned int)(v46 + 1);
        if ( v47 == *((_DWORD *)a6[v57] + 90) )
          break;
        ++v46;
        if ( (unsigned int)v57 >= a5 )
          goto LABEL_43;
      }
    }
    LODWORD(v13) = 0;
    if ( *((_BYTE *)this + 400) )
    {
      memset(v81, 0, 0x68uLL);
      v81[7] = 1LL;
      LOBYTE(v60) = 0;
      v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, unsigned int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v70 + 544) + 8LL) + 792LL))(
              *(_QWORD *)(v70 + 552),
              0LL,
              v43[3].Count,
              v81,
              v60,
              v47);
      v13 = v48;
      if ( v48 < 0 )
      {
LABEL_45:
        v58 = WdLogNewEntry5_WdWarning(v50, v49, v51);
        *(_QWORD *)(v58 + 24) = v13;
        WdLogEvent5_WdWarning(v58);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62);
        goto LABEL_48;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
    {
      v71 = 0LL;
      v66 = 0LL;
      v53 = v70;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, struct COREDEVICEACCESS **))(*(_QWORD *)(*(_QWORD *)(v70 + 544)
                                                                                                + 8LL)
                                                                                    + 976LL))(
        *(_QWORD *)(v52 + 608),
        v47,
        &v71,
        &v66);
      v54 = *(_QWORD *)(v53 + 544);
      v72 = 0LL;
      v55 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(v54 + 8) + 768LL))(
              *(_QWORD *)(v53 + 552),
              v71,
              v62 + 3,
              1LL,
              3,
              &v72,
              v80);
      v13 = v55;
      if ( v55 < 0 )
        goto LABEL_45;
      if ( v55 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, struct COREDEVICEACCESS **, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v53 + 544) + 8LL)
                                                                                       + 984LL))(
          *(_QWORD *)(v53 + 552),
          &v66,
          &v72,
          1LL);
        LODWORD(v13) = 0;
      }
    }
    if ( (int)v13 >= 0 )
    {
      v56 = v35[(unsigned __int64)v73 / 4];
      if ( v63 )
        *v74 = v56;
      else
        v75[v46] = v56;
    }
LABEL_43:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62);
    v34 = (unsigned int)(v64 + 1);
    v64 = v34;
    if ( (unsigned int)v34 >= v16 )
      break;
    v33 = v76;
  }
  if ( (int)v13 >= 0 )
    *v78 = v16;
LABEL_48:
  operator delete[](v65);
  operator delete[](v67);
  operator delete[](v68);
  operator delete[](v69);
  return (unsigned int)v13;
}
