/*
 * XREFs of ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x140013A80
 * Callers:
 *     ?RemoveAll@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXXZ @ 0x140013D30 (-RemoveAll@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementT.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x140013DC0 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrait.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x140038144 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x14001CB64 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

char __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
        void **a1,
        unsigned int a2,
        char a3)
{
  unsigned __int64 v4; // rdi
  void **v5; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rax
  float v8; // xmm1_4
  unsigned __int64 v9; // rcx
  float v10; // xmm0_4
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  v4 = a2;
  v5 = a1;
  v6 = *a1;
  if ( v6 )
  {
    operator delete(v6);
    *v5 = 0LL;
  }
  if ( a3 )
  {
    try
    {
      v7 = 8 * v4;
      if ( !is_mul_ok(v4, 8uLL) )
        v7 = -1LL;
      *v5 = operator new[](v7);
    }
    catch ( ... )
    {
      v5 = a1;
      LODWORD(v4) = a2;
    }
    if ( !*v5 )
      return 0;
    memset(*v5, 0, 8LL * (unsigned int)v4);
  }
  *((_DWORD *)v5 + 4) = v4;
  v8 = (float)(int)v4 * *((float *)v5 + 7);
  v9 = 0LL;
  if ( v8 >= 9.223372e18 )
  {
    v8 = v8 - 9.223372e18;
    if ( v8 < 9.223372e18 )
      v9 = 0x8000000000000000uLL;
  }
  v5[4] = (void *)(v9 + (unsigned int)(int)v8);
  v10 = (float)(int)v4 * *((float *)v5 + 6);
  v11 = 0LL;
  if ( v10 >= 9.223372e18 )
  {
    v10 = v10 - 9.223372e18;
    if ( v10 < 9.223372e18 )
      v11 = 0x8000000000000000uLL;
  }
  v12 = v11 + (unsigned int)(int)v10;
  v5[5] = (void *)v12;
  if ( v12 < 0x11 )
    v5[5] = 0LL;
  return 1;
}
