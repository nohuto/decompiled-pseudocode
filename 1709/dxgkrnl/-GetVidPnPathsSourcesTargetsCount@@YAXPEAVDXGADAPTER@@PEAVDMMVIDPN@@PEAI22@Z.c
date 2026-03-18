/*
 * XREFs of ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00B68B0
 * Callers:
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6000 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

void __fastcall GetVidPnPathsSourcesTargetsCount(
        struct DXGADAPTER *a1,
        struct DMMVIDPN *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  DMMVIDPNTOPOLOGY *v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax

  v5 = a5;
  *a3 = 0;
  *a4 = 0;
  *v5 = 0;
  if ( !*((_QWORD *)a1 + 288) )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 640LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v10 = (struct DMMVIDPN *)((char *)a2 + 96);
  if ( v10 )
  {
    v11 = 0;
    for ( *a3 = *((_DWORD *)v10 + 10); v11 < *(_DWORD *)(*((_QWORD *)a1 + 288) + 80LL); ++v11 )
    {
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v10, v11, (unsigned __int64 *)&a5) >= 0 )
      {
        ++*a4;
        *v5 += (unsigned int)a5;
      }
    }
    if ( *v5 != *a3 )
    {
      v13 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v13 + 24) = 668LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
}
