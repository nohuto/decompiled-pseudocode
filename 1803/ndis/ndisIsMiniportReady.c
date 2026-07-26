/*
 * XREFs of ndisIsMiniportReady @ 0x1C004FD7C
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BDEC (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C010D76C (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

char __fastcall ndisIsMiniportReady(_DWORD *a1)
{
  int v1; // r9d
  unsigned __int16 v3; // cx

  v1 = a1[30];
  if ( (v1 & 0x80200020) != 0 )
  {
    if ( (unsigned __int8)byte_1C0099614 < 4u )
      return 0;
    v3 = 62;
LABEL_4:
    WPP_SF_qD(v3, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, (__int64)a1, v1);
    return 0;
  }
  v1 = a1[31];
  if ( (v1 & 0x1084910) != 0 )
  {
    if ( (unsigned __int8)byte_1C0099614 < 4u )
      return 0;
    v3 = 63;
    goto LABEL_4;
  }
  v1 = a1[380];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C0099614 < 4u )
      return 0;
    v3 = 64;
    goto LABEL_4;
  }
  v1 = a1[973];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C0099614 < 4u )
      return 0;
    v3 = 65;
    goto LABEL_4;
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x42u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, (__int64)a1);
  return 1;
}
