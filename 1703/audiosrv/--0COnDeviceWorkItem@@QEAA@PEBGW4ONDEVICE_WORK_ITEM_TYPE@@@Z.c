/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180023CF4
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180023F38 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800818B0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180023600 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, _WORD *a2, int a3)
{
  int v3; // r12d
  _QWORD *v5; // rsi
  __int64 *v6; // rdi
  struct ATL::CStringData *(__fastcall *v7)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  char *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  char *v14; // rcx
  __int64 v15; // r14
  ATL::CAtlException *v17; // [rsp+28h] [rbp-30h] BYREF

  v3 = a3;
  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  v6 = a1 + 1;
  v7 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24);
  if ( v7 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v7((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *v6 = (__int64)NilString + 24;
  try
  {
    if ( !a2 )
      goto LABEL_25;
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    if ( !(_DWORD)v11 )
    {
LABEL_25:
      ATL::CSimpleStringT<unsigned short,0>::Empty(v6);
      goto LABEL_32;
    }
    v12 = *(unsigned int *)(*v6 - 16);
    v13 = ((__int64)a2 - *v6) >> 1;
    if ( ((1 - *(_DWORD *)(*v6 - 8)) | (*(_DWORD *)(*v6 - 12) - (int)v11)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)v6, v11, 0LL, v10);
    v14 = (char *)*v6;
    if ( v13 <= v12 )
    {
      v9 = &v14[2 * v13];
      v15 = 2LL * (int)v11;
      if ( !v15 )
        goto LABEL_14;
      if ( v14 && v9 )
      {
        memmove(v14, v9, 2LL * (int)v11);
        goto LABEL_14;
      }
    }
    else
    {
      v15 = 2LL * (int)v11;
      if ( !v15 )
        goto LABEL_14;
      if ( v14 )
      {
        memcpy_0(v14, a2, 2LL * (int)v11);
        goto LABEL_14;
      }
    }
    *(_DWORD *)_o__errno(v14, v9, 0LL, v10) = 22;
    invalid_parameter_noinfo();
LABEL_14:
    if ( (int)v11 < 0 || (int)v11 > *(_DWORD *)(*v6 - 12) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*v6 - 16) = v11;
    *(_WORD *)(v15 + *v6) = 0;
  }
  catch ( ATL::CAtlException *v17 )
  {
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v5 = a1;
    v3 = a3;
  }
LABEL_32:
  *((_DWORD *)v5 + 4) = v3;
  return v5;
}
