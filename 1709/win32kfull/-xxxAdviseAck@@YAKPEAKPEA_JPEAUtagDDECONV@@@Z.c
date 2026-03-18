/*
 * XREFs of ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F0990
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01F04B4 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F0680 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F0DD4 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F183C (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  void *v7; // rdx
  struct tagDDECONV *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagINTDDEINFO *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  result = xxxCopyAckIn(a1, a2, a3, &v12);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
    result = 0;
  if ( result == 2 )
  {
    if ( (*((_DWORD *)a3 + 20) & 6) != 0 )
    {
      return 1;
    }
    else
    {
      v5 = *((_QWORD *)a3 + 7);
      v6 = *(_DWORD *)(v5 + 64) & 0xFFFFFFFE;
      if ( (*(_DWORD *)v12 & 0x8000LL) != 0 )
      {
        v7 = *(void **)(v5 + 40);
        v8 = (struct tagDDECONV *)*((_QWORD *)a3 + 4);
      }
      else
      {
        v7 = *(void **)(v5 + 48);
        v8 = a3;
      }
      FreeListAdd(v8, v7, v6);
      PopState(a3, v9, v10, v11);
      return 2;
    }
  }
  return result;
}
