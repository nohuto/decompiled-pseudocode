/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00AAC84
 * Callers:
 *     ACPIInitialize @ 0x1C00AA7F0 (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C0083FA8 (IcAddSecondaryIcInstance.c)
 *     IcAddGicInstance @ 0x1C00A6080 (IcAddGicInstance.c)
 *     ProcessorConfigure @ 0x1C00AAC38 (ProcessorConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00AAD30 (IrqPolicyUpdatePolicy.c)
 *     IrqLibpParseMadt @ 0x1C00AAD90 (IrqLibpParseMadt.c)
 *     IrqPolicyConfigure @ 0x1C00AB064 (IrqPolicyConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1)
{
  int v1; // edx
  __int64 result; // rax

  IrqLibRealInterruptModel = a1;
  v1 = 1;
  if ( (unsigned int)(a1 - 2) > 2 )
    v1 = a1;
  IrqLibInterruptModel = v1;
  if ( v1 != 1 )
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
            goto LABEL_8;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt();
LABEL_8:
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
