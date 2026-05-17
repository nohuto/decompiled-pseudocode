/*
 * XREFs of sub_1800CB6A4 @ 0x1800CB6A4
 * Callers:
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CB6A4(unsigned __int16 *a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx

  result = *a1;
  *a4 = 0;
  v6 = 2 * result + 2;
  if ( v6 <= a3 )
  {
    v7 = 0;
    if ( (_DWORD)result )
    {
      do
      {
        v8 = v7++;
        *(_WORD *)(a2 + 2 * v8) = *(char *)(v8 + *((_QWORD *)a1 + 1));
      }
      while ( v7 < *a1 );
    }
    result = v7;
    *a4 = v6;
    *(_WORD *)(a2 + 2LL * v7) = 0;
  }
  return result;
}
