/*
 * XREFs of ??_ESpatialGraphDriverClient@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x1800C2510
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800C223C (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverClient *__fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::`vector deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphDriverClient::~SpatialGraphDriverClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
