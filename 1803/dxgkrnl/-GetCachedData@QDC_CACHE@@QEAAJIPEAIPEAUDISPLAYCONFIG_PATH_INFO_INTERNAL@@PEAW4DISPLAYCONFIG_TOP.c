/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00C3C24
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00C3860 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C3BF0 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rbp
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *v15; // rbx
  __int64 v16; // rax
  int v17; // edi
  struct DXGPROCESS *Current; // rax
  int v19; // ecx
  unsigned int v20; // ebx
  _QWORD *v22; // rax
  _BYTE v23[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 267LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this[1], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    *a6 = *((_DWORD *)this + 148);
    CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v8);
    v15 = CacheEntry;
    if ( CacheEntry )
    {
      v16 = *((unsigned int *)CacheEntry + 2);
      if ( (unsigned int)v16 > *a3 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v22[3] = v8;
        v22[4] = *((unsigned int *)v15 + 2);
        v22[5] = *a3;
        WdLogEvent5_WdWarning(v22);
        v20 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)v15 + 2), 200 * v16);
        *a3 = *((_DWORD *)v15 + 2);
        if ( a5 )
          *(_DWORD *)a5 = *((_DWORD *)v15 + 6);
        v17 = *((_DWORD *)this + 148);
        Current = DXGPROCESS::GetCurrent();
        if ( v17 == *((_DWORD *)Current + 107) )
        {
          v19 = *((_DWORD *)Current + 106);
        }
        else
        {
          *((_DWORD *)Current + 106) = 0;
          v19 = 0;
          *((_DWORD *)Current + 107) = v17;
        }
        *((_DWORD *)Current + 106) = v19 + 1;
        if ( (v19 & (v19 + 1)) == 0 && v19 != 1 )
          DxgkLogCodePointPacket(0x4Du, v19 + 1, *((_DWORD *)v15 + 1), *((_DWORD *)v15 + 7), 0LL);
        v20 = 0;
      }
    }
    else
    {
      v20 = -1073741801;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v8;
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    return v20;
  }
}
