/*
 * XREFs of ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x18018A93C
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x18009DDD0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801A545C (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x18018AEDC (-erase@-$list@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

void __fastcall CDropShadow::RemoveVisualFromCache(CDropShadow *this, struct CVisual *a2)
{
  __int64 v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // r11
  __int64 v7; // rax
  _QWORD *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *((_QWORD *)this + 15) & std::_Hash_bytes((const unsigned __int8 *)&v13, 8uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)this + 72,
           &v12,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(struct CVisual **)(v6 + 16) == a2 )
      goto LABEL_6;
  }
  v6 = *((_QWORD *)this + 10);
LABEL_6:
  if ( v6 != *((_QWORD *)this + 10) )
  {
    v7 = std::_Hash_bytes((const unsigned __int8 *)(v6 + 16), 8uLL);
    v9 = *((_QWORD *)this + 12);
    v10 = 2 * (*((_QWORD *)this + 15) & v7);
    if ( *(_QWORD **)(v9 + 16 * (*((_QWORD *)this + 15) & v7) + 8) == v8 )
    {
      if ( *(_QWORD **)(v9 + 16 * (*((_QWORD *)this + 15) & v7)) == v8 )
      {
        *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 15) & v7)) = *((_QWORD *)this + 10);
        v9 = *((_QWORD *)this + 12);
        v11 = *((_QWORD *)this + 10);
      }
      else
      {
        v11 = v8[1];
      }
      *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
    }
    else if ( *(_QWORD **)(v9 + 16 * (*((_QWORD *)this + 15) & v7)) == v8 )
    {
      *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 15) & v7)) = *v8;
    }
    std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::erase((char *)this + 80, &v12, v8);
  }
}
