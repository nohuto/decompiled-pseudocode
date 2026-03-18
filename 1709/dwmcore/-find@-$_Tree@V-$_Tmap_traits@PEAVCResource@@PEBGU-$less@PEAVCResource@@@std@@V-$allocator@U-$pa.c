/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1801582E0
 * Callers:
 *     ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180156BC0 (-FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x180156C24 (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180157D44 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGIN.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( (unsigned __int64)v5[4] >= *a3 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v4 == v3 || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
