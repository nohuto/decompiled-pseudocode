/*
 * XREFs of ndisIfDereferenceCompartmentForUser @ 0x1C00418D4
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000411C (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C001EB70 (-ndisCmDeleteStateObject@@YAXPEAX@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0067A6C (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0067B30 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0067C08 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C0067DD0 (NdisSetSessionCompartmentId.c)
 *     ndisDispatchRequest @ 0x1C00B6280 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003D630 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
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
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(0xA3u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
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
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_dq(164LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v1, a1);
  return v1;
}
