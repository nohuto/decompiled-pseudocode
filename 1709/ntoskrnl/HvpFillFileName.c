/*
 * XREFs of HvpFillFileName @ 0x1404710F0
 * Callers:
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall HvpFillFileName(__int64 a1, unsigned __int16 *a2)
{
  void *v2; // rdi
  void *result; // rax
  unsigned int v5; // edx
  unsigned __int16 v6; // ax
  unsigned int v7; // ecx

  v2 = (void *)(a1 + 48);
  result = memset((void *)(a1 + 48), 0, 0x40uLL);
  v5 = 0;
  if ( a2 )
  {
    v6 = *a2;
    if ( *a2 < 0x40u )
    {
      v7 = v6;
    }
    else
    {
      v7 = 62;
      v5 = v6 - 62;
    }
    return memmove(v2, (const void *)(*((_QWORD *)a2 + 1) + v5), v7);
  }
  return result;
}
