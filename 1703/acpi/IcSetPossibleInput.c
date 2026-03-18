/*
 * XREFs of IcSetPossibleInput @ 0x1C0084DF8
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0084668 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcSetPossibleInput(unsigned int a1, __int64 a2, char a3, char a4)
{
  __int64 i; // r10
  unsigned int v6; // ecx
  char v7; // al
  int v8; // edx
  __int64 v9; // rcx

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 && a1 >= *(_DWORD *)(i + 16) && a1 <= *(_DWORD *)(i + 20) )
      break;
  }
  v6 = a1 - *(_DWORD *)(i + 16);
  v7 = a3 & 0xA;
  if ( (a3 & 0xA) == 0xA )
  {
    v8 = 3;
  }
  else if ( v7 == 8 )
  {
    v8 = 4;
  }
  else
  {
    v8 = 2;
    if ( v7 != 2 )
      v8 = v7 == 0;
  }
  v9 = 200LL * v6;
  *(_DWORD *)(v9 + i + 148) = v8;
  *(_DWORD *)(v9 + i + 152) = (a3 & 1) == 0;
  if ( a4 && *(_DWORD *)(v9 + i + 36) == *(_DWORD *)(v9 + i + 44) )
    *(_BYTE *)(v9 + i + 225) = a4;
  else
    *(_BYTE *)(v9 + i + 225) = 0;
  *(_DWORD *)(v9 + i + 140) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(v9 + i + 160) = *(_OWORD *)a2;
  return IrqArbGetDeviceIrql(i + 136 + v9, v9 + i + 144);
}
