/*
 * XREFs of KdpWriteInstructionBuffer @ 0x14023F560
 * Callers:
 *     KdpInsertBreakpoint @ 0x140806C2C (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x140806E14 (KdpRemoveBreakpoint.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpWriteInstructionBuffer(_BYTE *a1, __int64 a2, char a3)
{
  switch ( a3 )
  {
    case 1:
      *a1 = a2;
      break;
    case 2:
      *(_WORD *)a1 = a2;
      break;
    case 4:
      *(_DWORD *)a1 = a2;
      break;
    case 8:
      *(_QWORD *)a1 = a2;
      break;
  }
}
