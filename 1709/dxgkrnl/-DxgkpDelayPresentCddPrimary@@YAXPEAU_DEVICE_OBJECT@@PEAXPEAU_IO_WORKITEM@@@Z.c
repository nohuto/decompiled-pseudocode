/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0174900
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C008FFAC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C00902B4 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r15
  __int64 v8; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rbx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER **v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r14
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  struct DXGGLOBAL *v26; // rax
  struct DXGCONTEXT *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  struct DXGCONTEXT *v31; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v32; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v33[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGADAPTER *v34; // [rsp+48h] [rbp-B8h]
  char v35; // [rsp+50h] [rbp-B0h]
  _BYTE v36[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  char v39; // [rsp+80h] [rbp-80h]
  _QWORD v40[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v41[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v43[56]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v44[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v45[8]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v46[32]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v47[56]; // [rsp+168h] [rbp+68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF
  char v49; // [rsp+1D0h] [rbp+D0h]

  v32 = 0LL;
  v31 = 0LL;
  Global = DXGGLOBAL::GetGlobal(IoObject);
  v5 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 73));
  v7 = (struct _KTHREAD **)v5;
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 297LL;
    WdLogEvent5_WdError(v8);
    if ( Context )
      ExFreePoolWithTag(Context, 0);
    return;
  }
  v49 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v5 + 2324));
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v32, &v31);
  v11 = v32;
  v12 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36, v32);
    v15 = *(DXGADAPTER ***)(*((_QWORD *)v11 + 209) + 2304LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v44,
      &v31,
      1u);
    v34 = v15[2];
    v35 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v11, 1, v16, 0);
    if ( v44[0] )
    {
      v19 = COREDEVICEACCESS::AcquireExclusive((__int64)v41, 1LL);
      v21 = v19;
      if ( v19 >= 0 )
      {
        if ( !DXGADAPTER::UsingSetTimingsFromVidPn(v15[2])
          || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v15, Context[1].LowPart)
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v15, Context[1].LowPart) != 3 )
        {
          goto LABEL_19;
        }
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v15, Context[1].LowPart, 0) )
          goto LABEL_19;
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v15, Context[1].LowPart) )
          goto LABEL_19;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v15, Context[1].LowPart) )
          goto LABEL_19;
        v23 = ADAPTER_DISPLAY::PresentCddPrimary(
                (ADAPTER_DISPLAY *)v15,
                v31,
                Context[1].LowPart,
                (struct COREDEVICEACCESS *)v41);
        v25 = v23;
        if ( v23 >= 0 )
          goto LABEL_19;
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v22[3] = Context[1].LowPart;
        v22[4] = v15[2];
        v22[5] = v25;
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v22[3] = v11;
        v22[4] = v21;
      }
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 346LL;
      WdLogEvent5_WdLowResource(v18);
    }
LABEL_19:
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v44);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36);
    goto LABEL_22;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v13[3] = Context->HighPart;
  v13[4] = Context->LowPart;
  v13[5] = v12;
  WdLogEvent5_WdError(v13);
LABEL_22:
  v26 = DXGGLOBAL::GetGlobal(v14);
  DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((struct _KTHREAD ****)v26 + 73), v7);
  if ( v31 )
  {
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v31 + 4) )
    {
      v27 = v31;
      v28 = *((_QWORD *)v31 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
        (struct DXGDEVICE *)v28);
      v29 = *((_QWORD *)v27 + 2);
      v39 = 0;
      v38 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v28, 2, v30, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v45);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v28, v31, (struct COREDEVICEACCESS *)v45);
      COREACCESS::~COREACCESS((COREACCESS *)v47);
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      if ( v39 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      if ( v40[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v28 + 64)) )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
    }
    v11 = v32;
  }
  if ( v11 && !_InterlockedDecrement64((volatile signed __int64 *)v11 + 8) )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  if ( Context )
    ExFreePoolWithTag(Context, 0);
  if ( v49 )
    KeUnstackDetachProcess(&ApcState);
}
