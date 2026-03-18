/*
 * XREFs of KeInvalidAccessAllowed @ 0x14011D0D8
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiAllowGuardFault @ 0x14011D07C (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x140228D0C (MiRaisedIrqlFault.c)
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
