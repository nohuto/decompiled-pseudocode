/*
 * XREFs of ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800AF558
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800B5DA0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x1800B6560 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BB8C8 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BBB04 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *this,
        __int64 a2)
{
  unsigned int v3; // edi
  void *v4; // rbx
  void **v5; // rdx
  void *v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = operator new[](*(_QWORD *)this + a2, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = (void **)((char *)this + 16);
    if ( (char *)this + 16 != &v8 )
    {
      v6 = *v5;
      *v5 = v4;
      v4 = 0LL;
      if ( v6 )
        operator delete(v6);
    }
    if ( v4 )
      operator delete(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
