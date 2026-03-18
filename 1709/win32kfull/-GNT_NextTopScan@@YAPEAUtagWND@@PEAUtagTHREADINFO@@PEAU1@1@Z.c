/*
 * XREFs of ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C010EEC4
 * Callers:
 *     NextTopWindow @ 0x1C0065110 (NextTopWindow.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C01B4CB8 (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GNT_NextTopScan(struct tagTHREADINFO *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rcx
  struct tagWND *result; // rax

  if ( a2 )
  {
    result = (struct tagWND *)*((_QWORD *)a2 + 11);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 54);
    if ( !v3 || (*(_DWORD *)(v3 + 48) & 2) != 0 )
      return 0LL;
    result = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL) + 112LL);
  }
  while ( result && *((struct tagWND **)result + 15) != a3 )
    result = (struct tagWND *)*((_QWORD *)result + 11);
  return result;
}
