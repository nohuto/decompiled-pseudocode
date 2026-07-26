/*
 * XREFs of ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0019EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetIfNameForIfIndex(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // edi
  int v3; // esi
  KIRQL v4; // r8
  struct _LIST_ENTRY *i; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(92LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  if ( *((_DWORD *)a1 + 6) == 4
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 8
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v3 = **((_DWORD **)a1 + 2);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
    {
      if ( HIDWORD(i[-77].Flink) == v3 )
      {
        if ( i != (struct _LIST_ENTRY *)1232 )
        {
          **((_QWORD **)a1 + 5) = i[5].Flink;
          goto LABEL_15;
        }
        break;
      }
    }
    v2 = -1073741772;
LABEL_15:
    KeReleaseSpinLock(&ndisIfListLock, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(93LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, v2);
  return v2;
}
