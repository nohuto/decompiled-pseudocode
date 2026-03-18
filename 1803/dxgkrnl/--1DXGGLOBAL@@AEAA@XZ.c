/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C019DB90 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     McGenEventUnregister @ 0x1C0030F28 (McGenEventUnregister.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C003279C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C019D95C (-DeAllocate@DripsBlockerInfoList@@QEAAXXZ.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C01A86CC (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C01A86FC (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C01A96F8 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C01BC2DC (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C01C4464 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C01CE2E4 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C01EB464 (--1DXGBLACKBOX@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  DXGMMS_EXPORT **v2; // rbx
  __int64 v3; // rbp
  DXGMMS_EXPORT *v4; // rsi
  struct _ERESOURCE *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  void *v8; // rbx
  void *v9; // rbx
  struct DXGPROCESS *v10; // rcx
  void *v11; // rcx
  ULONG v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rcx
  _QWORD *v19; // rcx
  ReferenceCounted *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rbp
  __int64 v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax

  v2 = (DXGMMS_EXPORT **)&DXGGLOBAL::m_pDxgmmsExport;
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
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(*((void **)this + 43));
    *((_QWORD *)this + 43) = 0LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 72);
  if ( v6 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 72) = 0LL;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 73);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 73) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 74);
  if ( v8 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 74));
    operator delete(v8);
    *((_QWORD *)this + 74) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 95);
  if ( v9 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 95));
    operator delete(v9);
    *((_QWORD *)this + 95) = 0LL;
  }
  if ( *((_BYTE *)this + 881) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)this + 8);
    *((_BYTE *)this + 881) = 0;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)this + 113);
  if ( v10 )
  {
    DXGPROCESS::DestroyDxgProcess(v10);
    *((_QWORD *)this + 113) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 219);
  if ( v11 )
  {
    operator delete(v11);
    *((_QWORD *)this + 219) = 0LL;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 504));
    v13 = (*((_DWORD *)this + 224) + 31) & 0xFFFFFFE0;
    if ( v12 != (_DWORD)v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v14 + 24) = 1359LL;
      WdLogEvent5_WdAssertion(v14);
    }
    operator delete[](*((void **)this + 65));
    *((_QWORD *)this + 65) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 504), 0LL, 0);
  }
  v15 = (void *)*((_QWORD *)this + 127);
  if ( v15 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 127));
    operator delete(v15);
    *((_QWORD *)this + 127) = 0LL;
  }
  v16 = *((_QWORD *)this + 174);
  if ( v16 )
  {
    ExUnsubscribeWnfStateChange(v16);
    *((_QWORD *)this + 174) = 0LL;
  }
  v17 = *((_QWORD *)this + 197);
  if ( v17 )
  {
    ExUnsubscribeWnfStateChange(v17);
    *((_QWORD *)this + 197) = 0LL;
  }
  v18 = (void *)*((_QWORD *)this + 198);
  if ( v18 )
  {
    PoUnregisterPowerSettingCallback(v18);
    *((_QWORD *)this + 198) = 0LL;
  }
  if ( *((_DWORD *)this + 400) )
  {
    McGenEventUnregister(&SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 400) = 0;
  }
  KeCancelTimer((PKTIMER)this + 22);
  operator delete[](*((void **)this + 211));
  v19 = (_QWORD *)*((_QWORD *)this + 152);
  if ( v19 )
    DXGDIAGNOSTICS::`scalar deleting destructor'(v19);
  v20 = (ReferenceCounted *)*((_QWORD *)this + 232);
  if ( v20 )
  {
    ReferenceCounted::Release(v20);
    *((_QWORD *)this + 232) = 0LL;
  }
  if ( *((_DWORD *)this + 49) != *((_DWORD *)this + 48) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v21 + 24) = 1432LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = (_QWORD *)((char *)this + 328);
  if ( (_QWORD *)*v22 != v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v23 + 24) = 1433LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (_QWORD *)((char *)this + 392);
  if ( (_QWORD *)*v24 != v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v25 + 24) = 1434LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v26 = (_QWORD *)((char *)this + 448);
  if ( (_QWORD *)*v26 != v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v27 + 24) = 1435LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (_QWORD *)((char *)this + 1304);
  if ( (_QWORD *)*v28 != v28 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v29 + 24) = 1436LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_QWORD *)this + 129) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v30 + 24) = 1437LL;
    WdLogEvent5_WdAssertion(v30);
  }
  DXGBLACKBOX::~DXGBLACKBOX((DXGGLOBAL *)((char *)this + 1800));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1760));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1704));
  DripsBlockerInfoList::DeAllocate((DXGGLOBAL *)((char *)this + 1656));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1608));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1320));
  if ( (_QWORD *)*v28 != v28 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v32 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v32);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1144));
  if ( *((DXGGLOBAL **)this + 139) != (DXGGLOBAL *)((char *)this + 1112) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v34 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v34);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1072));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 960));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 920));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 696));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 632));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 464));
  if ( (_QWORD *)*v26 != v26 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35);
    *(_QWORD *)(v36 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v36);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 408));
  if ( (_QWORD *)*v24 != v24 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37);
    *(_QWORD *)(v38 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v38);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 352));
  if ( (_QWORD *)*v22 != v22 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v39);
    *(_QWORD *)(v40 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v40);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 288));
  if ( *((DXGGLOBAL **)this + 31) != (DXGGLOBAL *)((char *)this + 248) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41);
    *(_QWORD *)(v42 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v42);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 208));
  operator delete[](*((void **)this + 22));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136));
}
