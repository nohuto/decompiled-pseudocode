/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400079B0
 * Callers:
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140003D20 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140004420 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x1400044B0 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400045E0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x14001FB3B (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_14001FB3B.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140035F2C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x140036718 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 */

void __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  __int64 i; // rax
  unsigned int v12; // eax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( *(_DWORD *)(a1 + 16) == 17 )
    v4 = *(_DWORD *)(a2 + 40) % 0x11u;
  else
    v4 = (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 16));
  v5 = (__int64 *)(*(_QWORD *)a1 + 8 * v4);
  v6 = *v5;
  if ( a2 == *v5 )
    goto LABEL_5;
  for ( i = *(_QWORD *)(v6 + 32); i != a2; i = *(_QWORD *)(i + 32) )
    v6 = i;
  if ( !v6 )
LABEL_5:
    *v5 = *(_QWORD *)(a2 + 32);
  else
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  v8 = v7;
  *(_QWORD *)(a1 + 8) = v7;
  if ( v7 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v12 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(a1);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::Rehash(
      a1,
      v12);
    v8 = *(_QWORD *)(a1 + 8);
  }
  if ( !v8 )
  {
    v9 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 64) = 0LL;
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
  }
}
