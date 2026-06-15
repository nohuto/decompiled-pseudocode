/*
 * XREFs of ??1?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA@XZ @ 0x180024070
 * Callers:
 *     ??1CTrackedEndpoint@@UEAA@XZ @ 0x1800239CC (--1CTrackedEndpoint@@UEAA@XZ.c)
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$5 @ 0x180028F25 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180024178 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?PickSize@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAI_K@Z @ 0x180024378 (-PickSize@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAI_K@Z.c)
 *     ?FreeNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180024530 (-FreeNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::~CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>(
        __int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      while ( v3 )
      {
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::FreeNode(
          a1,
          v4);
      }
    }
  }
  v5 = *(void **)a1;
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v7 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::PickSize(
           a1,
           0LL);
    ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
      a1,
      v7,
      0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v8 = *(_QWORD **)(a1 + 56);
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      free(v8);
      v8 = v9;
    }
    while ( v9 );
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  --*(_DWORD *)(a1 + 48);
}
