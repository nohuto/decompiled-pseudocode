/*
 * XREFs of ?CheckDoubleTap@CPTPEngine@@AEAAHPEAUCContactState@@@Z @ 0x1C0133308
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CheckDoubleTap(CPTPEngine *this, struct CContactState *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 34) - *((_DWORD *)this + 757)) <= *((_DWORD *)this + 27)
      && (int)((HIDWORD(*((_QWORD *)this + 372)) - HIDWORD(*(_QWORD *)((char *)a2 + 4)))
             * (HIDWORD(*((_QWORD *)this + 372)) - HIDWORD(*(_QWORD *)((char *)a2 + 4)))
             + (*((_QWORD *)this + 372) - *(_QWORD *)((char *)a2 + 4))
             * (*((_QWORD *)this + 372) - *(_QWORD *)((char *)a2 + 4))) <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 30) * *((_DWORD *)this + 30));
}
