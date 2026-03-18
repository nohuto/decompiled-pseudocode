/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00AF1F8
 * Callers:
 *     ACPIInitialize @ 0x1C00AF648 (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C00907A8 (IcAddSecondaryIcInstance.c)
 *     IcAddGicInstance @ 0x1C00A8B0C (IcAddGicInstance.c)
 *     IrqTraceInitialize @ 0x1C00AC078 (IrqTraceInitialize.c)
 *     IrqPolicyConfigure @ 0x1C00AEFC0 (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00AF2F4 (IrqPolicyUpdatePolicy.c)
 *     IrqLibpParseMadt @ 0x1C00AF354 (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1C00AF55C (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(__int64 a1, ETWENABLECALLBACK *a2, void *a3)
{
  int v3; // ebx
  int v4; // edx
  __int64 result; // rax

  v3 = a1;
  IrqTraceInitialize(a1, a2, a3);
  IrqLibRealInterruptModel = v3;
  v4 = 1;
  if ( (unsigned int)(v3 - 2) > 2 )
    v4 = v3;
  IrqLibInterruptModel = v4;
  if ( v4 != 1 )
    return 3221225485LL;
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt();
            result = IcAddGicInstance(0);
            goto LABEL_16;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt();
LABEL_16:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy();
        if ( (int)result >= 0 )
        {
          IcAddSecondaryIcInstance();
          HalPrivateDispatchTable[22] = (__int64 (__fastcall *)(_QWORD, __int64))IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
