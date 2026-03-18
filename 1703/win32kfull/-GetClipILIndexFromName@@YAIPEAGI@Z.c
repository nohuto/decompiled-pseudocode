/*
 * XREFs of ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C01E80DC
 * Callers:
 *     InitClipboardILDef @ 0x1C011A6F0 (InitClipboardILDef.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetClipILIndexFromName(wchar_t *Str2, unsigned int a2)
{
  unsigned int v2; // ebx
  size_t v3; // rsi
  const wchar_t **i; // rdi

  v2 = 0;
  v3 = (unsigned __int64)a2 >> 1;
  for ( i = (const wchar_t **)&gaClipILDef; _wcsnicmp(*i, Str2, v3); i += 3 )
  {
    if ( ++v2 >= 5 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}
