/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x18001EA44
 * Callers:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180030F88 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ?MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x180031FC0 (-MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x18007C2C0 (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18009254C (--0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessa.c)
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x1800B7340 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 *     ??0?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@QEAA@XZ @ 0x1800BE038 (--0-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micros.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

_WORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x38uLL);
  try
  {
    if ( result )
      *(_QWORD *)result = result;
    if ( result != (_WORD *)-8LL )
      *((_QWORD *)result + 1) = result;
    v1 = result + 8;
    if ( result != (_WORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v1,
      result);
    throw;
  }
  result[12] = 257;
  return result;
}
