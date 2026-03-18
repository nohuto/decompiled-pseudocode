/*
 * XREFs of IopPerfCallDriver @ 0x140238128
 * Callers:
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140167E50 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140811AB4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140812280 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1408122EC (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14003F128 (IopAllocateIrpExtension.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IopfCallDriver @ 0x140167E74 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140237FBC (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x140238588 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x140238654 (IopPerfLogCallReturnEvent.c)
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
