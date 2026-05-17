/*
 * XREFs of sub_180044934 @ 0x180044934
 * Callers:
 *     A_SHAFinal @ 0x180044710 (A_SHAFinal.c)
 *     sub_180044814 @ 0x180044814 (sub_180044814.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180044934(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (_DWORD)a3 )
  {
    v3 = a2 - (_QWORD)a1;
    a3 = (unsigned int)a3;
    do
    {
      result = _byteswap_ulong(*(_DWORD *)((char *)a1 + v3));
      *a1++ = result;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
