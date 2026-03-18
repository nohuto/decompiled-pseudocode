/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004206C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  if ( !*(_BYTE *)this )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack(this);
  }
}
