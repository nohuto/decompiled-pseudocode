/*
 * XREFs of ndisIfDereferenceCompartmentForUser @ 0x1C0044DE4
 * Callers:
 *     ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C0010CF0 (-ndisCmDeleteStateObject@@YAXPEAX@Z.c)
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011878 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C006728C (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0067358 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00673B0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00675E0 (NdisSetSessionCompartmentId.c)
 *     ndisDispatchRequest @ 0x1C00ACA10 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040B10 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(unsigned int *a1)
{
  unsigned int v1; // edi
  bool v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0xA3u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = a1[12];
  if ( v5 <= 0 )
  {
    v1 = -1073741811;
  }
  else
  {
    v6 = v5 - 1;
    a1[12] = v6;
    v3 = !v6 && (a1[10] & 2) != 0;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisIfDeleteCompartment(a1[4]);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_dq(164LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v1, a1);
  return v1;
}
