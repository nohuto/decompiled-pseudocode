/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800B4474
 * Callers:
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x1800B3670 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800B39A0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800B3A10 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x1800B0F7C (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@PEAV312@1@Z @ 0x1800B30FC (-NewNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEle.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(char *pv, int a2, char *a3)
{
  char *v5; // rsi
  CMonitorManager::DeviceStateChangedContext *v6; // rax
  __int64 v7; // r9
  CMonitorManager::DeviceStateChangedContext *v8; // rdi
  unsigned int v9; // edi
  __int64 v10; // rax
  struct _TP_WORK *ThreadpoolWork; // r15
  signed int LastError; // eax
  __int64 *v13; // rax
  __int64 **v14; // rcx
  unsigned int *v16; // rbx
  unsigned int *v17; // rbx
  CMonitorManager::DeviceStateChangedContext *v18; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v19[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v20; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v21; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v23; // [rsp+50h] [rbp-28h]

  v19[1] = (CMonitorManager::DeviceStateChangedContext *)-2LL;
  v5 = pv;
  v6 = (CMonitorManager::DeviceStateChangedContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( v6 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      v6,
      (volatile signed __int32 *)&ATL::g_strmgr);
    *((_DWORD *)v8 + 2) = a2;
    *((_QWORD *)v8 + 2) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v18 = v8;
  v19[0] = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    goto LABEL_31;
  }
  try
  {
    if ( a3 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&a3[2 * v10] );
    }
    else
    {
      LODWORD(v10) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v8, a3, v10, v7);
  }
  catch ( ATL::CAtlException *v20 )
  {
    v16 = (unsigned int *)v20;
    if ( *(_DWORD *)v20 == -1073741571 )
      o__resetstkoflw_0();
    v9 = *v16;
    if ( (*v16 & 0x80000000) != 0 )
    {
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v18);
      goto LABEL_31;
    }
    v5 = pv;
    v8 = v18;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  *((_QWORD *)v8 + 2) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        v9);
    }
    goto LABEL_31;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 160);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v9 = 0;
  try
  {
    v13 = ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::NewNode(
            (__int64)(v5 + 200),
            (__int64 *)v19,
            *((_QWORD *)v5 + 26));
    v14 = (__int64 **)*((_QWORD *)v5 + 26);
    if ( v14 )
      *v14 = v13;
    else
      *((_QWORD *)v5 + 25) = v13;
    *((_QWORD *)v5 + 26) = v13;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v17 = (unsigned int *)v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      o__resetstkoflw_0();
    v9 = *v17;
    if ( (*v17 & 0x80000000) != 0 )
      goto LABEL_29;
    v5 = pv;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  SubmitThreadpoolWork(ThreadpoolWork);
LABEL_29:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_31:
  if ( v19[0] )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v19[0]);
  return v9;
}
