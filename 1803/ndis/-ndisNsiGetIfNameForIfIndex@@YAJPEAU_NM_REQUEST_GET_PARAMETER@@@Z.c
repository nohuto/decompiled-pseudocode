/*
 * XREFs of ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00077D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetIfNameForIfIndex(struct _NM_REQUEST_GET_PARAMETER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  int v6; // ebx
  KIRQL v7; // r8
  struct _LIST_ENTRY *Flink; // rax

  v5 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(92LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a4);
  if ( *((_DWORD *)a1 + 6) == 4
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 8
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v6 = **((_DWORD **)a1 + 2);
    v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfList.Flink;
    if ( ndisIfList.Flink == &ndisIfList )
      goto LABEL_12;
    while ( HIDWORD(Flink[-77].Flink) != v6 )
    {
      Flink = Flink->Flink;
      if ( Flink == &ndisIfList )
        goto LABEL_12;
    }
    if ( Flink == (struct _LIST_ENTRY *)1232 )
LABEL_12:
      v5 = -1073741772;
    else
      **((_QWORD **)a1 + 5) = Flink[5].Flink;
    KeReleaseSpinLock(&ndisIfListLock, v7);
  }
  else
  {
    v5 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(93LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v5);
  return v5;
}
