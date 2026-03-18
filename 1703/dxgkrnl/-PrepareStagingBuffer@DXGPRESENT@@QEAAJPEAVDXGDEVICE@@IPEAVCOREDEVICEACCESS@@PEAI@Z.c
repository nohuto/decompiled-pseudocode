/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01A0068
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C00309F0 (-VmBusSendMakeResident@DXGADAPTER@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFEREN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4,
        unsigned int *a5)
{
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  struct DXGRESOURCE *v27; // r15
  __int64 v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // rbx
  unsigned int v34; // edx
  __int64 v35; // r9
  int v36; // r8d
  struct _EX_RUNDOWN_REF *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned int v49; // r14d
  struct DXGPROCESS *v50; // r15
  unsigned int v51; // ecx
  __int64 v52; // r8
  int v53; // edx
  struct _EX_RUNDOWN_REF *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  int Resident; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // r14
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rax
  _QWORD *v72; // rax
  struct _EX_RUNDOWN_REF *v74; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+68h] [rbp-98h] BYREF
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v79; // [rsp+78h] [rbp-88h]
  _BYTE v80[16]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v81[52]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v82[2]; // [rsp+230h] [rbp+130h] BYREF
  int v83; // [rsp+238h] [rbp+138h]

  v79 = a5;
  v8 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 9411LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  v14 = *((_DWORD *)this + 1);
  LODWORD(v15) = 0;
  if ( (v14 & 0x40) == 0 )
  {
LABEL_24:
    if ( *((_DWORD *)this + 105) )
      goto LABEL_59;
    goto LABEL_25;
  }
  *((_DWORD *)this + 1) = v14 & 0xFFFFFFBF;
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent(v10);
    if ( !Current )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = 9428LL;
      WdLogEvent5_WdAssertion(v21);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v82, Current, v18, v19);
    v24 = *((unsigned int *)this + 105);
    v25 = (*((_DWORD *)this + 105) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)Current + 52)
      && (v26 = *((_QWORD *)Current + 24),
          v24 = ((unsigned int)v24 >> 26) & 0x30,
          v22 = *(unsigned int *)(v26 + 16LL * (unsigned int)v25 + 8),
          (_BYTE)v24 == (*(_BYTE *)(v26 + 16LL * (unsigned int)v25 + 8) & 0x30))
      && (v22 & 0x1000) == 0
      && (v22 & 0xF) != 0
      && (v24 = 2LL * (unsigned int)v25, (*(_BYTE *)(v26 + 16LL * (unsigned int)v25 + 8) & 0xF) == 4) )
    {
      v27 = *(struct DXGRESOURCE **)(v26 + 16LL * (unsigned int)v25);
      if ( v27 )
        goto LABEL_18;
    }
    else
    {
      v27 = 0LL;
    }
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v22, v23);
    *(_QWORD *)(v28 + 24) = 9434LL;
    WdLogEvent5_WdAssertion(v28);
