/*
 * XREFs of ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4880
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5738 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E42F4 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E4EE0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxAdvise(unsigned int *a1, void **a2, struct tagDDECONV **a3)
{
  unsigned int v6; // ebx
  struct tagINTDDEINFO *v7; // rdi
  void *v8; // rax
  void *v10; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v12; // [rsp+88h] [rbp+20h] BYREF

  v11 = 129;
  v6 = xxxCopyDdeIn(*a2, &v11, &v10, &v12);
  v7 = v12;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    v6 = 3;
    if ( !v12 )
      return v6;
    Win32FreePool(v12);
  }
  if ( v6 == 2 )
  {
    *a1 |= 0x80000000;
    v8 = AnticipatePost(a3[4], xxxAdviseAck, v10, 0LL, v7, v11);
    *a2 = v8;
    if ( !v8 )
      return 3;
  }
  return v6;
}
