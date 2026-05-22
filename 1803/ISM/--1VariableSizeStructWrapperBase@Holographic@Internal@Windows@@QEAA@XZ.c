/*
 * XREFs of ??1VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAA@XZ @ 0x18009CA90
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800C4C50 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x1800C5C80 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall Windows::Internal::Holographic::VariableSizeStructWrapperBase::~VariableSizeStructWrapperBase(
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *this,
        __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 3) - v3 >= 0x1000 )
    {
      if ( (v3 & 0x1F) != 0 || (v4 = *(_QWORD *)(v3 - 8), v4 >= v3) || (v3 = v3 - v4 - 8, v3 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v3, a2);
        JUMPOUT(0x18009CAEFLL);
      }
      v3 = v4;
    }
    operator delete((void *)v3);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
