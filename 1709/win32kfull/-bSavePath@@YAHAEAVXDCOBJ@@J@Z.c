/*
 * XREFs of ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0080624
 * Callers:
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSavePath(struct XDCOBJ *a1)
{
  if ( *(_QWORD *)(*(_QWORD *)a1 + 168LL) )
    *(_DWORD *)(*(_QWORD *)a1 + 176LL) |= 2u;
  return 1LL;
}
