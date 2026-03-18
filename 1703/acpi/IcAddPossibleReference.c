/*
 * XREFs of IcAddPossibleReference @ 0x1C00891D0
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0084668 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IcAddPossibleReference(unsigned int a1, char a2)
{
  __int64 v2; // r8
  __int64 *result; // rax

  v2 = IcListHead;
  result = &IcListHead;
  while ( &IcListHead != (__int64 *)v2 )
  {
    if ( *(int *)(v2 + 28) >= 0 && *(_DWORD *)(v2 + 16) <= a1 && *(_DWORD *)(v2 + 20) >= a1 )
    {
      result = (__int64 *)(a1 - *(_DWORD *)(v2 + 16));
      ++*(_DWORD *)(200LL * (_QWORD)result + v2 + 36);
      if ( a2 )
        ++*(_DWORD *)(200LL * (_QWORD)result + v2 + 44);
      return result;
    }
    v2 = *(_QWORD *)v2;
  }
  return result;
}
