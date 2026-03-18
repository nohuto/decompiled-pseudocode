/*
 * XREFs of ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C019F924
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C019E618 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 *     ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C019F718 (-InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z.c)
 *     ?LowPowerEpochCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C019FAE0 (-LowPowerEpochCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C00327F0 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01B61A0 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::IterateProcessAndApplyCSFn(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  DXGPROCESS *Current; // rax
  DXGPROCESS *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *i; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-8h]

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v16[1] = v16;
  v16[0] = v16;
  v4 = a1 + 248;
  v5 = *(_QWORD **)(a1 + 248);
  v18 = v4;
  while ( 1 )
  {
    v19 = v5;
    Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(&v18);
    v7 = Current;
    if ( !Current )
      break;
    DXGPROCESS::AcquireReference(Current);
    v8 = operator new(0x18uLL, 0x4B677844u, 1, PagedPool);
    if ( !v8 )
    {
      v12 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v12 + 24) = 4561LL;
      WdLogEvent5_WdLowResource(v12);
      break;
    }
    *v8 = v7;
    v10 = v16[0];
    v11 = v8 + 1;
    if ( *(_QWORD **)(v16[0] + 8LL) != v16 )
      __fastfail(3u);
    *v11 = v16[0];
    v11[1] = v16;
    *(_QWORD *)(v10 + 8) = v11;
    v16[0] = v11;
    v5 = (_QWORD *)*v5;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  for ( i = (_QWORD *)v16[0]; i != v16; i = (_QWORD *)*i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v18, *(struct DXGFASTMUTEX *const *)(*(i - 1) + 112LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
    DXGPROCESS::ApplyCsFunction(*(i - 1), a2);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v18);
    if ( (_BYTE)v19 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v18);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  while ( 1 )
  {
    v14 = v16[0];
    if ( (_QWORD *)v16[0] == v16 )
      break;
    if ( *(_QWORD **)(v16[0] + 8LL) != v16 || (v15 = *(_QWORD *)v16[0], *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) != v16[0]) )
      __fastfail(3u);
    v16[0] = *(_QWORD *)v16[0];
    *(_QWORD *)(v15 + 8) = v16;
    DXGPROCESS::ReleaseReference(*(DXGPROCESS **)(v14 - 8));
    operator delete((void *)(v14 - 8));
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