LABEL_18:
    v29 = *((_DWORD *)this + 105);
    v30 = (v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 < *((_DWORD *)Current + 52) )
    {
      v31 = *((_QWORD *)Current + 24);
      v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
      if ( ((v29 >> 26) & 0x30) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x30) && (v32 & 0x1000) == 0 && (v32 & 0xF) != 0 )
        *(_DWORD *)(v31 + 16LL * ((v29 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v82);
    DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v27, a4, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
    goto LABEL_24;
  }
LABEL_25:
  v33 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v33 + 168));
  v34 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v34 < *(_DWORD *)(v33 + 208)
    && (v35 = *(_QWORD *)(v33 + 192),
        v36 = *(_DWORD *)(v35 + 16LL * v34 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x30))
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v75, v37);
  ExReleasePushLockSharedEx(v33 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v75 )
  {
    v42 = *(_QWORD *)(v75[1].Count + 16);
    v43 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(_QWORD *)(v42 + 16) == v43 )
    {
      memset(v81, 0, 0x198uLL);
      v82[0] = *((_DWORD *)this + 19);
      v82[1] = *((_DWORD *)this + 20);
      HIDWORD(v81[0]) = 0;
      v83 = 0;
      v81[3] = v82;
      LODWORD(v81[2]) = 3;
      LODWORD(v15) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v81, a4);
      if ( (int)v15 >= 0 )
      {
        v48 = LODWORD(v81[1]);
        v49 = HIDWORD(v81[6]);
        *((_DWORD *)this + 104) = HIDWORD(v81[6]);
        *((_DWORD *)this + 105) = v48;
        v50 = DXGPROCESS::GetCurrent(v48);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v50 + 168));
        v51 = (v49 >> 6) & 0xFFFFFF;
        if ( v51 < *((_DWORD *)v50 + 52)
          && (v52 = *((_QWORD *)v50 + 24),
              v53 = *(_DWORD *)(v52 + 16LL * v51 + 8),
              ((v49 >> 26) & 0x30) == (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0x30))
          && (v53 & 0x1000) == 0
          && (v53 & 0xF) != 0
          && (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0xF) == 5 )
        {
          v54 = *(struct _EX_RUNDOWN_REF **)(v52 + 16LL * v51);
        }
        else
        {
          v54 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v54);
        ExReleasePushLockSharedEx((char *)v50 + 168, 0LL);
        KeLeaveCriticalRegion();
        if ( !v74 )
        {
          v59 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
          *(_QWORD *)(v59 + 24) = 9483LL;
          WdLogEvent5_WdAssertion(v59);
        }
        if ( DXGDEVICE::UmdManagesResidency(a2) && *((_BYTE *)a2 + 1821) )
        {
          Resident = DXGADAPTER::VmBusSendMakeResident(
                       *(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL),
                       *((_DWORD *)v50 + 96),
                       *((_DWORD *)a2 + 84),
                       0,
                       (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                       1u,
                       (const struct DXGALLOCATIONREFERENCE *)&v74,
                       0LL,
                       0LL);
          v15 = Resident;
          if ( Resident < 0 )
          {
            v65 = WdLogNewEntry5_WdError(v62, v61);
            *(_QWORD *)(v65 + 24) = v15;
            WdLogEvent5_WdError(v65);
          }
        }
        else if ( DXGDEVICE::UmdManagesResidency(a2) )
        {
          v66 = *((_QWORD *)a2 + 2);
          v67 = *((_QWORD *)a2 + 74);
          v76 = 0LL;
          v78 = 0LL;
          (*(void (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v66 + 432) + 8LL)
                                                                        + 960LL))(
            v67,
            0LL,
            &v76,
            &v78);
          v77 = 0LL;
          v68 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v66 + 432) + 8LL) + 768LL))(
                  *(_QWORD *)(v66 + 440),
                  v76,
                  v74 + 3,
                  1LL,
                  3,
                  &v77,
                  v80);
          v15 = v68;
          if ( v68 >= 0 )
          {
            if ( v68 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v66 + 432) + 8LL)
                                                                            + 968LL))(
                *(_QWORD *)(v66 + 440),
                &v78,
                &v77,
                1LL);
              LODWORD(v15) = 0;
            }
          }
          else
          {
            v69 = WdLogNewEntry5_WdWarning(v62, v61, v63, v64);
            *(_QWORD *)(v69 + 24) = v15;
            WdLogEvent5_WdWarning(v69);
          }
        }
        v70 = v83;
        if ( !v83 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
          *(_QWORD *)(v71 + 24) = 9549LL;
          WdLogEvent5_WdAssertion(v71);
          v70 = v83;
        }
        *((_DWORD *)this + 106) = v70;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74, v61, v63, v64);
      }
    }
    else
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
      LODWORD(v15) = -1073741811;
      v44[3] = a2;
      v44[4] = v75;
      v44[5] = -1073741811LL;
      WdLogEvent5_WdError(v44);
    }
  }
  else
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    LODWORD(v15) = -1073741811;
    v72[3] = -1073741811LL;
    v72[4] = this;
    v72[5] = v8;
    WdLogEvent5_WdWarning(v72);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75, v45, v46, v47);
LABEL_59:
  *v79 = *((_DWORD *)this + 104);
  return (unsigned int)v15;
}
