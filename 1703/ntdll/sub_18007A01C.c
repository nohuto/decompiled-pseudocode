/*
 * XREFs of sub_18007A01C @ 0x18007A01C
 * Callers:
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 *     sub_1800D7D58 @ 0x1800D7D58 (sub_1800D7D58.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18007A01C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  unsigned __int64 *v5; // r10

  result = a2 / qword_18015AF78;
  v3 = a2 / qword_18015AF78
     + (qword_18015AF78
      + (unsigned __int64)(((unsigned int)a2 & ((_DWORD)qword_18015AF78 - 1))
                         + ((unsigned int)a1 & ((_DWORD)qword_18015AF78 - 1)))
      - 1)
     / qword_18015AF78;
  v4 = v3;
  v5 = (unsigned __int64 *)(a1 & ~(qword_18015AF78 - 1));
  if ( v3 )
  {
    do
    {
      result = *v5;
      *v5 = *v5;
      v5 = (unsigned __int64 *)((char *)v5 + qword_18015AF78);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
