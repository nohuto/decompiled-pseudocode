/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F2C74
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F8238 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00018B8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001A40 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DpiDisableD3Requests @ 0x1C0001CAC (DpiDisableD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000BC00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00162D4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C0098DA4 (-TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00F1184 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C00F2820 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // si
  __int64 v4; // rax
  __int64 v5; // r9
  int *i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  DXGDEVICE *v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+40h] [rbp-41h]
  _BYTE v15[8]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v16; // [rsp+50h] [rbp-31h]
  char v17; // [rsp+58h] [rbp-29h]
  _BYTE v18[24]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v19[8]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v20[32]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v21[56]; // [rsp+A0h] [rbp+1Fh] BYREF

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 185) )
  {
    v14 = 0;
    v13 = this;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v13) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v13);
      v3 = 1;
    }
    v4 = *((_QWORD *)this + 2);
    v17 = 0;
    v16 = *(_QWORD *)(v4 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)this, 0, v5, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v19) >= 0 )
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v18, (DXGDEVICE *)((char *)this + 304));
      for ( i = (int *)*((_QWORD *)this + 45); i != (int *)((char *)this + 360) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          0,
          i[88]);
        *((_BYTE *)i + 397) = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          DpiDisableD3Requests(*(_QWORD *)(v10 + 192));
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v19);
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 1);
          DXGDEVICE::FlushPagingQueues(this);
          LOBYTE(v11) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                  + 1112LL))(
            *((_QWORD *)this + 76),
            v11);
          DpiEnableD3Requests(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 192LL));
        }
        else
        {
          DXGDEVICE::FlushScheduler(this, 1u);
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
          DXGDEVICE::TrimAllDmaPoolsToMinimum(this);
        }
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v12 + 24) = this;
        WdLogEvent5_WdWarning(v12);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    if ( v17 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    if ( v13 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v13);
  }
}
