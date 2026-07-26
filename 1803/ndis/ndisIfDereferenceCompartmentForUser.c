/*
 * XREFs of ndisIfDereferenceCompartmentForUser @ 0x1C0013FF4
 * Callers:
 *     ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C0009500 (-ndisCmDeleteStateObject@@YAXPEAX@Z.c)
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0009530 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0014088 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0014190 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00686B0 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00687B0 (NdisSetSessionCompartmentId.c)
 *     ndisDispatchRequest @ 0x1C00AC650 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003E980 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
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
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(163LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_dq(164LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v1, a1);
  return v1;
}
