/*
 * XREFs of ndisIsMiniportReady @ 0x1C0050868
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C010284C (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

char __fastcall ndisIsMiniportReady(_DWORD *a1)
{
  int v1; // r9d
  unsigned __int16 v3; // cx

  v1 = a1[30];
  if ( (v1 & 0x80200020) != 0 )
  {
    if ( (unsigned __int8)byte_1C0092614 < 4u )
      return 0;
    v3 = 66;
LABEL_4:
    WPP_SF_qD(v3, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, (__int64)a1, v1);
    return 0;
  }
  v1 = a1[31];
  if ( (v1 & 0x1084910) != 0 )
  {
    if ( (unsigned __int8)byte_1C0092614 < 4u )
      return 0;
    v3 = 67;
    goto LABEL_4;
  }
  v1 = a1[380];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C0092614 < 4u )
      return 0;
    v3 = 68;
    goto LABEL_4;
  }
  v1 = a1[973];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C0092614 < 4u )
      return 0;
    v3 = 69;
    goto LABEL_4;
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x46u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, (__int64)a1);
  return 1;
}
