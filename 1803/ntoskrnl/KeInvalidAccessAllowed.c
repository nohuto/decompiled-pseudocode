/*
 * XREFs of KeInvalidAccessAllowed @ 0x1400B54F4
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiRaisedIrqlFault @ 0x1400B5050 (MiRaisedIrqlFault.c)
 *     MiAllowGuardFault @ 0x1400B5494 (MiAllowGuardFault.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeInvalidAccessAllowed(__int64 a1)
{
  int v1; // eax
  void *v2; // rax

  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 368);
    if ( v1 == 16 )
    {
      v2 = &ExpInterlockedPopEntrySListFault;
      return *(_QWORD *)(a1 + 360) == (_QWORD)v2;
    }
    if ( v1 == 51 )
    {
      v2 = (void *)KeUserPopEntrySListFault;
      return *(_QWORD *)(a1 + 360) == (_QWORD)v2;
    }
  }
  return 0;
}
