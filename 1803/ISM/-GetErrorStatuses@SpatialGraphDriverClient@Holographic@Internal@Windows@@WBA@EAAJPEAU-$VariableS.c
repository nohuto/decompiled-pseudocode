/*
 * XREFs of ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x1800D2CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetErrorStatuses(
        __int64 a1,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a2)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::GetErrorStatuses(a1 - 16, a2);
}
