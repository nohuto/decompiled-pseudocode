/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018750C
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D5FD4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001C5C (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00058DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B734 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0098928 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0098958 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00989F4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0101970 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  char v7; // r14
  __int64 v8; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rax
  struct DXGDEVICE *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  struct DXGDEVICE *v58; // rbx
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  char v72; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v73; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v74[6]; // [rsp+32h] [rbp-CEh] BYREF
  struct DXGDEVICE *v75; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v76[16]; // [rsp+40h] [rbp-C0h] BYREF
  int v77; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+58h] [rbp-A8h]
  _BYTE v79[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v80[32]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v81[56]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v82[432]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *((_QWORD *)a1 + 225);
  v73 = 0;
  v74[0] = 0;
  v7 = 0;
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 2317LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v11, v10, v12, v13) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 2323LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = 2325LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 2280) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = 2326LL;
    WdLogEvent5_WdAssertion(v28);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v82,
    *(struct ADAPTER_DISPLAY **)(v4 + 2280),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v76,
    *(struct DXGFASTMUTEX *const *)(*((_QWORD *)a1 + 5) + 264LL),
    v29,
    v30);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v82, v31, v32, v33);
  v72 = 0;
  v34 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v72, 1);
  v37 = v34;
  if ( v34 >= 0 )
  {
    v75 = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v4 + 268),
                                             &v75,
                                             0LL);
    v49 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v50 = WdLogNewEntry5_WdEvent(v46);
      *(_QWORD *)(v50 + 24) = v49;
      WdLogEvent5_WdEvent(v50);
    }
    v51 = v75;
    if ( v75 )
    {
      v52 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v75 + 2) != v52 && (*((_BYTE *)v75 + 1821) || *((_BYTE *)a1 + 1821)) )
      {
        v51 = 0LL;
        v75 = 0LL;
      }
      if ( v51 )
      {
        if ( *((_QWORD *)v51 + 2) != v52 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
          *(_QWORD *)(v53 + 24) = 2377LL;
          WdLogEvent5_WdAssertion(v53);
        }
        *((_BYTE *)v51 + 1857) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, (__int64)a1, 1LL, v48, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v79);
    v58 = v75;
    if ( *(_DWORD *)(v4 + 176) == 1 )
    {
      if ( !*(_QWORD *)(v4 + 2280) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
        *(_QWORD *)(v59 + 24) = 2409LL;
        WdLogEvent5_WdAssertion(v59);
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v4 + 2280), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v4 + 2280), a1) )
      {
        MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v82, a1, 0xFFFFFFFFLL, v60);
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v4 + 2280), a1);
        v7 = 1;
        if ( v58 )
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v4 + 2280),
            v58,
            (struct COREDEVICEACCESS *)v79,
            &v73,
            v74,
            a2);
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v82, v73, v61, v62);
      }
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v79);
    if ( v58 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76, v63, v65, v66);
      *((_BYTE *)v58 + 1857) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
    }
    v43 = v72;
    if ( v72 )
    {
      v43 = 0;
      DxgkReleaseSessionModeChangeLock(v64, v63, v65, v66);
    }
    if ( v73 && v74[0] )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) + 192LL))();
    if ( v7 )
    {
      v77 = 1;
      v78 = 0LL;
      if ( (int)DxgkStatusChangeNotify(&v77, v63, v65) < 0 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v68, v67, v69, v70);
        *(_QWORD *)(v71 + 24) = 2475LL;
        WdLogEvent5_WdAssertion(v71);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v81);
    COREACCESS::~COREACCESS((COREACCESS *)v80);
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v38 + 24) = v37;
    WdLogEvent5_WdError(v38);
    v43 = v72;
  }
  if ( v43 )
    DxgkReleaseSessionModeChangeLock(v40, v39, v41, v42);
  if ( v76[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v76, v39, v41, v42);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v82, v39, v41, v42);
}
