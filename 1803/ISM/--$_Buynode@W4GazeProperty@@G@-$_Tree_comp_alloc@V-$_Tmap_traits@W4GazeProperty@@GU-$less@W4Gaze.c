/*
 * XREFs of ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800AF0C0
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800AE65C (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@XZ @ 0x1800AF238 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode<enum GazeProperty,unsigned short>(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  try
  {
    *(_DWORD *)(result + 28) = *a2;
    v6 = *a3;
    *(_WORD *)(result + 32) = v6;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v6,
      (void *)result);
    throw;
  }
  return result;
}
