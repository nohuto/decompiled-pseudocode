/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x1800BC640
 * Callers:
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x18003A0DC (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x180181138 (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIM.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // rdx

  v5 = a3[6] ^ (0x100000001B3LL
              * (a3[5] ^ (0x100000001B3LL
                        * (a3[4] ^ (0x100000001B3LL
                                  * (a3[3] ^ (0x100000001B3LL
                                            * (a3[2] ^ (0x100000001B3LL
                                                      * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL))))))))))));
  v6 = a3[7];
  v7 = a1[3];
  v8 = a1[6];
  v9 = (_QWORD *)a1[1];
  v10 = 2 * ((0x100000001B3LL * (v6 ^ (0x100000001B3LL * v5))) & v8);
  v11 = *(_QWORD **)(v7 + 8 * v10);
  v12 = v11;
  v13 = v7 + 8 * v10;
  while ( 1 )
  {
    if ( v12 == v9 )
      v14 = v9;
    else
      v14 = **(_QWORD ***)(v13 + 8);
    if ( v11 == v14 )
    {
      *a2 = v9;
      return a2;
    }
    if ( v11[2] == *(_QWORD *)a3 )
      break;
    v11 = (_QWORD *)*v11;
  }
  *a2 = v11;
  return a2;
}
