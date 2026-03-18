/*
 * XREFs of ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00DB3D4
 * Callers:
 *     ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DB2D0 (-CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

void __fastcall GetVidPnPathsSourcesTargetsCount(
        struct DXGADAPTER *a1,
        struct DMMVIDPN *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v5 = a5;
  *a3 = 0;
  *a4 = 0;
  *v5 = 0;
  if ( !*((_QWORD *)a1 + 307) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 648LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v10 = (unsigned int *)((char *)a2 + 96);
  if ( v10 )
  {
    v11 = *((_QWORD *)a1 + 307);
    v12 = 0;
    v13 = v10[10];
    *a3 = v13;
    if ( *(_DWORD *)(v11 + 80) )
    {
      do
      {
        if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v10, v12, (unsigned __int64 *)&a5) >= 0 )
        {
          ++*a4;
          *v5 += (unsigned int)a5;
        }
        ++v12;
      }
      while ( v12 < *(_DWORD *)(*((_QWORD *)a1 + 307) + 80LL) );
      v13 = *a3;
    }
    if ( *v5 != (_DWORD)v13 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v15 + 24) = 676LL;
      WdLogEvent5_WdAssertion(v15);
    }
  }
}
