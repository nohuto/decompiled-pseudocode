/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01A9F00 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     McGenEventUnregister @ 0x1C0026AE4 (McGenEventUnregister.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0027F0C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C00FC180 (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C01A9E54 (-DeAllocate@DripsBlockerInfoList@@QEAAXXZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C01AE748 (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C01AEDD0 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C01C2DA4 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C01CA584 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  DXGMMS_EXPORT **v2; // rbx
  __int64 v3; // rbp
  DXGMMS_EXPORT *v4; // rsi
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  DXGDIAGNOSTICS *v7; // rcx
  DXGDIAGNOSTICS *v8; // rcx
  void *v9; // rbx
  void *v10; // rbx
  struct DXGPROCESS *v11; // rcx
  ULONG v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rbp
  __int64 v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  void *v46; // rcx

  v2 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  v3 = 2LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      DXGMMS_EXPORT::Release(*v2);
      operator delete(v4);
    }
    *v2++ = 0LL;
    --v3;
  }
  while ( v3 );
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 42);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    v6 = (void *)*((_QWORD *)this + 42);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + 42) = 0LL;
  }
  v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 71);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 71) = 0LL;
  }
  v8 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 72);
  if ( v8 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 72) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 73);
  if ( v9 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 73));
    operator delete(v9);
    *((_QWORD *)this + 73) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 85);
  if ( v10 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 85));
    operator delete(v10);
    *((_QWORD *)this + 85) = 0LL;
  }
  if ( *((_BYTE *)this + 801) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 688));
    *((_BYTE *)this + 801) = 0;
  }
  v11 = (struct DXGPROCESS *)*((_QWORD *)this + 103);
  if ( v11 )
  {
    DXGPROCESS::DestroyDxgProcess(v11);
    *((_QWORD *)this + 103) = 0LL;
  }
  if ( *((_QWORD *)this + 64) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)this + 31);
    v13 = (*((_DWORD *)this + 204) + 31) & 0xFFFFFFE0;
    if ( v12 != (_DWORD)v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v14 + 24) = 1350LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = (void *)*((_QWORD *)this + 64);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 64) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)this + 31, 0LL, 0);
  }
  v16 = (void *)*((_QWORD *)this + 117);
  if ( v16 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 117));
    operator delete(v16);
    *((_QWORD *)this + 117) = 0LL;
  }
  v17 = *((_QWORD *)this + 158);
  if ( v17 )
  {
    ExUnsubscribeWnfStateChange(v17);
    *((_QWORD *)this + 158) = 0LL;
  }
  v18 = *((_QWORD *)this + 181);
  if ( v18 )
  {
    ExUnsubscribeWnfStateChange(v18);
    *((_QWORD *)this + 181) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 182);
  if ( v19 )
  {
    PoUnregisterPowerSettingCallback(v19);
    *((_QWORD *)this + 182) = 0LL;
  }
  if ( *((_DWORD *)this + 368) )
  {
    McGenEventUnregister(&SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 368) = 0;
  }
  KeCancelTimer((PKTIMER)this + 20);
  v20 = (void *)*((_QWORD *)this + 195);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (void *)*((_QWORD *)this + 142);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( *((_DWORD *)this + 49) != *((_DWORD *)this + 48) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v22 + 24) = 1417LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v23 != v23 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v24 + 24) = 1418LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = (_QWORD *)((char *)this + 384);
  if ( (_QWORD *)*v25 != v25 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v26 + 24) = 1419LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = (_QWORD *)((char *)this + 440);
  if ( (_QWORD *)*v27 != v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v28 + 24) = 1420LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = (_QWORD *)((char *)this + 1176);
  if ( (_QWORD *)*v29 != v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v30 + 24) = 1421LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( *((_QWORD *)this + 119) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v31 + 24) = 1422LL;
    WdLogEvent5_WdAssertion(v31);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1576));
  DripsBlockerInfoList::DeAllocate((DXGGLOBAL *)((char *)this + 1528));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1480));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1192));
  if ( (_QWORD *)*v29 != v29 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32);
    *(_QWORD *)(v33 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v33);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1064));
  if ( *((DXGGLOBAL **)this + 129) != (DXGGLOBAL *)((char *)this + 1032) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v35 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v35);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 992));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 880));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 840));
  if ( *((_QWORD *)this + 78) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v37 + 24) = 31LL;
    WdLogEvent5_WdAssertion(v37);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 456));
  if ( (_QWORD *)*v27 != v27 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v39 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v39);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 400));
  if ( (_QWORD *)*v25 != v25 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v41 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v41);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 344));
  if ( (_QWORD *)*v23 != v23 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v43 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v43);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 280));
  if ( *((DXGGLOBAL **)this + 30) != (DXGGLOBAL *)((char *)this + 240) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v44);
    *(_QWORD *)(v45 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v45);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 200));
  v46 = (void *)*((_QWORD *)this + 22);
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136));
}
