/*
 * XREFs of Windows::Internal::Holographic::CreateGuidFailFast @ 0x1800BFF98
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800C8360 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800CD5E4 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

GUID *__fastcall Windows::Internal::Holographic::CreateGuidFailFast(GUID *a1)
{
  HRESULT Guid; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Guid = CoCreateGuid(a1);
  if ( Guid < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)Guid);
    JUMPOUT(0x1800BFFCDLL);
  }
  return a1;
}
