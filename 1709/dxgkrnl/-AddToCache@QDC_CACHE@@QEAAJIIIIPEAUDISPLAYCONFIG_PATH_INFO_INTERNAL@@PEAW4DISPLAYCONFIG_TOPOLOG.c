/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D2C20
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0F88 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00D2D78 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C01C3690 (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  __int64 v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  QDC_CACHE *v14; // rcx
  unsigned int v15; // r8d
  struct QDC_CACHE::QDC_CACHE_ENTRY *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v21; // rcx
  SIZE_T v22; // rax
  PVOID v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rcx
  __int64 v30; // rax
  _BYTE v31[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 431LL;
    return 3221225659LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  if ( (_DWORD)v9 != *((_DWORD *)this + 148) )
  {
    v25 = WdLogNewEntry5_WdTrace(v12, v11);
    v26 = *((unsigned int *)this + 148);
    *(_QWORD *)(v25 + 32) = v9;
    v19 = -1071774921;
    *(_QWORD *)(v25 + 24) = v26;
    goto LABEL_11;
  }
  CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, a4);
  v16 = CacheEntry;
  if ( CacheEntry )
  {
    if ( QDC_CACHE::CompareEntry(v14, CacheEntry, v15, a5, Src) )
      goto LABEL_10;
    v28 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v28 + 24) = 462LL;
    WdLogEvent5_WdAssertion(v28);
    v29 = (void *)*((_QWORD *)v16 + 2);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *((_QWORD *)v16 + 2) = 0LL;
    }
  }
  else
  {
    v16 = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 0, 0);
    if ( !v16 )
    {
      v19 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = 474LL;
      goto LABEL_11;
    }
  }
  if ( *((_DWORD *)v16 + 2) != a5 )
  {
    v21 = (void *)*((_QWORD *)v16 + 2);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v16 + 2) = 0LL;
    }
  }
  if ( !*((_QWORD *)v16 + 2) )
  {
    v22 = 192LL * a5;
    if ( !is_mul_ok(a5, 0xC0uLL) )
      v22 = -1LL;
    v23 = operator new[](v22, 0x43434451u, PagedPool);
    *((_QWORD *)v16 + 2) = v23;
    if ( !v23 )
    {
      v30 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v30 + 24) = 497LL;
      WdLogEvent5_WdLowResource(v30);
      v19 = -1073741801;
      goto LABEL_11;
    }
  }
  memmove(*((void **)v16 + 2), Src, 192LL * a5);
  if ( a7 )
    *((_DWORD *)v16 + 6) = *(_DWORD *)a7;
  *((_DWORD *)v16 + 7) = a3;
  *((_DWORD *)v16 + 2) = a5;
  *(_BYTE *)v16 = 1;
  *((_DWORD *)v16 + 1) = a4;
LABEL_10:
  v19 = 0;
LABEL_11:
  if ( v31[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
  return v19;
}
