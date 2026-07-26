/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C001B320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // rsi
  KIRQL v6; // bp
  unsigned int Blink; // eax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 Blink_high; // ax
  unsigned __int16 v11; // cx

  v2 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(138LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfCompartmentList.Flink;
    v6 = v4;
    while ( Flink != &ndisIfCompartmentList )
    {
      Blink = (unsigned int)Flink[71].Blink;
      if ( Blink <= *(_DWORD *)v3 && Blink >= *(_DWORD *)v3 )
      {
        v8 = WORD2(Flink[71].Blink);
        v9 = *(_WORD *)(v3 + 4);
        if ( v8 <= v9 && v8 >= v9 )
        {
          Blink_high = HIWORD(Flink[71].Blink);
          v11 = *(_WORD *)(v3 + 6);
          if ( Blink_high <= v11 && Blink_high >= v11 && RtlCompareMemory(&Flink[72], (const void *)(v3 + 8), 8uLL) == 8 )
          {
            if ( Flink )
            {
              **((_DWORD **)a1 + 5) = Flink[1].Flink;
              goto LABEL_21;
            }
            break;
          }
        }
      }
      Flink = Flink->Flink;
    }
    v2 = -1073741772;
LABEL_21:
    KeReleaseSpinLock(&ndisIfListLock, v6);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(139LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, v2);
  return v2;
}
