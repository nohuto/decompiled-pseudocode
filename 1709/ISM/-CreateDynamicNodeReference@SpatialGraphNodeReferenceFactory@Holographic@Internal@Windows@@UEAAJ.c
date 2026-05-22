/*
 * XREFs of ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800B8920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference(
        Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *this,
        HSTRING a2,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference **a4)
{
  return (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *, HSTRING, const struct Windows::Internal::Holographic::DynamicNodeInfo *, __int64, struct Windows::Internal::Holographic::ISpatialGraphNodeReference **))(*(_QWORD *)this + 32LL))(
           this,
           a2,
           a3,
           2LL,
           a4);
}
