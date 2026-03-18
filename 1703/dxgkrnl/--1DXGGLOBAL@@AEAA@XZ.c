/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019486C
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01952D8 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000BA4C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0038408 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C00A6458 (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C01988E8 (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C0198F70 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C01A8C00 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C01B07C8 (--1DXGSESSIONMGR@@QEAA@XZ.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rcx
  void *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rbp
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  void *v77; // rcx

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
    v16 = (*((_DWORD *)this + 204) + 31) & 0xFFFFFFE0;
    if ( v12 != (_DWORD)v16 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16, v13, v14, v15);
      *(_QWORD *)(v17 + 24) = 1335LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = (void *)*((_QWORD *)this + 64);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    *((_QWORD *)this + 64) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)this + 31, 0LL, 0);
  }
  v19 = (void *)*((_QWORD *)this + 117);
  if ( v19 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 117));
    operator delete(v19);
    *((_QWORD *)this + 117) = 0LL;
  }
  v20 = *((_QWORD *)this + 160);
  if ( v20 )
    ExUnsubscribeWnfStateChange(v20);
  KeCancelTimer((PKTIMER)((char *)this + 1296));
  v24 = (void *)*((_QWORD *)this + 185);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( *((_DWORD *)this + 49) != *((_DWORD *)this + 48) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    *(_QWORD *)(v25 + 24) = 1372LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v26 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v26 != v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    *(_QWORD *)(v27 + 24) = 1373LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (_QWORD *)((char *)this + 384);
  if ( (_QWORD *)*v28 != v28 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    *(_QWORD *)(v29 + 24) = 1374LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v30 = (_QWORD *)((char *)this + 440);
  if ( (_QWORD *)*v30 != v30 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    *(_QWORD *)(v31 + 24) = 1375LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( *((_QWORD *)this + 119) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    *(_QWORD *)(v32 + 24) = 1376LL;
    WdLogEvent5_WdAssertion(v32);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1208), v21, v22, v23);
  if ( *((DXGGLOBAL **)this + 149) != (DXGGLOBAL *)((char *)this + 1192) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    *(_QWORD *)(v37 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v37);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1152), v33, v35, v36);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1064), v38, v39, v40);
  if ( *((DXGGLOBAL **)this + 129) != (DXGGLOBAL *)((char *)this + 1032) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
    *(_QWORD *)(v45 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v45);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 992), v41, v43, v44);
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 880));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 840), v46, v47, v48);
  if ( *((_QWORD *)this + 78) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
    *(_QWORD *)(v53 + 24) = 31LL;
    WdLogEvent5_WdAssertion(v53);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 456), v49, v51, v52);
  if ( (_QWORD *)*v30 != v30 )
  {
    v58 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
    *(_QWORD *)(v58 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v58);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 400), v54, v56, v57);
  if ( (_QWORD *)*v28 != v28 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v60, v59, v61, v62);
    *(_QWORD *)(v63 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v63);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 344), v59, v61, v62);
  if ( (_QWORD *)*v26 != v26 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
    *(_QWORD *)(v68 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v68);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 280), v64, v66, v67);
  if ( *((DXGGLOBAL **)this + 30) != (DXGGLOBAL *)((char *)this + 240) )
  {
    v73 = WdLogNewEntry5_WdAssertion(v70, v69, v71, v72);
    *(_QWORD *)(v73 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v73);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 200), v69, v71, v72);
  v77 = (void *)*((_QWORD *)this + 22);
  if ( v77 )
    ExFreePoolWithTag(v77, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136), v74, v75, v76);
}
