/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180038708
 * Callers:
 *     ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180037928 (--0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x180038754 (--$_Buynode@AEBQEAUIHeatSystemContextClient@@@-$_List_buy@PEAUIHeatSystemContextClient@@V-$alloc.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180039208 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0InputConfigContextProvider@@IEAA@XZ @ 0x1800901CC (--0InputConfigContextProvider@@IEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rcx

  result = operator new(0x18uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    *result = a2;
    result[1] = a3;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v6,
      result);
    throw;
  }
  return result;
}
