/*
 * XREFs of ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F10C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F03EC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F0680 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F0F24 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

int __fastcall xxxExecuteAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  bool v3; // zf
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // r8
  struct tagINTDDEINFO *v11; // rsi
  __int64 v12; // rdx
  struct tagXSTATE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  struct tagINTDDEINFO *v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1 == 996;
  v17 = 6145;
  if ( !v3 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v8 = *((_QWORD *)a3 + 7);
  v9 = xxxCopyDdeIn((void *)*a2, &v17, 0LL, &v18);
  v11 = v18;
  v12 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3;
  if ( (*(_BYTE *)(v12 + gSharedInfo[1] + 25) & 1) == 0 && *((_QWORD *)a3 + 7) == v8 )
    goto LABEL_7;
  v9 = 3;
  if ( v18 )
  {
    Win32FreePool(v18, v12, v10);
LABEL_7:
    if ( v9 == 2 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 7) + 40LL);
      *((_QWORD *)v11 + 3) = 0LL;
      *((_DWORD *)v11 + 10) = 0;
      *a1 |= 0x80000000;
      v13 = Createpxs(0LL, 0LL, 0LL, v11, 0x201u);
      if ( v13 )
      {
        v14 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
        *((_QWORD *)v13 + 2) = v14;
        v13 = *(struct tagXSTATE **)v13;
      }
      *a2 = (__int64)v13;
      if ( v13 )
        PopState(a3, v14, v15, v16);
      else
        return 3;
    }
  }
  return v9;
}
