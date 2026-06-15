/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800A6634
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x1800A5800 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800A5B30 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800A5BA0 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x1800A2980 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VWorkItemBase@@@2@PEAV312@1@Z @ 0x1800A5288 (-NewNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(char *pv, int a2, char *a3)
{
  char *v5; // rsi
  CMonitorManager::DeviceStateChangedContext *v6; // rax
  CMonitorManager::DeviceStateChangedContext *v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rax
  struct _TP_WORK *ThreadpoolWork; // r15
  signed int LastError; // eax
  __int64 *v12; // rax
  __int64 **v13; // rcx
  unsigned int *v15; // rbx
  unsigned int *v16; // rbx
  CMonitorManager::DeviceStateChangedContext *v17; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v18[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v19; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v20; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v22; // [rsp+50h] [rbp-28h]

  v18[1] = (CMonitorManager::DeviceStateChangedContext *)-2LL;
  v5 = pv;
  v6 = (CMonitorManager::DeviceStateChangedContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v6, (__int64)&ATL::g_strmgr);
    *((_DWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v17 = v7;
  v18[0] = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    goto LABEL_31;
  }
  try
  {
    if ( a3 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&a3[2 * v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v7, a3, v9);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = (unsigned int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      o__resetstkoflw_0();
    v8 = *v15;
    if ( (*v15 & 0x80000000) != 0 )
    {
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v17);
      goto LABEL_31;
    }
    v5 = pv;
    v7 = v17;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  *((_QWORD *)v7 + 2) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        v8);
    }
    goto LABEL_31;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 160);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = 0;
  try
  {
    v12 = ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::NewNode(
            (__int64)(v5 + 200),
            (__int64 *)v18,
            *((_QWORD *)v5 + 26));
    v13 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v13 )
      *v13 = v12;
    else
      *((_QWORD *)v5 + 25) = v12;
    *((_QWORD *)v5 + 26) = v12;
  }
  catch ( ATL::CAtlException *v20 )
  {
    v16 = (unsigned int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      o__resetstkoflw_0();
    v8 = *v16;
    if ( (*v16 & 0x80000000) != 0 )
      goto LABEL_29;
    v5 = pv;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_29:
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_31:
  if ( v18[0] )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v18[0]);
  return v8;
}
