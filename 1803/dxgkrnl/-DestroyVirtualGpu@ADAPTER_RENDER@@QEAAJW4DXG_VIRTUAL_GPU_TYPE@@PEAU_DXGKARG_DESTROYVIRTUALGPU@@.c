/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0173158
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0174714 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C002CEB4 (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // r15d
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD **v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  struct DXGK_VIRTUAL_GPU *v34; // rdx
  DXGVIRTUALGPUMANAGER *v35; // rcx
  struct DXGK_VIRTUAL_GPU *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD v40[2]; // [rsp+38h] [rbp-D0h] BYREF
  char v41; // [rsp+48h] [rbp-C0h]
  _BYTE v42[24]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v43[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v44[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v45[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v46[56]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v47[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v48[32]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v49[40]; // [rsp+100h] [rbp-8h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v8 = Current;
  if ( Current && (*((_BYTE *)Current + 323) & 2) != 0 )
  {
    if ( !v4 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(v9 + 200));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
        *(struct DXGDEVICE **)(v10 + 40));
      if ( *(_QWORD *)(v10 + 40) )
      {
        v40[1] = v9;
        v41 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, *(_QWORD *)(v10 + 40), 2, v11, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
        v16 = (struct _KTHREAD **)v12;
        if ( v12 < 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v17 + 24) = *(_QWORD *)(v10 + 40);
          *(_QWORD *)(v17 + 32) = v16;
          WdLogEvent5_WdWarning(v17);
LABEL_15:
          COREACCESS::~COREACCESS((COREACCESS *)v46);
          COREACCESS::~COREACCESS((COREACCESS *)v45);
          if ( v41 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
          return (unsigned int)v16;
        }
        v18 = *(_QWORD *)(a1 + 1496);
        if ( !v18 )
        {
          v19 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v19 + 24) = 1204LL;
          WdLogEvent5_WdError(v19);
LABEL_14:
          LODWORD(v16) = -1073741811;
          goto LABEL_15;
        }
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v42,
          (struct _KTHREAD **)(v18 + 40));
        VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(*(DXGVIRTUALGPUMANAGER **)(a1 + 1496), *a3);
        if ( !VirtualGpuByIndex )
        {
          v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v24 + 24) = *a3;
          WdLogEvent5_WdWarning(v24);
LABEL_13:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
          goto LABEL_14;
        }
        if ( v8 != *((struct DXGPROCESS **)VirtualGpuByIndex + 10) )
        {
          v25 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v25 + 24) = 1217LL;
          WdLogEvent5_WdError(v25);
          goto LABEL_13;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        COREACCESS::~COREACCESS((COREACCESS *)v45);
        if ( v41 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
      }
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
    v16 = (struct _KTHREAD **)v27;
    if ( v27 < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v31 + 24) = v16;
      WdLogEvent5_WdWarning(v31);
LABEL_40:
      COREACCESS::~COREACCESS((COREACCESS *)v49);
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      return (unsigned int)v16;
    }
    if ( v4 == 1 )
      v16 = *(struct _KTHREAD ***)(a1 + 1504);
    else
      v16 = *(struct _KTHREAD ***)(a1 + 1496);
    if ( !v16 )
    {
      v32 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v32 + 24) = 1234LL;
      WdLogEvent5_WdError(v32);
      LODWORD(v16) = -1073741811;
      goto LABEL_40;
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v42, v16 + 5);
    v34 = (struct DXGK_VIRTUAL_GPU *)*a3;
    if ( v4 == 1 )
      v35 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1504);
    else
      v35 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1496);
    if ( v35 && (v36 = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v35, (unsigned int)v34), (v34 = v36) != 0LL) )
    {
      if ( v8 == *((struct DXGPROCESS **)v36 + 10) )
      {
        LODWORD(v16) = (*((__int64 (__fastcall **)(struct _KTHREAD **, struct DXGK_VIRTUAL_GPU *))*v16 + 3))(v16, v36);
LABEL_39:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
        goto LABEL_40;
      }
      v37 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v37 + 24) = 1248LL;
      WdLogEvent5_WdError(v37);
    }
    else
    {
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v33);
      *(_QWORD *)(v38 + 24) = *a3;
      WdLogEvent5_WdWarning(v38);
    }
    LODWORD(v16) = -1073741811;
    goto LABEL_39;
  }
  v39 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v39 + 24) = 1177LL;
  WdLogEvent5_WdError(v39);
  return 3221225485LL;
}
