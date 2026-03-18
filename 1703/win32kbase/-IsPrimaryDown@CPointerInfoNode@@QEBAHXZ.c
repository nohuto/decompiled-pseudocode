/*
 * XREFs of ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0122DC8
 * Callers:
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00A11AC (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C0122D98 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimaryDown(CPointerInfoNode *this)
{
  int IsPrimary; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsPrimary = CPointerInfoNode::IsPrimary(this);
  v3 = 0;
  if ( IsPrimary )
    return (*(_DWORD *)(v2 + 260) & 0x10000) != 0;
  return v3;
}
