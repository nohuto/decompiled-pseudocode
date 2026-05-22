/*
 * XREFs of ?GetDynamicNodeInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D6180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::GetDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  RTL_SRWLOCK *v2; // rsi
  bool v5; // bl

  v2 = (RTL_SRWLOCK *)((char *)this + 832);
  AcquireSRWLockShared((PSRWLOCK)this + 104);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 840);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 214);
  v5 = RtlCompareMemory(a2, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) != 16;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
