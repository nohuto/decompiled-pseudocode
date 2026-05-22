/*
 * XREFs of ?GetSupportedDDILevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800B67A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetSupportedDDILevels(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct HOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)(*((_QWORD *)this + 8) + 104LL);
  return result;
}
