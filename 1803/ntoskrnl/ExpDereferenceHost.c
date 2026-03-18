/*
 * XREFs of ExpDereferenceHost @ 0x1407C6258
 * Callers:
 *     ExRegisterExtension @ 0x1406421E0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1407C6170 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
