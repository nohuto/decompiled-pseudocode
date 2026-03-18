/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0FAC
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F1774 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F0314 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F0F24 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v5; // r8d
  unsigned int v7; // ebx
  __int64 v8; // r8
  struct tagINTDDEINFO *v9; // rsi
  __int64 v10; // rdx
  void *v11; // rax
  void *v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = 2048;
  v14 = 2048;
  if ( (*(_BYTE *)(*((_QWORD *)a3 + 5) + 58LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a3 + 6) + 58LL) & 8) == 0 )
      v5 = 67584;
    v14 = v5;
  }
  v7 = xxxCopyDdeIn(*a2, &v14, &v13, &v15);
  v9 = v15;
  v10 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3;
  if ( (*(_BYTE *)(v10 + gSharedInfo[1] + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( !v15 )
      return v7;
    Win32FreePool(v15, v10, v8);
  }
  if ( v7 == 2 )
  {
    *a1 |= 0x80000000;
    v11 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxExecuteAck, v13, 0LL, v9, v14);
    *a2 = v11;
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 464LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 464LL) |= 0x20u;
    }
    else
    {
      return 3;
    }
  }
  return v7;
}
