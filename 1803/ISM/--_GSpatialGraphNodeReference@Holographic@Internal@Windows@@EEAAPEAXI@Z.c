/*
 * XREFs of ??_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x1800C67F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800C6564 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphNodeReference *__fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphNodeReference::~SpatialGraphNodeReference(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
