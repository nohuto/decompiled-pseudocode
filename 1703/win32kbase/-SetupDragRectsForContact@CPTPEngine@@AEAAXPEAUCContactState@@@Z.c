/*
 * XREFs of ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C013810C
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0136988 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0138BE4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::SetupDragRectsForContact(CPTPEngine *this, struct CContactState *a2)
{
  int v2; // r9d
  int v3; // r8d

  v2 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 60) = v2 - *((_DWORD *)this + 53);
  *((_DWORD *)a2 + 62) = v2 + *((_DWORD *)this + 54);
  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 59) = v3 - *((_DWORD *)this + 51);
  *((_DWORD *)a2 + 61) = v3 + *((_DWORD *)this + 52);
  *((_DWORD *)a2 + 64) = v2 - *((_DWORD *)this + 58);
  *((_DWORD *)a2 + 66) = v2 + *((_DWORD *)this + 59);
  *((_DWORD *)a2 + 63) = v3 - *((_DWORD *)this + 56);
  *((_DWORD *)a2 + 65) = v3 + *((_DWORD *)this + 57);
  *((_DWORD *)a2 + 68) = v2 - *((_DWORD *)this + 63);
  *((_DWORD *)a2 + 70) = v2 + *((_DWORD *)this + 64);
  *((_DWORD *)a2 + 67) = v3 - *((_DWORD *)this + 61);
  *((_DWORD *)a2 + 69) = v3 + *((_DWORD *)this + 62);
}
