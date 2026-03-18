/*
 * XREFs of ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00C3D68
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C3940 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C3BF0 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 */

__int64 __fastcall QDC_CACHE::GetCahcedBufferSizes(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 233LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this[1], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v5);
    if ( CacheEntry )
    {
      v12 = 0;
      *a3 = *((_DWORD *)CacheEntry + 2);
    }
    else
    {
      v12 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v5;
    }
    if ( v14[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    return v12;
  }
}
