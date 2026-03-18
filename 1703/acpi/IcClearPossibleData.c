/*
 * XREFs of IcClearPossibleData @ 0x1C0087510
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0084668 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbCommitAllocation @ 0x1C0086A90 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C0086ED0 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0088800 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00A5FD0 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     memset @ 0x1C002CB80 (memset.c)
 */

void *IcClearPossibleData()
{
  __int64 i; // r14
  unsigned int v1; // edi
  unsigned int v2; // ebp
  _DWORD *v3; // rbx
  char *v4; // rsi
  void *result; // rax
  unsigned int v6; // ecx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v1 = 0;
      v2 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v3 = (_DWORD *)(i + 136);
        v4 = (char *)(i + 136);
        do
        {
          *(v3 - 25) = 0;
          result = memset(v4, 0, 0x58uLL);
          *v3 = 0;
          v3 += 50;
          v4 += 200;
          v6 = v1 + *(_DWORD *)(i + 16);
          ++v1;
          *(v3 - 36) = v6;
        }
        while ( v1 < v2 );
      }
    }
  }
  return result;
}
