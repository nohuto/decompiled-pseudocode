/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x18002ABC8
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x18002C738 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x180062F20 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, char *a2, int a3)
{
  int v3; // edi
  _QWORD *v5; // rbx
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v5[1] = (char *)NilString + 24;
  try
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&a2[2 * v9] );
      v8 = v9;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v5 + 1, a2, v8);
  }
  catch ( ATL::CAtlException *v11 )
  {
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v5 = a1;
    v3 = a3;
  }
  *((_DWORD *)v5 + 4) = v3;
  return v5;
}
