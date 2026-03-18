/*
 * XREFs of WbAddLookupEntryEx @ 0x14057666C
 * Callers:
 *     sub_14057660C @ 0x14057660C (sub_14057660C.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     WbReAlloc @ 0x14057672C (WbReAlloc.c)
 */

__int64 __fastcall WbAddLookupEntryEx(int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r9d
  int v6; // edi
  unsigned int v8; // eax
  int v9; // ecx

  v5 = a1[2];
  v6 = 0;
  if ( a1[1] + 1 >= v5 )
  {
    v6 = WbReAlloc(*((PVOID *)a1 + 2), v5 * *a1, *a1 * (v5 + a1[6]));
    if ( v6 < 0 )
      return (unsigned int)v6;
    a1[2] += a1[6];
  }
  v8 = a1[1];
  if ( a4 <= v8 && a1[2] )
  {
    memmove(
      (void *)(*((_QWORD *)a1 + 2) + (a4 + 1) * *a1),
      (const void *)(*((_QWORD *)a1 + 2) + a4 * *a1),
      *a1 * (v8 - a4));
    v9 = *a1;
    ++a1[1];
    *(_QWORD *)(*((_QWORD *)a1 + 2) + a4 * v9) = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
