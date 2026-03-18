/*
 * XREFs of ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18017FC54
 * Callers:
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18002BD10 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180051170 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?erase@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@Z @ 0x180155294 (-erase@-$list@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$allocator@.c)
 */

void __fastcall CAnimationLoggingManager::FreeCommentForResource(CAnimationLoggingManager *this, struct CResource *a2)
{
  __int64 v4; // r11
  __int64 *i; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct CResource *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = *((_QWORD *)this + 17) & std::_Hash_bytes((const unsigned __int8 *)&v10, 8uLL);
  for ( i = *(__int64 **)(*((_QWORD *)this + 14) + 16 * v4);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
                           (__int64)this + 88,
                           &v10,
                           v4);
        i = (__int64 *)*i )
  {
    if ( (struct CResource *)i[2] == a2 )
      goto LABEL_7;
  }
  i = (__int64 *)*((_QWORD *)this + 12);
LABEL_7:
  if ( i != *((__int64 **)this + 12) )
  {
    operator delete((void *)i[4]);
    v6 = std::_Hash_bytes((const unsigned __int8 *)i + 16, 8uLL);
    v7 = *((_QWORD *)this + 14);
    v8 = 2 * (*((_QWORD *)this + 17) & v6);
    if ( *(__int64 **)(v7 + 16 * (*((_QWORD *)this + 17) & v6) + 8) == i )
    {
      if ( *(__int64 **)(v7 + 16 * (*((_QWORD *)this + 17) & v6)) == i )
      {
        *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 17) & v6)) = *((_QWORD *)this + 12);
        v7 = *((_QWORD *)this + 14);
        v9 = *((_QWORD *)this + 12);
      }
      else
      {
        v9 = i[1];
      }
      *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
    }
    else if ( *(__int64 **)(v7 + 16 * (*((_QWORD *)this + 17) & v6)) == i )
    {
      *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 17) & v6)) = *i;
    }
    std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::erase(
      (__int64)this + 96,
      &v10,
      (char *)i);
  }
  *((_DWORD *)a2 + 8) &= ~0x10u;
}
