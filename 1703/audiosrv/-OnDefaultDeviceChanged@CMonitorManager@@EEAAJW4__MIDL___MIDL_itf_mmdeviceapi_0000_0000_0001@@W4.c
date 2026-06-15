/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800B3400
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x1800907E8 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x1800B1644 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  DefaultChangedContext *v8; // rax
  __int64 v9; // r9
  DefaultChangedContext *v10; // r14
  DefaultChangedContext *v11; // rbx
  signed int v12; // esi
  CVolumeStrip *v13; // rcx
  __int64 v14; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v18; // rbx
  ATL::CAtlException *v19; // [rsp+48h] [rbp-20h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
      a4);
  }
  if ( a2 || a3 )
    return 0LL;
  v8 = (DefaultChangedContext *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( v8 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      v8,
      (volatile signed __int32 *)&ATL::g_strmgr);
    *((_QWORD *)v10 + 1) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v10 + 2) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = WPP_GLOBAL_Control;
LABEL_33:
    if ( v13 != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x800000) != 0
      && *((_BYTE *)v13 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v13 + 2), 0x1Au, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v12);
    }
    goto LABEL_37;
  }
  v12 = 0;
  try
  {
    if ( a4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a4[v14] );
    }
    else
    {
      LODWORD(v14) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v10, (char *)a4, v14, v9);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v18 = (signed int *)v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      o__resetstkoflw_0();
    v12 = *v18;
    if ( *v18 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v10);
      v11 = v10;
LABEL_31:
      v13 = WPP_GLOBAL_Control;
      goto LABEL_32;
    }
    v11 = v10;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v10, 0LL);
  *((_QWORD *)v10 + 2) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
    goto LABEL_31;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v12);
    goto LABEL_31;
  }
LABEL_32:
  if ( v12 < 0 )
    goto LABEL_33;
LABEL_37:
  if ( v11 )
    DefaultChangedContext::`scalar deleting destructor'(v11);
  return (unsigned int)v12;
}
