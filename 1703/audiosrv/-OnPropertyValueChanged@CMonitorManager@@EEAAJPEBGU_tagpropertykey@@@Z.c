/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18002D2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800B1690 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_S_guid_D @ 0x1800B51F4 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(CMonitorManager *this, char *a2, struct _tagpropertykey *a3)
{
  struct _tagpropertykey *v3; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  ATL::CAtlException *v10; // rbx
  __int64 *v11; // rdx
  PropertyChangedContext *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9
  PropertyChangedContext *v15; // r14
  PropertyChangedContext *v16; // rbx
  unsigned int v17; // esi
  CVolumeStrip *v18; // rcx
  __int64 v19; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  __int64 v22; // [rsp+0h] [rbp-88h] BYREF
  int v23; // [rsp+30h] [rbp-58h]
  PropertyChangedContext *v24; // [rsp+38h] [rbp-50h]
  PropertyChangedContext *v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]
  ATL::CAtlException *v27; // [rsp+50h] [rbp-38h] BYREF
  struct _tagpropertykey *v28; // [rsp+58h] [rbp-30h]

  v26 = -2LL;
  v3 = a3;
  v28 = a3;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + v6);
    if ( v3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&v3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&v3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)v3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
        break;
    }
    v6 += 16LL;
    if ( v6 >= 0x50 )
      return 0LL;
  }
  v12 = (PropertyChangedContext *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v12;
  v25 = v12;
  if ( v12 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      v12,
      (volatile signed __int32 *)&ATL::g_strmgr);
    *((_QWORD *)v15 + 4) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v15 + 5) = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  v24 = v15;
  v16 = v15;
  v25 = v15;
  if ( !v15 )
  {
    v17 = -2147024882;
    v18 = WPP_GLOBAL_Control;
LABEL_38:
    if ( v18 != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v18 + 7) & 0x800000) != 0
      && *((_BYTE *)v18 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v18 + 2), 34LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v17);
    }
    goto LABEL_42;
  }
  v17 = 0;
  try
  {
    if ( a2 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)&a2[2 * v19] );
    }
    else
    {
      LODWORD(v19) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v15, a2, v19, v14);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v11 = &v22;
    v10 = v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      o__resetstkoflw_0();
    v23 = *(_DWORD *)v10;
    v17 = v23;
    if ( v23 < 0 )
    {
      PropertyChangedContext::`scalar deleting destructor'(v24, (unsigned int)v11);
      v16 = v25;
LABEL_36:
      v18 = WPP_GLOBAL_Control;
      goto LABEL_37;
    }
    v16 = v25;
    v15 = v24;
    v3 = v28;
  }
  *(GUID *)((char *)v15 + 8) = v3->fmtid;
  *((_DWORD *)v15 + 6) = v3->pid;
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandlePropertyValueChanged, v15, 0LL);
  *((_QWORD *)v15 + 5) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v16 = 0LL;
    goto LABEL_36;
  }
  LastError = GetLastError();
  v17 = LastError;
  if ( LastError > 0 )
    v17 = (unsigned __int16)LastError | 0x80070000;
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, v17);
    goto LABEL_36;
  }
LABEL_37:
  if ( (v17 & 0x80000000) != 0 )
    goto LABEL_38;
LABEL_42:
  if ( v16 )
    PropertyChangedContext::`scalar deleting destructor'(v16, v13);
  return v17;
}
