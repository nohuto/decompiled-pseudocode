/*
 * XREFs of sub_1800DB33C @ 0x1800DB33C
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800DB898 @ 0x1800DB898 (sub_1800DB898.c)
 */

__int64 *sub_1800DB33C()
{
  __int64 *v0; // rbx
  __int64 *v1; // r15
  int v2; // r14d
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 *result; // rax
  __int64 v10; // [rsp+50h] [rbp+8h]

  v0 = (__int64 *)qword_18015A570;
LABEL_14:
  result = &qword_18015A570;
  while ( v0 != &qword_18015A570 )
  {
    v1 = v0;
    v2 = 0;
    v0 = (__int64 *)*v0;
    v3 = (_QWORD *)v1[5];
    if ( *v3 )
    {
      v4 = (_QWORD *)v1[5];
      do
      {
        v5 = (_QWORD *)v4[3];
        LODWORD(v6) = 0;
        if ( *v5 )
        {
          v7 = (_QWORD *)v4[3];
          do
          {
            if ( (dword_18015C494 & 0x20) != 0 )
              DbgPrint("AVRF: Checking %ws for duplicate (%ws: %s) \n", v1[3], *v4, *v7);
            v8 = sub_1800DB898(v1, *v4, *v7);
            v10 = v8;
            if ( v8 )
            {
              if ( (dword_18015C494 & 0x10) != 0 )
              {
                DbgPrint("AVRF: Chaining (%ws: %s) to %ws\n", *v4, *v7, v1[3]);
                v8 = v10;
              }
              v7[1] = v8;
            }
            v6 = (unsigned int)(v6 + 1);
            v7 = &v5[3 * v6];
          }
          while ( *v7 );
        }
        v4 = &v3[4 * (unsigned int)++v2];
      }
      while ( *v4 );
      goto LABEL_14;
    }
  }
  return result;
}
