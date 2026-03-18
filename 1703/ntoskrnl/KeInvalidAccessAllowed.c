/*
 * XREFs of KeInvalidAccessAllowed @ 0x140027A64
 * Callers:
 *     MiAllowGuardFault @ 0x140027A0C (MiAllowGuardFault.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiRaisedIrqlFault @ 0x1401314B8 (MiRaisedIrqlFault.c)
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
