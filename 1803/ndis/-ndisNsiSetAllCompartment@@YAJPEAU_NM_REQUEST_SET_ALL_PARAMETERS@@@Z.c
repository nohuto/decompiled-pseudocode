/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0040750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003E5D8 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003E980 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x84u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    v2 = *((_DWORD *)a1 + 12);
    if ( ((unsigned int)(v2 - 1) > 1 || *((_QWORD *)a1 + 4) && *((_DWORD *)a1 + 10) == 1640) && v2 > 0 )
    {
      if ( v2 <= 2 )
      {
        v3 = ndisIfCreateCompartment(a1, &v6);
        goto LABEL_12;
      }
      if ( v2 == 3 )
      {
        v3 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2));
LABEL_12:
        v4 = v3;
        goto LABEL_14;
      }
    }
  }
  v4 = -1073741811;
LABEL_14:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(0x85u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, v4);
  return v4;
}
