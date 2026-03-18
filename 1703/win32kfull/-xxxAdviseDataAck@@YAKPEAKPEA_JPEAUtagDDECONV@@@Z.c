/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01E4494 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E4660 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E4D90 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0200900 (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int result; // eax
  __int64 v5; // r9
  int v6; // edx
  struct tagINTDDEINFO *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != 996 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  result = xxxCopyAckIn(a1, a2, a3, &v7);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
    result = 0;
  if ( result == 2 )
  {
    v5 = *((_QWORD *)a3 + 7);
    v6 = *(_DWORD *)(v5 + 64);
    if ( (*(_DWORD *)v7 & 0x8000LL) != 0 && (v6 & 0x400) != 0 )
      FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v5 + 48), v6 & 0xFFFFFFFE);
    else
      xxxClientFreeDDEHandle(*(_QWORD *)(v5 + 40), v6 & 0xFFFFFFFE);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a3 + gSharedInfo[1] + 25LL) & 1) != 0 )
    {
      return 0;
    }
    else
    {
      PopState(a3);
      return 2;
    }
  }
  return result;
}
