/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01AAB4C
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C01AA65C (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 *     ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C01AAAA4 (-InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z.c)
 *     ?LowPowerEpochCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C01AACC0 (-LowPowerEpochCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002A70 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002AB0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000E3B0 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01B8E4C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, unsigned int a2)
{
  DXGPROCESS **v4; // rdi
  DXGPROCESS *i; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *j; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v4 = (DXGPROCESS **)(a1 + 240);
  v14[1] = v14;
  v14[0] = v14;
  for ( i = *v4; i != (DXGPROCESS *)v4 && i; i = *(DXGPROCESS **)i )
  {
    DXGPROCESS::AcquireReference(i);
    v6 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
    if ( !v6 )
    {
      v10 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v10 + 24) = 4211LL;
      WdLogEvent5_WdLowResource(v10);
      break;
    }
    *v6 = i;
    v8 = v14[0];
    v9 = v6 + 1;
    if ( *(_QWORD **)(v14[0] + 8LL) != v14 )
      __fastfail(3u);
    *v9 = v14[0];
    v9[1] = v14;
    *(_QWORD *)(v8 + 8) = v9;
    v14[0] = v9;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  for ( j = (_QWORD *)v14[0]; j != v14; j = (_QWORD *)*j )
    DXGPROCESS::ApplyCsFunction(*(j - 1), a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  while ( 1 )
  {
    v12 = v14[0];
    if ( (_QWORD *)v14[0] == v14 )
      break;
    if ( *(_QWORD **)(v14[0] + 8LL) != v14 || (v13 = *(_QWORD *)v14[0], *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) != v14[0]) )
      __fastfail(3u);
    v14[0] = *(_QWORD *)v14[0];
    *(_QWORD *)(v13 + 8) = v14;
    DXGPROCESS::ReleaseReference(*(__int64 **)(v12 - 8));
    ExFreePoolWithTag((PVOID)(v12 - 8), 0);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
