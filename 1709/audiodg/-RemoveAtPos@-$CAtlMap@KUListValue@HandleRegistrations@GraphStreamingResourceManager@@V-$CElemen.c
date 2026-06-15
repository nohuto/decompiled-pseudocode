/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005470
 * Callers:
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140002790 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z @ 0x140002E70 (-UnregisterThread@GraphStreamingResourceManager@@UEAAXPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140002F00 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140003030 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     _ATL::CAtlMap_unsigned_long_GraphStreamingResourceManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_GraphStreamingResourceManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x1400208BB (_ATL--CAtlMap_unsigned_long_GraphStreamingResourceManager--HandleRegistrations--Lis_ea_1400208BB.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14003735C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x140037B40 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 */

void __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  __int64 i; // rax
  unsigned int v11; // eax

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
  v7 = --*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = a2;
  if ( v7 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v11 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(a1);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::Rehash(
      a1,
      v11);
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v8 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 64) = 0LL;
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
  }
}
