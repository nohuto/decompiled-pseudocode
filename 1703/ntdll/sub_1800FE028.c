/*
 * XREFs of sub_1800FE028 @ 0x1800FE028
 * Callers:
 *     sub_18000ABAC @ 0x18000ABAC (sub_18000ABAC.c)
 *     sub_1800FEC20 @ 0x1800FEC20 (sub_1800FEC20.c)
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     RtlRunOnceBeginInitialize @ 0x180028CF0 (RtlRunOnceBeginInitialize.c)
 *     sub_18010AA04 @ 0x18010AA04 (sub_18010AA04.c)
 */

int __fastcall sub_1800FE028(_RTL_RUN_ONCE *a1, int a2, int a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _BYTE *v6; // rsi
  _QWORD *v7; // rbx
  _BYTE *i; // rdx
  _QWORD *v9; // r14
  _QWORD *j; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v14; // [rsp+28h] [rbp-18h]
  _BYTE *v15; // [rsp+30h] [rbp-10h]
  PVOID Context; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(v4) = RtlRunOnceBeginInitialize(a1, 1u, &Context);
  if ( (int)v4 >= 0 )
  {
    v5 = Context;
    v6 = (_BYTE *)*((_QWORD *)Context + 2);
    v7 = v6;
    v15 = v6;
    v14 = v6;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_8;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v6 = v15;
        v7 = v14;
      }
      v4 = (_QWORD *)*v7;
      if ( (*v7 & 1) != 0 )
      {
LABEL_8:
        for ( i = v6 + 8; ; i += 8 )
        {
          if ( (unsigned __int64)i >= v5[2] + 8 * ((unsigned __int64)*((unsigned int *)v5 + 3) >> 5) )
          {
            v4 = 0LL;
            goto LABEL_13;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v7 = *(_QWORD **)i;
        v6 = i;
        v14 = *(_QWORD **)i;
        v4 = *(_QWORD **)i;
        v15 = i;
      }
      else
      {
        v7 = (_QWORD *)*v7;
        v14 = v4;
      }
LABEL_13:
      if ( !v4 )
        break;
      v9 = v7;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v6 = v15;
        v7 = v14;
      }
      for ( j = v6; (*j & 1) == 0; j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == v7 )
        {
          *j = *v7;
          --*((_DWORD *)v5 + 2);
          *v7 |= 0x8000000000000002uLL;
          v7 = j;
          v14 = j;
          goto LABEL_23;
        }
      }
      v9 = 0LL;
      v6 = v15;
      v7 = v14;
LABEL_23:
      sub_18010AA04(&dword_18015C2B0, v9[2]);
      sub_18000913C((int)v9);
    }
    v11 = (int)Context;
    v12 = *((_QWORD *)Context + 2);
    if ( v12 )
      LODWORD(v4) = sub_18000913C(v12);
    if ( a2 )
    {
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
    else
    {
      LODWORD(v4) = sub_18000913C(v11);
      if ( a3 )
        a1->Ptr = 0LL;
    }
  }
  return (int)v4;
}
