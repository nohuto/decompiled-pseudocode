/*
 * XREFs of NdisMCmActivateVc @ 0x1C01087C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisMCmActivateVc(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  PCO_MEDIA_PARAMETERS MediaParameters; // rcx

  v2 = *((_QWORD *)NdisVcHandle + 9);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
  *(_DWORD *)(v2 + 4) |= 1u;
  MediaParameters = CallParameters->MediaParameters;
  if ( MediaParameters->MediaSpecific.Length < 8 )
    *(_QWORD *)(v2 + 136) = (unsigned int)v2;
  else
    *(_QWORD *)(v2 + 136) = *(_QWORD *)MediaParameters->MediaSpecific.Parameters;
  *(_QWORD *)(v2 + 136) = *(_QWORD *)CallParameters->MediaParameters->MediaSpecific.Parameters;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 8), v4);
  return 0;
}
