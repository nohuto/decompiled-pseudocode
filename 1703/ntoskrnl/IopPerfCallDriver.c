/*
 * XREFs of IopPerfCallDriver @ 0x1401F5614
 * Callers:
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140146950 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140762E58 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407635AC (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140763618 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IopAllocateIrpExtension @ 0x14012C8E8 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x14014696C (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401F549C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x1401F5A74 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1401F5B40 (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, IRP *a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 )
  {
    if ( IopIrpHasValidCombinationOfExtensionTypes((__int64)a2, 1) )
    {
      IrpExtension = IopAllocateIrpExtension((__int64)a2, 1);
      if ( IrpExtension )
        *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
    }
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v5);
    v6 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v5);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v6;
}
