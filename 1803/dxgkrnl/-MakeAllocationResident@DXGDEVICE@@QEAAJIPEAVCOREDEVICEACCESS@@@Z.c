/*
 * XREFs of ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B380
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0189EF4 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01837E8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, PERESOURCE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  struct DXGPROCESS *Current; // r14
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int Resident; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v30[8]; // [rsp+58h] [rbp-8h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+90h] [rbp+30h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 8126LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  LODWORD(v9) = 0;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v11 = (a2 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)Current + 62)
    && (v12 = *((_QWORD *)Current + 29),
        v13 = v11,
        v14 = *(_DWORD *)(v12 + 16LL * v11 + 8),
        ((a2 >> 25) & 0x60) == (v14 & 0x60))
    && (v14 & 0x2000) == 0
    && (v14 & 0x1F) != 0
    && (v15 = 2 * v13, (v14 & 0x1F) == 5) )
  {
    v16 = *(struct _EX_RUNDOWN_REF **)(v12 + 8 * v15);
  }
  else
  {
    v16 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v16);
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v31 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 8132LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1709) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (struct VMBCHANNEL__ **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4080LL),
                 *((_DWORD *)Current + 98),
                 *((_DWORD *)this + 84),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v31,
                 0LL,
                 0LL);
    v9 = Resident;
    if ( Resident < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = v9;
      WdLogEvent5_WdError(v21);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v32 = 0LL;
    v29 = 0LL;
    v22 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v22 + 544) + 8LL) + 976LL))(
      *((_QWORD *)this + 76),
      0LL,
      &v32,
      &v29);
    v33 = 0LL;
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v22 + 544) + 8LL) + 768LL))(
            *(_QWORD *)(v22 + 552),
            v32,
            v31 + 3,
            1LL,
            3,
            &v33,
            v30);
    v9 = v23;
    if ( v23 >= 0 )
    {
      if ( v23 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v22 + 544) + 8LL) + 984LL))(
          *(_QWORD *)(v22 + 552),
          &v29,
          &v33,
          1LL);
        LODWORD(v9) = 0;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = v9;
      WdLogEvent5_WdWarning(v27);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
  return (unsigned int)v9;
}
