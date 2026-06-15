/*
 * XREFs of ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x18002D160
 * Callers:
 *     ??1CTrackedEndpoint@@UEAA@XZ @ 0x18002CB30 (--1CTrackedEndpoint@@UEAA@XZ.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$5 @ 0x180037AD0 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180017DB8 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?PickSize@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAI_K@Z @ 0x180017FC0 (-PickSize@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAI_K@Z.c)
 *     ?FreeNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002D3B8 (-FreeNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::~CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rbx
  __int64 i; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  HANDLE ProcessHeap; // rax
  unsigned int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)v2 + i);
      v3 = v2;
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 16);
          ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::FreeNode(
            a1,
            v6);
        }
        while ( v5 );
        v2 = *(void **)a1;
        v3 = *(void **)a1;
      }
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v8 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::PickSize(
           a1,
           0LL);
    ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
      (void **)a1,
      v8,
      0);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = *(_QWORD **)(a1 + 56);
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      free(v9);
      v9 = v10;
    }
    while ( v10 );
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  --*(_DWORD *)(a1 + 48);
}
