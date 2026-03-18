/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019CDA0
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089338 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C00F2970 (DxgkDestroyDevice.c)
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001AC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007804 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C00078B8 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C000D658 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0025EF4 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E8224 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00E8254 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00E8314 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00E8460 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C00FE870 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
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
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  struct DXGDEVICE *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  struct DXGDEVICE *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
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

  v3 = *((_QWORD *)a1 + 209);
  v42 = 0;
  v43[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 2326LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v10) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2332LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 2334LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2304) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 2335LL;
    WdLogEvent5_WdAssertion(v16);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v54,
    *(struct ADAPTER_DISPLAY **)(v3 + 2304),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 296LL));
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
                                             0LL);
    v29 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v30 = WdLogNewEntry5_WdEvent(v26, v25, v27, v28);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdEvent(v30);
    }
    v31 = v44;
    if ( v44 )
    {
      v32 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v44 + 2) != v32 && (*((_BYTE *)v44 + 1693) || *((_BYTE *)a1 + 1693)) )
      {
        v31 = 0LL;
        v44 = 0LL;
      }
      if ( v31 )
      {
        if ( *((_QWORD *)v31 + 2) != v32 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v33 + 24) = 2403LL;
          WdLogEvent5_WdAssertion(v33);
        }
        *((_BYTE *)v31 + 1729) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)a1, 1, v28, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v48);
    v35 = v44;
    if ( *(_DWORD *)(v3 + 176) == 1 )
    {
      if ( !*(_QWORD *)(v3 + 2304) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v36 + 24) = 2435LL;
        WdLogEvent5_WdAssertion(v36);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2304), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2304), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, (struct _KTHREAD **)a1, -1);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2304), a1);
        v7 = 1;
        if ( v35 )
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v3 + 2304),
            v35,
            (struct COREDEVICEACCESS *)v48,
            &v42,
            v43,
            a2);
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v54, v42);
      }
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2304), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2304), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2304), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v48);
    if ( v35 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
      *((_BYTE *)v35 + 1729) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
    v23 = v41;
    if ( v41 )
    {
      v23 = 0;
      DxgkReleaseSessionModeChangeLock(v38);
    }
    if ( v42 && v43[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 192LL))();
    if ( v7 )
    {
      v46 = 1;
      v47 = 0LL;
      if ( (int)DxgkStatusChangeNotify(&v46, v37) < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v40 + 24) = 2512LL;
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
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2304), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2304), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2304), a1);
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
