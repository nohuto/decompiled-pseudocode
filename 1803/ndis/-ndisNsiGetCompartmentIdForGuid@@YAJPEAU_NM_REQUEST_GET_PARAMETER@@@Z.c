/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00091E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(
        struct _NM_REQUEST_GET_PARAMETER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  const struct _GUID *v6; // rbp
  KIRQL v7; // al
  _LIST_ENTRY *Flink; // rsi
  KIRQL v9; // r14

  v5 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(138LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a4);
  v6 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  if ( v6
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfCompartmentList.Flink;
    v9 = v7;
    while ( Flink != &ndisIfCompartmentList )
    {
      if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)&Flink[71].Blink, v6) )
      {
        if ( Flink )
        {
          **((_DWORD **)a1 + 5) = Flink[1].Flink;
          goto LABEL_15;
        }
        break;
      }
      Flink = Flink->Flink;
    }
    v5 = -1073741772;
LABEL_15:
    KeReleaseSpinLock(&ndisIfListLock, v9);
  }
  else
  {
    v5 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(139LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v5);
  return v5;
}
