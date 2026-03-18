/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x1C0097394
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x1C00971D0 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(unsigned __int8 a1)
{
  if ( gpqForeground )
    *(_BYTE *)(((unsigned __int64)a1 >> 2) + gpqForeground + 224) |= 1 << (2 * (a1 & 3) + 1);
  *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)a1 >> 2)) |= 1 << (2 * (a1 & 3) + 1);
}
