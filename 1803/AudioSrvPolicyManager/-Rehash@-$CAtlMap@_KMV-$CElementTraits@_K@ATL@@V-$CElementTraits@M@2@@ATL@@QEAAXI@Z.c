/*
 * XREFs of ?Rehash@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAAXI@Z @ 0x180017E84
 * Callers:
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180018048 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001818C (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 *     ?NewNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x18002D27C (-NewNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KI.c)
 *     ?FreeNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002D3B8 (-FreeNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180017DB8 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?PickSize@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAI_K@Z @ 0x180017FC0 (-PickSize@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAI_K@Z.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXXZ @ 0x180018234 (-UpdateRehashThresholds@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAX.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // r15
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // r14
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  void *v12; // rbx
  HANDLE v13; // rax
  unsigned int v15; // [rsp+68h] [rbp+10h]
  void *v16; // [rsp+70h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+20h]

  v15 = a2;
  v2 = a2;
  v3 = a1;
  if ( !a2 )
  {
    v2 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 8));
    v15 = v2;
  }
  if ( v2 != *(_DWORD *)(v3 + 16) )
  {
    if ( *(_QWORD *)v3 )
    {
      try
      {
        v4 = v2;
        v17 = v2;
        v5 = 8LL * v2;
        if ( !is_mul_ok(v2, 8uLL) )
          v5 = -1LL;
        ProcessHeap = GetProcessHeap();
        v7 = HeapAlloc(ProcessHeap, 0, v5);
        v16 = v7;
      }
      catch ( ... )
      {
        v3 = a1;
        v2 = v15;
        v7 = v16;
        v4 = v17;
      }
      if ( !v7 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v7, 0, 8 * v4);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 16); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v9 + 16);
            v11 = *(_DWORD *)(v9 + 24) % v2;
            *(_QWORD *)(v9 + 16) = *((_QWORD *)v7 + v11);
            *((_QWORD *)v7 + (unsigned int)v11) = v9;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      v12 = *(void **)v3;
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
      *(_QWORD *)v3 = v7;
      *(_DWORD *)(v3 + 16) = v2;
      ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::UpdateRehashThresholds(v3);
    }
    else
    {
      ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
        (void **)v3,
        v2,
        0);
    }
  }
}
