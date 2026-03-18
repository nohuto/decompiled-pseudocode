/*
 * XREFs of ExpDereferenceHost @ 0x14075EF58
 * Callers:
 *     ExRegisterExtension @ 0x1405D8110 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1405D82F4 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x14075EE70 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
