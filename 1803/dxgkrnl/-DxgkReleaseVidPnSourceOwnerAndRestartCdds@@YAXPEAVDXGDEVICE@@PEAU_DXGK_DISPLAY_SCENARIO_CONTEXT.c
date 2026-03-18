/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A4EC
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CB0C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00A0808 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014AA4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014B58 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00154FC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0019AFC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C002F684 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C010B90C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C010B938 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C010B9D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C010BB20 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C010CF28 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v4; // r15
  __int64 v8; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  char v23; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  struct DXGDEVICE *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct DXGDEVICE *v33; // rbx
  ADAPTER_DISPLAY *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  char v41; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v42; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v43[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v44; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v45[16]; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  _BYTE v48[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[32]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v50[56]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v51[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v52[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v53[56]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v54[432]; // [rsp+130h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a1 + 211);
  v4 = 0;
  v42 = 0;
  v43[0] = 0;
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 2438LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v10) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2444LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 2446LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2456) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 2447LL;
    WdLogEvent5_WdAssertion(v16);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v54,
    *(struct ADAPTER_DISPLAY **)(v3 + 2456),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 312LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v54);
  v41 = 0;
  v17 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v41, 1);
  v19 = v17;
  if ( v17 >= 0 )
  {
    v44 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 268),
                                             &v44,
                                             0LL,
                                             0LL);
    v28 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v29 = WdLogNewEntry5_WdEvent(v26, v25);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdEvent(v29);
    }
    v30 = v44;
    if ( v44 )
    {
      v31 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v44 + 2) != v31 && ((*((_BYTE *)v44 + 1709) & 1) != 0 || (*((_BYTE *)a1 + 1709) & 1) != 0) )
      {
        v30 = 0LL;
        v44 = 0LL;
      }
      if ( v30 )
      {
        if ( *((_QWORD *)v30 + 2) != v31 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v32 + 24) = 2516LL;
          WdLogEvent5_WdAssertion(v32);
        }
        *((_BYTE *)v30 + 1745) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)a1, 1, v27, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v48);
    v33 = v44;
    if ( *(_DWORD *)(v3 + 176) == 1 )
    {
      v34 = *(ADAPTER_DISPLAY **)(v3 + 2456);
      if ( !v34 )
      {
        v35 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v35 + 24) = 2548LL;
        WdLogEvent5_WdAssertion(v35);
        v34 = *(ADAPTER_DISPLAY **)(v3 + 2456);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v34, a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2456), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, a1, -1);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2456), a1);
        v4 = 1;
        if ( v33 )
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v3 + 2456),
            v33,
            (struct COREDEVICEACCESS *)v48,
            &v42,
            v43,
            a2);
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, v42);
      }
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2456), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2456), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2456), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v48);
    if ( v33 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
      *((_BYTE *)v33 + 1745) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
    v23 = v41;
    if ( v41 )
    {
      v23 = 0;
      DxgkReleaseSessionModeChangeLock(v37);
    }
    if ( v42 && v43[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 104LL) + 192LL))();
    if ( v4 )
    {
      v47 = 0LL;
      v46 = 1;
      if ( (int)DxgkStatusChangeNotify(&v46, v36, v38) < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v40 + 24) = 2625LL;
        WdLogEvent5_WdAssertion(v40);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v50);
    COREACCESS::~COREACCESS((COREACCESS *)v49);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdError(v20);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)a1, 1, v22, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v51);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2456), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2456), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2456), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v53);
      COREACCESS::~COREACCESS((COREACCESS *)v52);
    }
    v23 = v41;
  }
  if ( v23 )
    DxgkReleaseSessionModeChangeLock(v21);
  if ( v45[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v54);
}
