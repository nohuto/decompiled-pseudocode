/*
 * XREFs of ??A?$map@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@@std@@QEAAAEAPEBGAEBQEAVCResource@@@Z @ 0x180156B14
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180157D44 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGIN.c)
 * Callees:
 *     ??$insert@U?$pair@PEAVCResource@@PEBG@std@@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@1@$$QEAU?$pair@PEAVCResource@@PEBG@1@@Z @ 0x18015691C (--$insert@U-$pair@PEAVCResource@@PEBG@std@@@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@P.c)
 */

__int64 __fastcall std::map<CResource *,unsigned short const *>::operator[](__int64 *a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( *(_QWORD *)(v4 + 32) >= *a2 )
    {
      v3 = v4;
      v4 = *(_QWORD *)v4;
    }
    else
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
  }
  if ( v3 == *a1 || *a2 < *(_QWORD *)(v3 + 32) )
  {
    v5 = *a2;
    v7[1] = 0LL;
    v7[0] = v5;
    v3 = *std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::insert<std::pair<CResource *,unsigned short const *>>(
            a1,
            &v8,
            v3,
            v7);
  }
  return v3 + 40;
}
