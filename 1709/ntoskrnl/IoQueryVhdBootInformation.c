/*
 * XREFs of IoQueryVhdBootInformation @ 0x1405F1420
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140358CA0;
  if ( a3 < (unsigned int)dword_140358CA0 )
    v5 = -1073741789;
  else
    memmove(a2, off_140355EF8, (unsigned int)dword_140358CA0);
  *a4 = v6;
  return v5;
}
