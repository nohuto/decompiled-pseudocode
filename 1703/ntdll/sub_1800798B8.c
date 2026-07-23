/*
 * XREFs of sub_1800798B8 @ 0x1800798B8
 * Callers:
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     sub_180083094 @ 0x180083094 (sub_180083094.c)
 *     sub_1800D5D50 @ 0x1800D5D50 (sub_1800D5D50.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x18009BC50 (wcsrchr.c)
 *     ZwApphelpCacheControl @ 0x1800A5C80 (ZwApphelpCacheControl.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800798B8(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const WCHAR *v6; // rax
  _QWORD v8[48]; // [rsp+20h] [rbp-188h] BYREF
  int v9; // [rsp+1C0h] [rbp+18h] BYREF

  memset(v8, 0, 0x178uLL);
  v4 = 0;
  v9 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  if ( RtlInitUnicodeStringEx((PUNICODE_STRING)&v8[29], v6) < 0 )
    return 0LL;
  LODWORD(v8[46]) = 4;
  v8[45] = &v9;
  if ( (int)ZwApphelpCacheControl(6LL, v8) >= 0 && (a2 & v9) != 0 )
    return 1;
  return v4;
}
