/*
 * XREFs of ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C6EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800C6F14 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *__fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`scalar deleting destructor'(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this,
        char a2)
{
  Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
