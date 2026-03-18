/*
 * XREFs of IopPerfCallDriver @ 0x1401FB3F4
 * Callers:
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140131020 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407A52B0 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407A531C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x140131044 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401FB28C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x1401FB848 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1401FB914 (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, IRP *a2)
{
  int v4; // edx
  _WORD *IrpExtension; // rcx
  unsigned __int32 v6; // ebx
  unsigned int v7; // ebp

  if ( (IopPerfStatus & 2) != 0 )
  {
    if ( IopIrpHasValidCombinationOfExtensionTypes((__int64)a2, 1) )
    {
      IrpExtension = IopAllocateIrpExtension((__int64)a2, v4);
      if ( IrpExtension )
        *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
    }
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v6 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v6);
    v7 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v6);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v7;
}
