/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C3A94
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C49F8 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C3BF0 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C01C44BC (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  unsigned int v7; // ebp
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  QDC_CACHE *v16; // rcx
  unsigned int v17; // r8d
  struct QDC_CACHE::QDC_CACHE_ENTRY *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID v23; // rax
  unsigned int v24; // ebx
  void *v26; // rcx
  SIZE_T v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  void *v33; // rcx
  __int64 v34; // rax
  _BYTE v35[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 431LL;
    return 3221225659LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  if ( !a5 )
    goto LABEL_11;
  if ( (_DWORD)v9 != *((_DWORD *)this + 148) )
  {
    v29 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    v30 = *((unsigned int *)this + 148);
    *(_QWORD *)(v29 + 32) = v9;
    v24 = -1071774921;
    *(_QWORD *)(v29 + 24) = v30;
    goto LABEL_12;
  }
  CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v7);
  v18 = CacheEntry;
  if ( CacheEntry )
  {
    if ( QDC_CACHE::CompareEntry(v16, CacheEntry, v17, a5, Src) )
      goto LABEL_11;
    v32 = WdLogNewEntry5_WdAssertion(v31);
    *(_QWORD *)(v32 + 24) = 470LL;
    WdLogEvent5_WdAssertion(v32);
    v33 = (void *)*((_QWORD *)v18 + 2);
    if ( v33 )
    {
      operator delete[](v33);
      *((_QWORD *)v18 + 2) = 0LL;
    }
  }
  else
  {
    v18 = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 0, 0);
    if ( !v18 )
    {
      v24 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = 482LL;
      goto LABEL_12;
    }
  }
  if ( *((_DWORD *)v18 + 2) != a5 )
  {
    v26 = (void *)*((_QWORD *)v18 + 2);
    if ( v26 )
    {
      operator delete[](v26);
      *((_QWORD *)v18 + 2) = 0LL;
    }
  }
  v23 = (PVOID)*((_QWORD *)v18 + 2);
  if ( !v23 )
  {
    v27 = 200LL * a5;
    if ( !is_mul_ok(a5, 0xC8uLL) )
      v27 = -1LL;
    v23 = operator new[](v27, 0x43434451u, PagedPool);
    *((_QWORD *)v18 + 2) = v23;
    if ( !v23 )
    {
      v34 = WdLogNewEntry5_WdLowResource(v28);
      *(_QWORD *)(v34 + 24) = 505LL;
      WdLogEvent5_WdLowResource(v34);
      v24 = -1073741801;
      goto LABEL_12;
    }
  }
  memmove(v23, Src, 200LL * a5);
  if ( a7 )
    *((_DWORD *)v18 + 6) = *(_DWORD *)a7;
  *((_DWORD *)v18 + 7) = v8;
  *((_DWORD *)v18 + 2) = a5;
  *(_BYTE *)v18 = 1;
  *((_DWORD *)v18 + 1) = v7;
LABEL_11:
  v24 = 0;
LABEL_12:
  if ( v35[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  return v24;
}
