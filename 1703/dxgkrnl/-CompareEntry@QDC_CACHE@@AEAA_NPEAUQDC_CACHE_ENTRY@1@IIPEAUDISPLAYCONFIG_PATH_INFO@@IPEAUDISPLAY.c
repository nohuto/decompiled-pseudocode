/*
 * XREFs of ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@@Z @ 0x1C01A8C4C
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00F0E98 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 * Callees:
 *     <none>
 */

char __fastcall QDC_CACHE::CompareEntry(
        QDC_CACHE *this,
        const void **a2,
        __int64 a3,
        __int64 a4,
        struct DISPLAYCONFIG_PATH_INFO *Source2,
        unsigned int a6,
        struct DISPLAYCONFIG_MODE_INFO *a7)
{
  SIZE_T v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  SIZE_T v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  SIZE_T v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9

  if ( *((_DWORD *)a2 + 2) == (_DWORD)a4 && *((_DWORD *)a2 + 6) == a6 )
  {
    v8 = 72LL * (unsigned int)a4;
    v11 = RtlCompareMemory(a2[2], Source2, v8);
    if ( v11 == v8 )
    {
      v17 = RtlCompareMemory(a2[4], a7, (unsigned __int64)a6 << 6);
      if ( v17 == (unsigned __int64)a6 << 6 )
        return 1;
      v14 = WdLogNewEntry5_WdWarning(v16, v15, v18, v19);
      *(_QWORD *)(v14 + 24) = v17;
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v12, v13);
      *(_QWORD *)(v14 + 24) = v11;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 623LL;
  }
  WdLogEvent5_WdWarning(v14);
  return 0;
}
