/*
 * XREFs of IrqArbpQueryConflictIsa @ 0x1C00A8A5C
 * Callers:
 *     IrqArbQueryConflict @ 0x1C00A8670 (IrqArbQueryConflict.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 *     LinkNodeClearPossibleData @ 0x1C008980C (LinkNodeClearPossibleData.c)
 *     IcClearPossibleData @ 0x1C0089840 (IcClearPossibleData.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008A3E0 (IrqArbpPrepareForTestOrConflict.c)
 *     ProcessorpClearData @ 0x1C008ACF0 (ProcessorpClearData.c)
 *     ArbQueryConflict @ 0x1C00A94E0 (ArbQueryConflict.c)
 */

__int64 __fastcall IrqArbpQueryConflictIsa(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int Conflict; // ebx
  __int64 **v6[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v7[12]; // [rsp+30h] [rbp-9h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[3] = a2[1];
  v7[4] = *a2;
  v7[0] = v6;
  v7[1] = v6;
  v6[0] = (__int64 **)v7;
  v6[1] = (__int64 **)v7;
  LODWORD(v7[2]) = 1;
  result = IrqArbpPrepareForTestOrConflict(a1, v6);
  if ( (int)result >= 0 )
  {
    Conflict = ArbQueryConflict(a1, a2);
    ProcessorpClearData(1);
    IcClearPossibleData();
    LinkNodeClearPossibleData();
    return Conflict;
  }
  return result;
}
