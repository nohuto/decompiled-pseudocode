/*
 * XREFs of IoQueryVhdBootInformation @ 0x1405D4FD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140340610;
  if ( a3 < (unsigned int)dword_140340610 )
    v5 = -1073741789;
  else
    memmove(a2, off_14033DC50, (unsigned int)dword_140340610);
  *a4 = v6;
  return v5;
}
