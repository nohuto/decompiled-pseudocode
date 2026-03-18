/*
 * XREFs of ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01ABCE4
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01AAF90 (-FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@.c)
 *     ?MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AB8E4 (-MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AC22C (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01AC750 (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetContactRestingState(struct tagTPCONTACTSTATE *a1, struct tagTPSTATE *a2, int a3)
{
  int v3; // r9d
  int v4; // r8d

  v3 = *((_DWORD *)a1 + 66);
  if ( -__CFSHR__(v3, 8) != a3 && (v3 & 1) != 0 )
  {
    v4 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)((_BYTE)a3 << 7)) & 0x80;
    *((_DWORD *)a1 + 66) = v4;
    if ( (v4 & 0x80u) == 0 )
    {
      ++*((_DWORD *)a2 + 415);
      --*((_DWORD *)a2 + 414);
    }
    else
    {
      ++*((_DWORD *)a2 + 414);
      --*((_DWORD *)a2 + 415);
    }
  }
}
