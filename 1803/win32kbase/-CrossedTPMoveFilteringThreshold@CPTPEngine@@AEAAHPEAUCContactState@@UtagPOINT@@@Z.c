/*
 * XREFs of ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0136A4C
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0137F18 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0138808 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPMoveFilteringThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r9
  unsigned int v6; // r11d
  unsigned int v7; // ecx

  v3 = *((_QWORD *)a2 + 6);
  v5 = HIDWORD(v3);
  v6 = *((_DWORD *)this + 75) * *((_DWORD *)this + 75);
  v7 = *((_DWORD *)this + 76) * *((_DWORD *)this + 76);
  if ( SHIDWORD(v3) < a3.y )
  {
    LODWORD(v5) = HIDWORD(*((_QWORD *)a2 + 6));
    v7 = *((_DWORD *)this + 77) * *((_DWORD *)this + 77);
  }
  return v7 * (__int64)(((int)v3 - a3.x) * ((int)v3 - a3.x))
       + (unsigned __int64)v6 * ((int)v5 - a3.y) * ((int)v5 - a3.y) >= v7 * (unsigned __int64)v6;
}
