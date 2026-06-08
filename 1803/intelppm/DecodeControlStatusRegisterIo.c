/*
 * XREFs of DecodeControlStatusRegisterIo @ 0x1C0032984
 * Callers:
 *     DecodeAcpiPStates @ 0x1C00326B8 (DecodeAcpiPStates.c)
 *     DecodeAcpiTStates @ 0x1C003285C (DecodeAcpiTStates.c)
 * Callees:
 *     <none>
 */

void __fastcall DecodeControlStatusRegisterIo(__int64 a1, char a2, __int64 a3, __int64 *a4, _DWORD *a5)
{
  char v5; // al
  __int64 v6; // r8

  if ( a2 || *(_BYTE *)(a1 + 1) )
  {
    *(_QWORD *)a3 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFLL | 0x20000000000000LL;
    *(_WORD *)a3 = *(_WORD *)(a1 + 4);
    v5 = *(_BYTE *)(a1 + 3);
    switch ( v5 )
    {
      case 8:
        *(_WORD *)(a3 + 2) = 0;
        break;
      case 16:
        *(_WORD *)(a3 + 2) = 1;
        break;
      case 32:
        *(_WORD *)(a3 + 2) = 2;
        break;
    }
    v6 = ((1LL << *(_BYTE *)(a1 + 1)) - 1) << *(_BYTE *)(a1 + 2);
    *a5 = *(unsigned __int8 *)(a1 + 2);
    *a4 = v6;
    if ( a2 )
      *a4 = ~v6 & ((1LL << *(_BYTE *)(a1 + 3)) - 1);
  }
}
