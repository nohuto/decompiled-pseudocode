/*
 * XREFs of ?CrossedTPLiftWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0133878
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPLiftWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  unsigned int v4; // r11d
  unsigned int v5; // edx

  if ( (*((_DWORD *)this + 55) & 0x100) == 0 )
    return 1LL;
  v3 = *(_QWORD *)((char *)a2 + 52);
  v5 = *((_DWORD *)this + 76) * *((_DWORD *)this + 76);
  if ( SHIDWORD(v3) < a3.y )
    v5 = *((_DWORD *)this + 77) * *((_DWORD *)this + 77);
  v4 = *((_DWORD *)this + 75) * *((_DWORD *)this + 75);
  return v5 * (__int64)(((int)v3 - a3.x) * ((int)v3 - a3.x))
       + (unsigned __int64)v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) >= v5 * (unsigned __int64)v4;
}
