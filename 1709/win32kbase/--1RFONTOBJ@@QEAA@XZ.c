/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C006BBA8
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00EDC58 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported(this, a2, a3, a4) >= 0 )
      RFONTOBJ_dtHelperWrap(this, 1LL);
    RFONTOBJ::vReleaseCache(this);
  }
}
