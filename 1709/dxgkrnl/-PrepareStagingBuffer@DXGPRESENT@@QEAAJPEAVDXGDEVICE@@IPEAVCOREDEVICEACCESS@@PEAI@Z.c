/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B6D94
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0196EA4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
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
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // r8d
  struct DXGRESOURCE *v21; // r15
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // r8d
  struct _EX_RUNDOWN_REF *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  struct DXGPROCESS *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int Resident; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rax
  _QWORD *v59; // rax
  struct _EX_RUNDOWN_REF *v61; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v66; // [rsp+78h] [rbp-88h]
  _BYTE v67[16]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v68[54]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v69[2]; // [rsp+240h] [rbp+140h] BYREF
  int v70; // [rsp+248h] [rbp+148h]

  v66 = a5;
  v8 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 10217LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  v12 = *((_DWORD *)this + 1);
  LODWORD(v13) = 0;
  if ( (v12 & 0x40) == 0 )
  {
LABEL_24:
    if ( *((_DWORD *)this + 105) )
      goto LABEL_59;
    goto LABEL_25;
  }
  *((_DWORD *)this + 1) = v12 & 0xFFFFFFBF;
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent(v10, v9);
    if ( !Current )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v16 + 24) = 10234LL;
      WdLogEvent5_WdAssertion(v16);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69, Current);
    v18 = (*((_DWORD *)this + 105) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *((_DWORD *)Current + 60)
      && (v19 = *((_QWORD *)Current + 28),
          v17 = (unsigned int)v18,
          v20 = *(_DWORD *)(v19 + 16 * v18 + 8),
          ((*((_DWORD *)this + 105) >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) != 0
      && (v17 = 2LL * (unsigned int)v18, (*(_BYTE *)(v19 + 16LL * (unsigned int)v18 + 8) & 0x1F) == 4) )
    {
      v21 = *(struct DXGRESOURCE **)(v19 + 16LL * (unsigned int)v18);
      if ( v21 )
        goto LABEL_18;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v22 + 24) = 10240LL;
    WdLogEvent5_WdAssertion(v22);
LABEL_18:
    v23 = *((_DWORD *)this + 105);
    v24 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)Current + 60) )
    {
      v25 = *((_QWORD *)Current + 28);
      v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
      if ( ((v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
        *(_DWORD *)(v25 + 16LL * ((v23 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
    DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v21, (DXGADAPTER **)a4, DXGDEVICE::DestroyFlagsDefault);
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
    goto LABEL_24;
  }
LABEL_25:
  v27 = *((_QWORD *)a2 + 5);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 200));
  v28 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v28 < *(_DWORD *)(v27 + 240)
    && (v29 = *(_QWORD *)(v27 + 224),
        v30 = *(_DWORD *)(v29 + 16 * v28 + 8),
        (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60))
    && (v30 & 0x2000) == 0
    && (v30 & 0x1F) != 0
    && (*(_BYTE *)(v29 + 16LL * (unsigned int)v28 + 8) & 0x1F) == 5 )
  {
    v31 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * (unsigned int)v28);
  }
  else
  {
    v31 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62, v31);
  ExReleasePushLockSharedEx(v27 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( v62 )
  {
    v35 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v62[1].Count + 16) + 16LL) == v35 )
    {
      memset(v68, 0, 0x134uLL);
      memset(&v68[39], 0, 120);
      LODWORD(v68[2]) = 3;
      v69[0] = *((_DWORD *)this + 19);
      v69[1] = *((_DWORD *)this + 20);
      HIDWORD(v68[0]) = 0;
      v70 = 0;
      v68[3] = v69;
      LODWORD(v13) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v68, a4);
      if ( (int)v13 >= 0 )
      {
        v38 = LODWORD(v68[1]);
        v39 = HIDWORD(v68[6]);
        *((_DWORD *)this + 104) = HIDWORD(v68[6]);
        *((_DWORD *)this + 105) = v38;
        v40 = DXGPROCESS::GetCurrent(v38, v37);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v40 + 200));
        v41 = (v39 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v41 < *((_DWORD *)v40 + 60)
          && (v42 = *((_QWORD *)v40 + 28),
              v43 = *(_DWORD *)(v42 + 16LL * (unsigned int)v41 + 8),
              ((v39 >> 25) & 0x60) == (*(_BYTE *)(v42 + 16LL * (unsigned int)v41 + 8) & 0x60))
          && (v43 & 0x2000) == 0
          && (v43 & 0x1F) != 0
          && (v44 = 2 * v41, (*(_BYTE *)(v42 + 8 * v44 + 8) & 0x1F) == 5) )
        {
          v45 = *(struct _EX_RUNDOWN_REF **)(v42 + 8 * v44);
        }
        else
        {
          v45 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v61, v45);
        ExReleasePushLockSharedEx((char *)v40 + 200, 0LL);
        KeLeaveCriticalRegion();
        if ( !v61 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46);
          *(_QWORD *)(v47 + 24) = 10289LL;
          WdLogEvent5_WdAssertion(v47);
        }
        if ( DXGDEVICE::UmdManagesResidency(a2) && *((_BYTE *)a2 + 1693) )
        {
          Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                       (struct VMBCHANNEL__ **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 3888LL),
                       *((_DWORD *)v40 + 106),
                       *((_DWORD *)a2 + 84),
                       0,
                       (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                       1u,
                       (const struct DXGALLOCATIONREFERENCE *)&v61,
                       0LL,
                       0LL);
          v13 = Resident;
          if ( Resident < 0 )
          {
            v50 = WdLogNewEntry5_WdError(v49);
            *(_QWORD *)(v50 + 24) = v13;
            WdLogEvent5_WdError(v50);
          }
        }
        else if ( DXGDEVICE::UmdManagesResidency(a2) )
        {
          v51 = *((_QWORD *)a2 + 2);
          v52 = *((_QWORD *)a2 + 74);
          v63 = 0LL;
          v65 = 0LL;
          (*(void (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v51 + 528) + 8LL)
                                                                        + 960LL))(
            v52,
            0LL,
            &v63,
            &v65);
          v64 = 0LL;
          v53 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v51 + 528) + 8LL) + 768LL))(
                  *(_QWORD *)(v51 + 536),
                  v63,
                  v61 + 3,
                  1LL,
                  3,
                  &v64,
                  v67);
          v13 = v53;
          if ( v53 >= 0 )
          {
            if ( v53 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v51 + 528) + 8LL)
                                                                            + 968LL))(
                *(_QWORD *)(v51 + 536),
                &v65,
                &v64,
                1LL);
              LODWORD(v13) = 0;
            }
          }
          else
          {
            v56 = WdLogNewEntry5_WdWarning(v49, v54, v55);
            *(_QWORD *)(v56 + 24) = v13;
            WdLogEvent5_WdWarning(v56);
          }
        }
        v57 = v70;
        if ( !v70 )
        {
          v58 = WdLogNewEntry5_WdAssertion(v49);
          *(_QWORD *)(v58 + 24) = 10353LL;
          WdLogEvent5_WdAssertion(v58);
          v57 = v70;
        }
        *((_DWORD *)this + 106) = v57;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v61);
      }
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      LODWORD(v13) = -1073741811;
      v36[3] = a2;
      v36[4] = v62;
      v36[5] = -1073741811LL;
      WdLogEvent5_WdError(v36);
    }
  }
  else
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
    LODWORD(v13) = -1073741811;
    v59[3] = -1073741811LL;
    v59[4] = this;
    v59[5] = v8;
    WdLogEvent5_WdWarning(v59);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v62);
LABEL_59:
  *v66 = *((_DWORD *)this + 104);
  return (unsigned int)v13;
}
