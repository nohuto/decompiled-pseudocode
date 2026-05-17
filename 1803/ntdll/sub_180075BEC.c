/*
 * XREFs of sub_180075BEC @ 0x180075BEC
 * Callers:
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180075BEC(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  unsigned __int64 *v5; // r10

  result = a2 / qword_18015BFA0;
  v3 = a2 / qword_18015BFA0
     + (qword_18015BFA0
      + (unsigned __int64)(((unsigned int)a2 & ((_DWORD)qword_18015BFA0 - 1))
                         + ((unsigned int)a1 & ((_DWORD)qword_18015BFA0 - 1)))
      - 1)
     / qword_18015BFA0;
  v4 = v3;
  v5 = (unsigned __int64 *)(a1 & ~(qword_18015BFA0 - 1));
  if ( v3 )
  {
    do
    {
      result = *v5;
      *v5 = *v5;
      v5 = (unsigned __int64 *)((char *)v5 + qword_18015BFA0);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
