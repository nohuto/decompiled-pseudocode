/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4F70
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5738 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E42F4 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E4EE0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v5; // r8d
  unsigned int v7; // ebx
  struct tagINTDDEINFO *v8; // rsi
  void *v9; // rax
  void *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = 2048;
  v12 = 2048;
  if ( (*(_BYTE *)(*((_QWORD *)a3 + 5) + 58LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a3 + 6) + 58LL) & 8) == 0 )
      v5 = 67584;
    v12 = v5;
  }
  v7 = xxxCopyDdeIn(*a2, &v12, &v11, &v13);
  v8 = v13;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    v7 = 3;
    if ( !v13 )
      return v7;
    Win32FreePool(v13);
  }
  if ( v7 == 2 )
  {
    *a1 |= 0x80000000;
    v9 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxExecuteAck, v11, 0LL, v8, v12);
    *a2 = v9;
    if ( v9 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 440LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 440LL) |= 0x20u;
    }
    else
    {
      return 3;
    }
  }
  return v7;
}
