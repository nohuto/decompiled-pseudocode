/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C009C690
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C0072BD4 (TraceLoggingRegisterEx.c)
 *     IcAddGicInstance @ 0x1C0091D5C (IcAddGicInstance.c)
 *     IcAddSecondaryIcInstance @ 0x1C0091E38 (IcAddSecondaryIcInstance.c)
 *     IrqLibpParseMadt @ 0x1C009C8B8 (IrqLibpParseMadt.c)
 *     IrqPolicyConfigure @ 0x1C009CB20 (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C009CDDC (IrqPolicyUpdatePolicy.c)
 *     ProcessorConfigure @ 0x1C009CE44 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, ETWENABLECALLBACK *a2, void *a3)
{
  int v4; // edx
  __int64 result; // rax

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00640F0, a2, a3);
  IrqLibRealInterruptModel = a1;
  v4 = 1;
  if ( (unsigned int)(a1 - 2) > 2 )
    v4 = a1;
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
