/*
 * XREFs of IrqArbBootAllocation @ 0x1C0090380
 * Callers:
 *     <none>
 * Callees:
 *     ProcessorCopyData @ 0x1C008E278 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C008E834 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C00921E0 (IcClearPossibleData.c)
 *     IcCopyData @ 0x1C0092288 (IcCopyData.c)
 *     IcRemapInputs @ 0x1C009266C (IcRemapInputs.c)
 *     ArbBootAllocation @ 0x1C0093940 (ArbBootAllocation.c)
 */

__int64 __fastcall IrqArbBootAllocation(__int64 a1, __int64 a2)
{
  int v4; // ebx

  ProcessorpClearData(1);
  IcClearPossibleData();
  v4 = ProcessorCopyData(1u);
  if ( v4 >= 0 )
  {
    v4 = IcCopyData(1LL);
    if ( v4 >= 0 )
    {
      v4 = ArbBootAllocation(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = ProcessorCopyData(0);
        if ( v4 >= 0 )
        {
          v4 = IcRemapInputs();
          if ( v4 >= 0 )
          {
            v4 = IcCopyData(0LL);
            if ( v4 >= 0 )
            {
              ProcessorpClearData(1);
              IcClearPossibleData();
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
