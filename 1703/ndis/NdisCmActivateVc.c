/*
 * XREFs of NdisCmActivateVc @ 0x1C0106650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     NdisMCoActivateVcComplete @ 0x1C0108E80 (NdisMCoActivateVcComplete.c)
 */

NDIS_STATUS __stdcall NdisCmActivateVc(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  _QWORD *v2; // rsi
  KIRQL v5; // al
  int *v6; // rdx
  KIRQL v7; // r8
  int v8; // ecx
  NDIS_STATUS v9; // ebx
  PCO_MEDIA_PARAMETERS MediaParameters; // rax
  __int64 v11; // rax

  v2 = (_QWORD *)*((_QWORD *)NdisVcHandle + 9);
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_qqq(
      0x20u,
      &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids,
      NdisVcHandle,
      v2,
      *((_QWORD *)NdisVcHandle + 25));
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v6 = (int *)*((_QWORD *)NdisVcHandle + 1);
  v7 = v5;
  v8 = *v6;
  if ( (*v6 & 2) != 0 )
  {
    v9 = 65539;
  }
  else if ( (v8 & 4) != 0 )
  {
    v9 = -1073676286;
  }
  else
  {
    v9 = 0;
    *v6 = v8 | 2;
    MediaParameters = CallParameters->MediaParameters;
    if ( MediaParameters->MediaSpecific.Length < 8 )
      v11 = (unsigned int)v2;
    else
      v11 = *(_QWORD *)MediaParameters->MediaSpecific.Parameters;
    v2[17] = v11;
  }
  v2[12] = *((_QWORD *)NdisVcHandle + 21);
  v2[11] = *((_QWORD *)NdisVcHandle + 18);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v7);
  if ( !v9 )
    v9 = (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 28))(
           *((_QWORD *)NdisVcHandle + 25),
           CallParameters);
  if ( v9 != 259 )
  {
    NdisMCoActivateVcComplete(v9, NdisVcHandle, CallParameters);
    v9 = 259;
  }
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_qD(0x21u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, (__int64)NdisVcHandle, v9);
  return v9;
}
